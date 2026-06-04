#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayStarViewModel; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB610540)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB6105C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB610470)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB6103B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB610650)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB6105F0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayStarControl_TypeDefinitionIndex = 73984;

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

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
