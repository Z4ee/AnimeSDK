#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SubLevelGraphDynamicFloatOverride; }
namespace RPG::GameCore { class SubLevelGraphDynamicStringOverride; }
namespace System { class String; }

#define RPG_GAMECORE_STARTSUMMONUNITGAMEPLAY_METHOD_3_0A26D52F4A52EDFD_OFFSET UNITYSDK_OFFSET(0x19CB9400)
#define RPG_GAMECORE_STARTSUMMONUNITGAMEPLAY_METHOD_3_B40DD527B0A543B4_OFFSET UNITYSDK_OFFSET(0x19CB9480)
#define RPG_GAMECORE_STARTSUMMONUNITGAMEPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB9450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartSummonUnitGameplay_TypeDefinitionIndex = 19993;

	class StartSummonUnitGameplay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ConfigName; // 0x18
		::Il2CppArray<::RPG::GameCore::SubLevelGraphDynamicFloatOverride*>* FloatOverrides; // 0x20
		::Il2CppArray<::RPG::GameCore::SubLevelGraphDynamicStringOverride*>* StringOverrides; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUMMONUNITGAMEPLAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0A26D52F4A52EDFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartSummonUnitGameplay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartSummonUnitGameplay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUMMONUNITGAMEPLAY_METHOD_3_0A26D52F4A52EDFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B40DD527B0A543B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartSummonUnitGameplay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartSummonUnitGameplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUMMONUNITGAMEPLAY_METHOD_3_B40DD527B0A543B4_OFFSET))(a1, a2);
		}
	};
}
