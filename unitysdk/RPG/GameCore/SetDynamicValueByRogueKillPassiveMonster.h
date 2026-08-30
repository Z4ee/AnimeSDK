#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEKILLPASSIVEMONSTER_METHOD_3_AA84E3131D7201C0_OFFSET UNITYSDK_OFFSET(0x1E822040)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEKILLPASSIVEMONSTER_METHOD_3_E086741E3E42518D_OFFSET UNITYSDK_OFFSET(0x1E822080)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEKILLPASSIVEMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E822070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueKillPassiveMonster_TypeDefinitionIndex = 21538;

	class SetDynamicValueByRogueKillPassiveMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEKILLPASSIVEMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AA84E3131D7201C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueKillPassiveMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueKillPassiveMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEKILLPASSIVEMONSTER_METHOD_3_AA84E3131D7201C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E086741E3E42518D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueKillPassiveMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueKillPassiveMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEKILLPASSIVEMONSTER_METHOD_3_E086741E3E42518D_OFFSET))(a1, a2);
		}
	};
}
