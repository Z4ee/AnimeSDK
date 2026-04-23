#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SETUPROTATABLEREGIONAIRLOCK_METHOD_3_9AFA6C38688F4A27_OFFSET UNITYSDK_OFFSET(0x18E4EB90)
#define RPG_GAMECORE_SETUPROTATABLEREGIONAIRLOCK_METHOD_3_AB68F75562E37422_OFFSET UNITYSDK_OFFSET(0x18E4EB10)
#define RPG_GAMECORE_SETUPROTATABLEREGIONAIRLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4EB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupRotatableRegionAirlock_TypeDefinitionIndex = 20223;

	class SetupRotatableRegionAirlock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AirlockInstanceID; // 0x18
		::RPG::GameCore::DynamicString* AirlockTrigger; // 0x20
		::RPG::GameCore::DynamicFloat* ValveAInstanceID; // 0x28
		::RPG::GameCore::DynamicFloat* ValveBInstanceID; // 0x30
		::RPG::GameCore::DynamicFloat* ValveARegionIndex; // 0x38
		::RPG::GameCore::DynamicFloat* ValveBRegionIndex; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPROTATABLEREGIONAIRLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AB68F75562E37422(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupRotatableRegionAirlock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupRotatableRegionAirlock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPROTATABLEREGIONAIRLOCK_METHOD_3_AB68F75562E37422_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9AFA6C38688F4A27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupRotatableRegionAirlock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupRotatableRegionAirlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPROTATABLEREGIONAIRLOCK_METHOD_3_9AFA6C38688F4A27_OFFSET))(a1, a2);
		}
	};
}
