#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayTargetItemViewModel; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETDOTCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB5D540)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETDOTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB5D5F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETDOTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB5D210)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETDOTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCB5D190)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayTargetDotControl_TypeDefinitionIndex = 80002;

	class ChenLingFesGameplayTargetDotControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::UIStateCtrl* _StateCtrl; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETDOTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETDOTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETDOTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETDOTCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
