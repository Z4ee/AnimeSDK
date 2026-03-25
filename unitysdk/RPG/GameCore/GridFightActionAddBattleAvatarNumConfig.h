#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG_METHOD_6_2BE0BA1494797041_OFFSET UNITYSDK_OFFSET(0x1724D5D0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG_METHOD_6_3C16B303F9CD2A6A_OFFSET UNITYSDK_OFFSET(0x1724D740)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1724D6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddBattleAvatarNumConfig_TypeDefinitionIndex = 17728;

	class GridFightActionAddBattleAvatarNumConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2BE0BA1494797041(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddBattleAvatarNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddBattleAvatarNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG_METHOD_6_2BE0BA1494797041_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_3C16B303F9CD2A6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddBattleAvatarNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddBattleAvatarNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG_METHOD_6_3C16B303F9CD2A6A_OFFSET))(a1, a2);
		}
	};
}
