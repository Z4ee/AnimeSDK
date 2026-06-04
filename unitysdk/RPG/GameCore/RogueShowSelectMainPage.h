#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUESHOWSELECTMAINPAGE_METHOD_3_01A6659C1084AC3A_OFFSET UNITYSDK_OFFSET(0x19BBC950)
#define RPG_GAMECORE_ROGUESHOWSELECTMAINPAGE_METHOD_3_76B99CE4FCD96B0E_OFFSET UNITYSDK_OFFSET(0x19BBC840)
#define RPG_GAMECORE_ROGUESHOWSELECTMAINPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BBC920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueShowSelectMainPage_TypeDefinitionIndex = 19662;

	class RogueShowSelectMainPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESHOWSELECTMAINPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_76B99CE4FCD96B0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueShowSelectMainPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueShowSelectMainPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESHOWSELECTMAINPAGE_METHOD_3_76B99CE4FCD96B0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_01A6659C1084AC3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueShowSelectMainPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueShowSelectMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESHOWSELECTMAINPAGE_METHOD_3_01A6659C1084AC3A_OFFSET))(a1, a2);
		}
	};
}
