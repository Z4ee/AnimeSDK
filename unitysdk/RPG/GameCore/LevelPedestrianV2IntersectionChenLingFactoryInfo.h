#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactorySpawnInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryStateInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYINFO_METHOD_3_898A1E281F174E52_OFFSET UNITYSDK_OFFSET(0x17346300)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYINFO_METHOD_3_AE8A5148275866DC_OFFSET UNITYSDK_OFFSET(0x17346350)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17346340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionChenLingFactoryInfo_TypeDefinitionIndex = 15898;

	class LevelPedestrianV2IntersectionChenLingFactoryInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo* SwitchState; // 0x50
		::RPG::MVector3 SwitchAnchor; // 0x58
		::System::Single SwitchAnchorRadius; // 0x64
		::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactorySpawnInfo* SpawnInfo; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_898A1E281F174E52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYINFO_METHOD_3_898A1E281F174E52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AE8A5148275866DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYINFO_METHOD_3_AE8A5148275866DC_OFFSET))(a1, a2);
		}
	};
}
