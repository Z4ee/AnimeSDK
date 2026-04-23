#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ENpcLookAtMode.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/LevelAnimatingObjectState.h"
#include "unitysdk/RPG/GameCore/NPCMonsterPurposeType.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIConfigInfo; }
namespace RPG::GameCore { class AIVariableValueSource; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LevelDialogInfo; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LevelLookAtPositionInfo; }
namespace RPG::GameCore { class LevelMonsterSpawnConfig; }
namespace RPG::GameCore { class LevelNpcLookAtTargetInfo; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class SOConfigInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELMONSTERINFO_METHOD_4_D865A8CF394D8916_OFFSET UNITYSDK_OFFSET(0x18A49280)
#define RPG_GAMECORE_LEVELMONSTERINFO_METHOD_4_E2041FDB068DFF3F_OFFSET UNITYSDK_OFFSET(0x18A49160)
#define RPG_GAMECORE_LEVELMONSTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A49200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelMonsterInfo_TypeDefinitionIndex = 16368;

	class LevelMonsterInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::UInt32 NPCMonsterID; // 0x38
		::System::String* LevelGraph; // 0x40
		::RPG::GameCore::AIConfigInfo* AIConfig; // 0x48
		::RPG::GameCore::AIVariableValueSource* AIVariableSource; // 0x50
		::RPG::GameCore::SOConfigInfo* SOConfig; // 0x58
		::System::Boolean LoadOnInitial; // 0x60
		::RPG::GameCore::LevelGraphValueSource* ValueSource; // 0x68
		::System::UInt32 CampID; // 0x70
		::RPG::GameCore::BattleAreaReferenceInfo* BattleArea; // 0x78
		::RPG::GameCore::LevelTriggerInfo* Trigger; // 0x80
		::RPG::GameCore::LevelAnimatingObjectState InitialAnimState; // 0x88
		::System::Boolean IsSkipEventID; // 0x8C
		::System::UInt32 EventID; // 0x90
		::RPG::GameCore::NPCMonsterPurposeType PurposeType; // 0x94
		::System::UInt32 FarmElementID; // 0x98
		::Il2CppArray<::System::Int32>* BoardShowList; // 0xA0
		::System::Boolean IsNeedFade; // 0xA8
		::RPG::GameCore::ENpcLookAtMode DefaultLookAtMode; // 0xAC
		::RPG::GameCore::LevelNpcLookAtTargetInfo* DefaultLookAtTargetInfo; // 0xB0
		::RPG::GameCore::LevelLookAtPositionInfo* DefaultLookAtPositionInfo; // 0xB8
		::System::UInt32 NearestTeleportMappingInfoID; // 0xC0
		::System::Boolean IsClientOnly; // 0xC4
		::Il2CppArray<::RPG::GameCore::EntityTag>* TagList; // 0xC8
		::RPG::GameCore::LevelDialogInfo* Dialog; // 0xD0
		::System::Single DialogueTriggerRadius; // 0xD8
		::RPG::Client::TextID OverrideNPCName; // 0xE0
		::RPG::Client::TextID OverrideNPCTitle; // 0xF0
		::RPG::GameCore::JsonEnum* InteractIconType; // 0x100
		::RPG::GameCore::LevelMonsterSpawnConfig* SpawnConfig; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMONSTERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E2041FDB068DFF3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelMonsterInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelMonsterInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMONSTERINFO_METHOD_4_E2041FDB068DFF3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D865A8CF394D8916(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelMonsterInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMONSTERINFO_METHOD_4_D865A8CF394D8916_OFFSET))(a1, a2);
		}
	};
}
