#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECHESSROGUEBLOCKCONTENTONENTERCELLCONFIG_METHOD_3_2EACF6362F7407DB_OFFSET UNITYSDK_OFFSET(0x1D1656D0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECHESSROGUEBLOCKCONTENTONENTERCELLCONFIG_METHOD_3_4DC3CF759A599377_OFFSET UNITYSDK_OFFSET(0x1D165680)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECHESSROGUEBLOCKCONTENTONENTERCELLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1656C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceChessRogueBlockContentOnEnterCellConfig_TypeDefinitionIndex = 17246;

	class RogueModifierReplaceChessRogueBlockContentOnEnterCellConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECHESSROGUEBLOCKCONTENTONENTERCELLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4DC3CF759A599377(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceChessRogueBlockContentOnEnterCellConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceChessRogueBlockContentOnEnterCellConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECHESSROGUEBLOCKCONTENTONENTERCELLCONFIG_METHOD_3_4DC3CF759A599377_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2EACF6362F7407DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceChessRogueBlockContentOnEnterCellConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceChessRogueBlockContentOnEnterCellConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECHESSROGUEBLOCKCONTENTONENTERCELLCONFIG_METHOD_3_2EACF6362F7407DB_OFFSET))(a1, a2);
		}
	};
}
