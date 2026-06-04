#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEFINISH_METHOD_3_7EE8F97E03CF487E_OFFSET UNITYSDK_OFFSET(0x19B3BE30)
#define RPG_GAMECORE_ROGUEFINISH_METHOD_3_882F519678594D6A_OFFSET UNITYSDK_OFFSET(0x19B3BF40)
#define RPG_GAMECORE_ROGUEFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19B3BF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueFinish_TypeDefinitionIndex = 20475;

	class RogueFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7EE8F97E03CF487E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFINISH_METHOD_3_7EE8F97E03CF487E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_882F519678594D6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFINISH_METHOD_3_882F519678594D6A_OFFSET))(a1, a2);
		}
	};
}
