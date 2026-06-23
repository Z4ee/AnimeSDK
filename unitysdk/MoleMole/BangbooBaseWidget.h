#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D2F9C9EC7859C427.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_EEA0111A28582B57;
class Class_2_6DA22669E4D1C4BF;
namespace MoleMole { class UIBangbooDevelopPopWindowController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_BANGBOOBASEWIDGET_GETLEFTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x144BF6E0)
#define MOLEMOLE_BANGBOOBASEWIDGET_GETRIGHTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x144BF730)
#define MOLEMOLE_BANGBOOBASEWIDGET_GETTIPSTEXT_OFFSET UNITYSDK_OFFSET(0x144BF780)
#define MOLEMOLE_BANGBOOBASEWIDGET_GET_PARENTDEVELOPUI_OFFSET UNITYSDK_OFFSET(0x144BF590)
#define MOLEMOLE_BANGBOOBASEWIDGET_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x144BF570)
#define MOLEMOLE_BANGBOOBASEWIDGET_LEFTBTNCALL_OFFSET UNITYSDK_OFFSET(0x144BF860)
#define MOLEMOLE_BANGBOOBASEWIDGET_ONHIDE_OFFSET UNITYSDK_OFFSET(0x144BF8F0)
#define MOLEMOLE_BANGBOOBASEWIDGET_RIGHTBTNCALL_OFFSET UNITYSDK_OFFSET(0x144BF820)
#define MOLEMOLE_BANGBOOBASEWIDGET_SETATTRIBUTEFUNC_OFFSET UNITYSDK_OFFSET(0x144BF610)
#define MOLEMOLE_BANGBOOBASEWIDGET_SETBANGBOODATA_OFFSET UNITYSDK_OFFSET(0x144BF7D0)
#define MOLEMOLE_BANGBOOBASEWIDGET_SETPARENTVIEW_OFFSET UNITYSDK_OFFSET(0x144BF8A0)
#define MOLEMOLE_BANGBOOBASEWIDGET_SETPROGRESSMAT_OFFSET UNITYSDK_OFFSET(0x144BF660)
#define MOLEMOLE_BANGBOOBASEWIDGET_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x144BF580)
#define MOLEMOLE_BANGBOOBASEWIDGET_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x144BF6A0)
#define MOLEMOLE_BANGBOOBASEWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x144BF960)
#define MOLEMOLE_BANGBOOBASEWIDGET___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x144BF9C0)

namespace MoleMole
{
	inline static constexpr unsigned int BangbooBaseWidget_TypeDefinitionIndex = 84646;

	class BangbooBaseWidget : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_6DA22669E4D1C4BF* _data; // 0x2C0
		::UnityEngine::Material* _percentMaterial; // 0x2C8
		::Class_1_EEA0111A28582B57* _Parent_k__BackingField; // 0x2D0
		::System::Action_3<::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::Enum_3_D2F9C9EC7859C427>* AttSet; // 0x2D8

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

		::System::Void SetBangbooData(::Class_2_6DA22669E4D1C4BF* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6DA22669E4D1C4BF*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_SETBANGBOODATA_OFFSET))(this, data);
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
