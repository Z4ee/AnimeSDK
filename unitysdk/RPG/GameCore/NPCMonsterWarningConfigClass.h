#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdvSceneDangerMonsterWarningConfig; }

#define RPG_GAMECORE_NPCMONSTERWARNINGCONFIGCLASS_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2EFAC0)
#define RPG_GAMECORE_NPCMONSTERWARNINGCONFIGCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2EFB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonsterWarningConfigClass_TypeDefinitionIndex = 17411;

	class NPCMonsterWarningConfigClass : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AdvSceneDangerMonsterWarningConfig* AdvSceneDangerMonsterWarning; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERWARNINGCONFIGCLASS__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NPCMonsterWarningConfigClass*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCMonsterWarningConfigClass*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERWARNINGCONFIGCLASS_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
