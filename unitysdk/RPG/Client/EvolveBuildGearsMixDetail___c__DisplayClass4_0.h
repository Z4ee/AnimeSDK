#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildTypeGearsDetail; }

#define RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA2BBF10)
#define RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL___C__DISPLAYCLASS4_0___REFRESHMIXDETAILS_B__0_OFFSET UNITYSDK_OFFSET(0xA2BBFA0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildGearsMixDetail___c__DisplayClass4_0_TypeDefinitionIndex = 58774;

	class EvolveBuildGearsMixDetail___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveGearType forgeType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshMixDetails_b__0(::RPG::Client::EvolveBuildTypeGearsDetail* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildTypeGearsDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL___C__DISPLAYCLASS4_0___REFRESHMIXDETAILS_B__0_OFFSET))(this, a);
		}
	};
}
