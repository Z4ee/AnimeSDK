#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingTribeDropPointInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEINFO_METHOD_3_AF440F6FC5242D39_OFFSET UNITYSDK_OFFSET(0x1D7C5C50)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEINFO_METHOD_3_D8D03E5B99367726_OFFSET UNITYSDK_OFFSET(0x1D7C5B80)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C5C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionChenLingTribeInfo_TypeDefinitionIndex = 17308;

	class LevelPedestrianV2IntersectionChenLingTribeInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::System::UInt32 MaxMemberCount; // 0x50
		::System::UInt32 MemberEmitSpeed; // 0x54
		::System::Single SlotRadius; // 0x58
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*>* EnterRoadEntries; // 0x60
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*>* ExitRoadEntries; // 0x68
		::System::Single OverrideExitTriggerRadius; // 0x70
		::System::String* ExitTriggerAnim; // 0x78
		::System::Single ExitSpeedRatio; // 0x80
		::RPG::MVector2 RandomAutoLeaveRange; // 0x84
		::System::Boolean AllowMemberActivity; // 0x8C
		::System::Single DropPercent; // 0x90
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*>* DropPoints; // 0x98
		::System::String* ChenLingStackGroupCollectionConfigPath; // 0xA0
		::Il2CppArray<::System::String*>* ChenLingStackGroupUniqueNames; // 0xA8
		::System::Single ChenLingStackGroupWeight; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D8D03E5B99367726(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEINFO_METHOD_3_D8D03E5B99367726_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AF440F6FC5242D39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEINFO_METHOD_3_AF440F6FC5242D39_OFFSET))(a1, a2);
		}
	};
}
