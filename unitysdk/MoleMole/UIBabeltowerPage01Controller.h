#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBabeltowerPageController.h"

class Class_2_79AE422BA06F6D26_1;
namespace MoleMole { class UIBabeltowerFightingInfoWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER_AFTERSHOWLEVELUPANIMATION_OFFSET UNITYSDK_OFFSET(0x12F4E390)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER_CHECKNEWBIE_OFFSET UNITYSDK_OFFSET(0x12F4DCD0)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER_GETFIGHTINFOWIDGET_OFFSET UNITYSDK_OFFSET(0x12F4E500)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12F4D9A0)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x12F4DD50)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12F4DAA0)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12F4E610)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER__ONUIOPEN_B__3_0_OFFSET UNITYSDK_OFFSET(0x12F4E670)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___BASE_AFTERSHOWLEVELUPANIMATION_OFFSET UNITYSDK_OFFSET(0x12F4E6F0)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___BASE_GETFIGHTINFOWIDGET_OFFSET UNITYSDK_OFFSET(0x12F4E780)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12F4E790)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___BASE_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x12F4E860)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12F4E910)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPage01Controller_TypeDefinitionIndex = 38042;

	class UIBabeltowerPage01Controller : public ::MoleMole::UIBabeltowerPageController
	{
	public:
		::Class_2_79AE422BA06F6D26_1* _view; // 0x3C8
		::System::String* ANIM_NAME; // 0x3D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnPostRefreshView(::System::Int32 initScrollIndex, ::System::UInt32 initFloor, ::System::Boolean isDoAnimation, ::System::Boolean isWaitAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER_ONPOSTREFRESHVIEW_OFFSET))(this, initScrollIndex, initFloor, isDoAnimation, isWaitAnimation);
		}

		::System::Void CheckNewbie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER_CHECKNEWBIE_OFFSET))(this);
		}

		::System::Void AfterShowLevelUpAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER_AFTERSHOWLEVELUPANIMATION_OFFSET))(this);
		}

		::MoleMole::UIBabeltowerFightingInfoWidgetController* GetFightInfoWidget()
		{
			return ((::MoleMole::UIBabeltowerFightingInfoWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER_GETFIGHTINFOWIDGET_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER__ONUIOPEN_B__3_0_OFFSET))(this);
		}

		::System::Void __base_AfterShowLevelUpAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___BASE_AFTERSHOWLEVELUPANIMATION_OFFSET))(this);
		}

		::MoleMole::UIBabeltowerFightingInfoWidgetController* __base_GetFightInfoWidget()
		{
			return ((::MoleMole::UIBabeltowerFightingInfoWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___BASE_GETFIGHTINFOWIDGET_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnPostRefreshView(::System::Int32 P0, ::System::UInt32 P1, ::System::Boolean P2, ::System::Boolean P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___BASE_ONPOSTREFRESHVIEW_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
