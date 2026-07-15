#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEBOSSDIFFICULTYSTATECONFIG_METHOD_2_29189E77B99F6CDF_OFFSET UNITYSDK_OFFSET(0x1B70EB60)
#define RPG_GAMECORE_CHALLENGEBOSSDIFFICULTYSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B70ED40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeBossDifficultyStateConfig_TypeDefinitionIndex = 15756;

	class ChallengeBossDifficultyStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StateGroupName; // 0x10
		::System::String* NoneStateName; // 0x18
		::System::String* EnterMapEventName; // 0x20
		::System::String* ExitMapEventName; // 0x28
		::System::String* DifficultyStateNameFormat; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSDIFFICULTYSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_29189E77B99F6CDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengeBossDifficultyStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeBossDifficultyStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSDIFFICULTYSTATECONFIG_METHOD_2_29189E77B99F6CDF_OFFSET))(a1, a2);
		}
	};
}
