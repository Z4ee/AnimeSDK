#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_9333BACDC00CE767_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralAvatarGesturePurchaseWidgetController_Context; }

#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18AD3CE0)
#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18AD3D50)
#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18AD3DF0)
#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x18AD3EA0)
#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD3F50)
#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18AD3FB0)
#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18AD4050)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralAvatarGesturePurchaseWidgetController_TypeDefinitionIndex = 59810;

	class UIGeneralAvatarGesturePurchaseWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_9333BACDC00CE767_3* get__viewModel()
		{
			return ((::Class_2_9333BACDC00CE767_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshData(::MoleMole::UIGeneralAvatarGesturePurchaseWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralAvatarGesturePurchaseWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_REFRESHDATA_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
