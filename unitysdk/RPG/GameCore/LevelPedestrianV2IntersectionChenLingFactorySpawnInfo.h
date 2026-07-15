#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSPAWNINFO_METHOD_2_BE550E0906BC9813_OFFSET UNITYSDK_OFFSET(0x1B082C90)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSPAWNINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B082E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionChenLingFactorySpawnInfo_TypeDefinitionIndex = 16616;

	class LevelPedestrianV2IntersectionChenLingFactorySpawnInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MaxMemberCount; // 0x10
		::System::UInt32 MemberEmitSpeed; // 0x14
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*>* EnterRoadEntries; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSPAWNINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BE550E0906BC9813(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactorySpawnInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactorySpawnInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSPAWNINFO_METHOD_2_BE550E0906BC9813_OFFSET))(a1, a2);
		}
	};
}
