#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG_METHOD_3_61D003A24916EDD5_OFFSET UNITYSDK_OFFSET(0x1D3F6E10)
#define RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG_METHOD_3_643164C5C21A97D9_OFFSET UNITYSDK_OFFSET(0x1D3F6E60)
#define RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F6E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierBackup1Config_TypeDefinitionIndex = 17785;

	class RogueModifierBackup1Config : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_61D003A24916EDD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierBackup1Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierBackup1Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG_METHOD_3_61D003A24916EDD5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_643164C5C21A97D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierBackup1Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierBackup1Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG_METHOD_3_643164C5C21A97D9_OFFSET))(a1, a2);
		}
	};
}
