#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ESCAPEFROMBATTLE_METHOD_3_5F4FCA62293D37BE_OFFSET UNITYSDK_OFFSET(0x196F5650)
#define RPG_GAMECORE_ESCAPEFROMBATTLE_METHOD_3_B5AF68539DC0B62F_OFFSET UNITYSDK_OFFSET(0x196F56D0)
#define RPG_GAMECORE_ESCAPEFROMBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x196F56A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EscapeFromBattle_TypeDefinitionIndex = 21886;

	class EscapeFromBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean TriggerNpcMonsterEscape; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ESCAPEFROMBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5F4FCA62293D37BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EscapeFromBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EscapeFromBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ESCAPEFROMBATTLE_METHOD_3_5F4FCA62293D37BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B5AF68539DC0B62F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EscapeFromBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EscapeFromBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ESCAPEFROMBATTLE_METHOD_3_B5AF68539DC0B62F_OFFSET))(a1, a2);
		}
	};
}
