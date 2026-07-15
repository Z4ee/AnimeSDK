#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ESCAPEFROMBATTLE_METHOD_3_95012B5D3AAF2314_OFFSET UNITYSDK_OFFSET(0x1C05E330)
#define RPG_GAMECORE_ESCAPEFROMBATTLE_METHOD_3_B5AF68539DC0B62F_OFFSET UNITYSDK_OFFSET(0x1C05E370)
#define RPG_GAMECORE_ESCAPEFROMBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C05E360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EscapeFromBattle_TypeDefinitionIndex = 22313;

	class EscapeFromBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean TriggerNpcMonsterEscape; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ESCAPEFROMBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_95012B5D3AAF2314(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EscapeFromBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EscapeFromBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ESCAPEFROMBATTLE_METHOD_3_95012B5D3AAF2314_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B5AF68539DC0B62F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EscapeFromBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EscapeFromBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ESCAPEFROMBATTLE_METHOD_3_B5AF68539DC0B62F_OFFSET))(a1, a2);
		}
	};
}
