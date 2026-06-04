#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD_METHOD_3_71F51698F24FE80C_OFFSET UNITYSDK_OFFSET(0x199A5460)
#define RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD_METHOD_3_B83B4F61C2B06D98_OFFSET UNITYSDK_OFFSET(0x199A5570)
#define RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD__CTOR_OFFSET UNITYSDK_OFFSET(0x199A5540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyUpdateInfoOnSwitchWorld_TypeDefinitionIndex = 19787;

	class MonopolyUpdateInfoOnSwitchWorld : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_71F51698F24FE80C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD_METHOD_3_71F51698F24FE80C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B83B4F61C2B06D98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD_METHOD_3_B83B4F61C2B06D98_OFFSET))(a1, a2);
		}
	};
}
