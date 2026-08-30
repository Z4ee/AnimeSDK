#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD_METHOD_3_6DE3DC73F77F63D5_OFFSET UNITYSDK_OFFSET(0x1D2CBBB0)
#define RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD_METHOD_3_B83B4F61C2B06D98_OFFSET UNITYSDK_OFFSET(0x1D2CBC80)
#define RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2CBC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyUpdateInfoOnSwitchWorld_TypeDefinitionIndex = 20697;

	class MonopolyUpdateInfoOnSwitchWorld : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6DE3DC73F77F63D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD_METHOD_3_6DE3DC73F77F63D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B83B4F61C2B06D98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD_METHOD_3_B83B4F61C2B06D98_OFFSET))(a1, a2);
		}
	};
}
