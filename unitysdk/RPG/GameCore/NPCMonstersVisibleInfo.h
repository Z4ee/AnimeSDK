#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NPCMONSTERSVISIBLEINFO_METHOD_2_539D61DA8B3A9C2E_OFFSET UNITYSDK_OFFSET(0x1746D630)
#define RPG_GAMECORE_NPCMONSTERSVISIBLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1746D750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonstersVisibleInfo_TypeDefinitionIndex = 18608;

	class NPCMonstersVisibleInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 GroupMonsterID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERSVISIBLEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_539D61DA8B3A9C2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NPCMonstersVisibleInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCMonstersVisibleInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERSVISIBLEINFO_METHOD_2_539D61DA8B3A9C2E_OFFSET))(a1, a2);
		}
	};
}
