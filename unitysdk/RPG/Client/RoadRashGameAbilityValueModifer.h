#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ERoadRashGameAbilityValueModifyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ROADRASHGAMEABILITYVALUEMODIFER_METHOD_2_5946A9AF26738BBC_OFFSET UNITYSDK_OFFSET(0x1D313F20)
#define RPG_CLIENT_ROADRASHGAMEABILITYVALUEMODIFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D314120)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbilityValueModifer_TypeDefinitionIndex = 10285;

	class RoadRashGameAbilityValueModifer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint Priority; // 0x10
		::RPG::GameCore::FixPoint Value; // 0x18
		::RPG::Client::ERoadRashGameAbilityValueModifyType Type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYVALUEMODIFER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5946A9AF26738BBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbilityValueModifer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbilityValueModifer*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYVALUEMODIFER_METHOD_2_5946A9AF26738BBC_OFFSET))(a1, a2);
		}
	};
}
