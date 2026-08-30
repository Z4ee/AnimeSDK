#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEFINISH_METHOD_3_882F519678594D6A_OFFSET UNITYSDK_OFFSET(0x1D932B60)
#define RPG_GAMECORE_ROGUEFINISH_METHOD_3_A3E68E2377B7A507_OFFSET UNITYSDK_OFFSET(0x1D932A90)
#define RPG_GAMECORE_ROGUEFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D932B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueFinish_TypeDefinitionIndex = 21446;

	class RogueFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A3E68E2377B7A507(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFINISH_METHOD_3_A3E68E2377B7A507_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_882F519678594D6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFINISH_METHOD_3_882F519678594D6A_OFFSET))(a1, a2);
		}
	};
}
