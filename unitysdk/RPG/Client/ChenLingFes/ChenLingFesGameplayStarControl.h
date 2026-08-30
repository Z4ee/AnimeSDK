#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayStarViewModel; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB5D090)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB5D140)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB5CED0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCB5CE50)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayStarControl_TypeDefinitionIndex = 80000;

	class ChenLingFesGameplayStarControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PrefabPath; // 0x0
		::RPG::Client::UIStateCtrl* _StateCtrl; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayStarViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayStarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
