#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelCrowdBakedInfo; }
namespace RPG::GameCore { class LevelEntityBakedInfo; }
namespace RPG::GameCore { class LevelGroupSpatialBakedInfo; }
namespace RPG::GameCore { class LevelNPCBakedInfo; }
namespace RPG::GameCore { class LevelPedestrianV2BakedInfo; }

#define RPG_GAMECORE_LEVELGROUPBAKEDINFO_METHOD_2_210EACEC9537F0E6_OFFSET UNITYSDK_OFFSET(0x18A44450)
#define RPG_GAMECORE_LEVELGROUPBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A448B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupBakedInfo_TypeDefinitionIndex = 16258;

	class LevelGroupBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::LevelGroupSpatialBakedInfo* ConflictSpatialInfo; // 0x18
		::RPG::GameCore::LevelGroupSpatialBakedInfo* StreamingSpatialInfo; // 0x20
		::Il2CppArray<::RPG::GameCore::LevelEntityBakedInfo*>* PropList; // 0x28
		::Il2CppArray<::RPG::GameCore::LevelEntityBakedInfo*>* MonsterList; // 0x30
		::Il2CppArray<::RPG::GameCore::LevelEntityBakedInfo*>* NPCList; // 0x38
		::Il2CppArray<::RPG::GameCore::LevelEntityBakedInfo*>* AnchorList; // 0x40
		::Il2CppArray<::RPG::GameCore::LevelEntityBakedInfo*>* DistrictList; // 0x48
		::Il2CppArray<::RPG::GameCore::LevelNPCBakedInfo*>* NPCDedicatedList; // 0x50
		::Il2CppArray<::RPG::GameCore::LevelCrowdBakedInfo*>* CrowdDedicatedList; // 0x58
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2BakedInfo*>* PedestrianV2List; // 0x60
		::Il2CppArray<::System::UInt32>* RegionIDList; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_210EACEC9537F0E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupBakedInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPBAKEDINFO_METHOD_2_210EACEC9537F0E6_OFFSET))(a1, a2);
		}
	};
}
