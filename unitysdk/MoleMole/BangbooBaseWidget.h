#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D2F9C9EC7859C427.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_EEA0111A28582B57;
class Class_2_4DA7BFFCF976F7D7;
namespace MoleMole { class UIBangbooDevelopPopWindowController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_BANGBOOBASEWIDGET_GETLEFTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x17516990)
#define MOLEMOLE_BANGBOOBASEWIDGET_GETRIGHTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x175169E0)
#define MOLEMOLE_BANGBOOBASEWIDGET_GETTIPSTEXT_OFFSET UNITYSDK_OFFSET(0x17516A30)
#define MOLEMOLE_BANGBOOBASEWIDGET_GET_PARENTDEVELOPUI_OFFSET UNITYSDK_OFFSET(0x17516840)
#define MOLEMOLE_BANGBOOBASEWIDGET_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x17516820)
#define MOLEMOLE_BANGBOOBASEWIDGET_LEFTBTNCALL_OFFSET UNITYSDK_OFFSET(0x17516B10)
#define MOLEMOLE_BANGBOOBASEWIDGET_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17516BA0)
#define MOLEMOLE_BANGBOOBASEWIDGET_RIGHTBTNCALL_OFFSET UNITYSDK_OFFSET(0x17516AD0)
#define MOLEMOLE_BANGBOOBASEWIDGET_SETATTRIBUTEFUNC_OFFSET UNITYSDK_OFFSET(0x175168C0)
#define MOLEMOLE_BANGBOOBASEWIDGET_SETBANGBOODATA_OFFSET UNITYSDK_OFFSET(0x17516A80)
#define MOLEMOLE_BANGBOOBASEWIDGET_SETPARENTVIEW_OFFSET UNITYSDK_OFFSET(0x17516B50)
#define MOLEMOLE_BANGBOOBASEWIDGET_SETPROGRESSMAT_OFFSET UNITYSDK_OFFSET(0x17516910)
#define MOLEMOLE_BANGBOOBASEWIDGET_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x17516830)
#define MOLEMOLE_BANGBOOBASEWIDGET_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x17516950)
#define MOLEMOLE_BANGBOOBASEWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x17516C10)
#define MOLEMOLE_BANGBOOBASEWIDGET___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17516C70)

namespace MoleMole
{
	inline static constexpr unsigned int BangbooBaseWidget_TypeDefinitionIndex = 65241;

	class BangbooBaseWidget : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_4DA7BFFCF976F7D7* _data; // 0x2B8
		::UnityEngine::Material* _percentMaterial; // 0x2C0
		::Class_1_EEA0111A28582B57* _Parent_k__BackingField; // 0x2C8
		::System::Action_3<::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::Enum_3_D2F9C9EC7859C427>* AttSet; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET__CTOR_OFFSET))(this);
		}

		::Class_1_EEA0111A28582B57* get_Parent()
		{
			return ((::Class_1_EEA0111A28582B57*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::Class_1_EEA0111A28582B57* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EEA0111A28582B57*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_SET_PARENT_OFFSET))(this, value);
		}

		::MoleMole::UIBangbooDevelopPopWindowController* get_parentDevelopUI()
		{
			return ((::MoleMole::UIBangbooDevelopPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_GET_PARENTDEVELOPUI_OFFSET))(this);
		}

		::System::Void SetAttributeFunc(::System::Action_3<::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::Enum_3_D2F9C9EC7859C427>* attributeSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::Enum_3_D2F9C9EC7859C427>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_SETATTRIBUTEFUNC_OFFSET))(this, attributeSet);
		}

		::System::Void SetProgressMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_SETPROGRESSMAT_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_UPDATEUI_OFFSET))(this);
		}

		::System::String* GetLeftBtnText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_GETLEFTBTNTEXT_OFFSET))(this);
		}

		::System::String* GetRightBtnText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_GETRIGHTBTNTEXT_OFFSET))(this);
		}

		::System::String* GetTipsText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_GETTIPSTEXT_OFFSET))(this);
		}

		::System::Void SetBangbooData(::Class_2_4DA7BFFCF976F7D7* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_4DA7BFFCF976F7D7*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_SETBANGBOODATA_OFFSET))(this, data);
		}

		::System::Void RightBtnCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_RIGHTBTNCALL_OFFSET))(this);
		}

		::System::Void LeftBtnCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_LEFTBTNCALL_OFFSET))(this);
		}

		::System::Void SetParentView(::Class_1_EEA0111A28582B57* view)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EEA0111A28582B57*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_SETPARENTVIEW_OFFSET))(this, view);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET___BASE_ONHIDE_OFFSET))(this);
		}
	};
}
