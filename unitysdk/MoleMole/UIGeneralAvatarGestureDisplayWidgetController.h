#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_208CC9941471731A_403;
class Class_2_FCE785A9CEF121D6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x172ED3B0)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_INITDATA_OFFSET UNITYSDK_OFFSET(0x172ED7C0)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x172ED420)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x172ED4F0)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_REFRESHFETCHPANEL_OFFSET UNITYSDK_OFFSET(0x172ED870)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x172ED920)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER__ONCREATEVIEWMODEL_B__3_0_OFFSET UNITYSDK_OFFSET(0x172ED980)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x172ED9F0)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x172EDA90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralAvatarGestureDisplayWidgetController_TypeDefinitionIndex = 90275;

	class UIGeneralAvatarGestureDisplayWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_FCE785A9CEF121D6* get__viewModel()
		{
			return ((::Class_2_FCE785A9CEF121D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitData(::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_403*>* gestureItemDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_403*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_INITDATA_OFFSET))(this, gestureItemDatas);
		}

		::System::Void RefreshFetchPanel(::Class_2_208CC9941471731A_403* gestureData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_403*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_REFRESHFETCHPANEL_OFFSET))(this, gestureData);
		}

		::System::Void _OnCreateViewModel_b__3_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER__ONCREATEVIEWMODEL_B__3_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
