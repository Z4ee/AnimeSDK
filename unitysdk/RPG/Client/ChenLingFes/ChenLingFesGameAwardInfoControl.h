#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameAwardInfoViewModel; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB32C60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB32D10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB32850)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCB327D0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameAwardInfoControl_TypeDefinitionIndex = 80014;

	class ChenLingFesGameAwardInfoControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::PrefabLoadMeta* _LoadMeta; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameAwardInfoViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameAwardInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
