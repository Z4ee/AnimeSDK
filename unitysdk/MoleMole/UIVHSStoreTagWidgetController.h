#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_6C1130EE789A61BA;
class Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVHSStoreTagWidgetController_Data; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_AFTERTAGIDCHANGE_OFFSET UNITYSDK_OFFSET(0x12C89E50)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALALLTAGSUCCESS_OFFSET UNITYSDK_OFFSET(0x12C899F0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALTAGLAYER_OFFSET UNITYSDK_OFFSET(0x12C894B0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALVHSATLEASTMATCHONETAG_OFFSET UNITYSDK_OFFSET(0x12C89850)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_GET__DATA_OFFSET UNITYSDK_OFFSET(0x12C89F90)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12C88EC0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12C89010)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12C88F50)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12C88DF0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12C88E50)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_PLAYHIGHLIGHTTAGANIM_OFFSET UNITYSDK_OFFSET(0x12C89D90)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_REFRESHLAYER_OFFSET UNITYSDK_OFFSET(0x12C89250)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_REFRESHTAGLAYER_OFFSET UNITYSDK_OFFSET(0x12C87770)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_SET__DATA_OFFSET UNITYSDK_OFFSET(0x12C891B0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C8A010)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C89FA0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12C8A050)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12C8A0E0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12C8A180)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12C8A210)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12C8A2A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreTagWidgetController_TypeDefinitionIndex = 66235;

	class UIVHSStoreTagWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::String** StaticGet_HighlightAnimName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreTagWidgetController_TypeDefinitionIndex)->GetStaticField(0x37F80);
		}
		::Class_2_6C1130EE789A61BA* _view; // 0x2F0
		::System::Boolean _first; // 0x2F8
		::MoleMole::UIVHSStoreTagWidgetController_Data* __data; // 0x300
		::System::Int32 _trendingLayer; // 0x308
		::System::Threading::CancellationTokenSource* _tagRefreshCts; // 0x310
		::System::Boolean _tagRefreshDone; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshTagLayer(::System::Collections::Generic::IReadOnlyList_1<::Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>* selectedVhs, ::System::Single animDelayTime, ::System::Boolean skipAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_REFRESHTAGLAYER_OFFSET))(this, selectedVhs, animDelayTime, skipAnim);
		}

		static ::System::Boolean CalVhsAtLeastMatchOneTag(::System::Int32 vhsId, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* tagIds)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALVHSATLEASTMATCHONETAG_OFFSET))(vhsId, tagIds);
		}

		static ::System::Int32 CalTagLayer(::System::Int32 tagId, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* selectedVhs)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALTAGLAYER_OFFSET))(tagId, selectedVhs);
		}

		static ::System::Boolean CalAllTagSuccess(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* tags, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* selectedVhs)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALALLTAGSUCCESS_OFFSET))(tags, selectedVhs);
		}

		::System::Void RefreshLayer(::System::Int32 trendingLayer, ::System::Single animDelayTime, ::System::Boolean skipAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_REFRESHLAYER_OFFSET))(this, trendingLayer, animDelayTime, skipAnim);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid PlayHighlightTagAnim(::System::Boolean highlight, ::System::Single animDelayTime, ::System::Boolean skipAnim, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_PLAYHIGHLIGHTTAGANIM_OFFSET))(this, highlight, animDelayTime, skipAnim, cancellationToken);
		}

		::System::Void AfterTagIDChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_AFTERTAGIDCHANGE_OFFSET))(this);
		}

		::MoleMole::UIVHSStoreTagWidgetController_Data* get__data()
		{
			return ((::MoleMole::UIVHSStoreTagWidgetController_Data*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_GET__DATA_OFFSET))(this);
		}

		::System::Void set__data(::MoleMole::UIVHSStoreTagWidgetController_Data* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStoreTagWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_SET__DATA_OFFSET))(this, value);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
