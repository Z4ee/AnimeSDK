#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class VisionBaseConfig; }
namespace RPG::GameCore { class VisionSetConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTUREAICONFIG_METHOD_2_9566F3591B542B38_OFFSET UNITYSDK_OFFSET(0x1CDDF4E0)
#define RPG_GAMECORE_ADVENTUREAICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDFC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAIConfig_TypeDefinitionIndex = 17233;

	class AdventureAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single AttackRange; // 0x10
		::System::Single AttackAngle; // 0x14
		::System::Single AttackCD; // 0x18
		::System::Single ChaseTolerance; // 0x1C
		::System::Single ChaseAngleTolerance; // 0x20
		::System::Boolean FourFeetMode; // 0x24
		::System::Single MaxChaseDistance; // 0x28
		::System::Single AlertnessIncreaseRatio; // 0x2C
		::System::Single LOSLoseTargetDelay; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::VisionSetConfig*>* VisionSetConfigs; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::VisionBaseConfig*>* OverrideVisionConfigs; // 0x40
		::System::Single MinWalkScale; // 0x48
		::System::Single MaxWalkScale; // 0x4C
		::System::Single MinRunScale; // 0x50
		::System::Single MaxRunScale; // 0x54
		::System::Single MinFastRunScale; // 0x58
		::System::Single MaxFastRunScale; // 0x5C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BeforeFollowTeleport; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* AfterFollowTeleport; // 0x68
		::Il2CppArray<::System::String*>* ReactionList; // 0x70
		::System::Boolean RepathHighFrequency; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9566F3591B542B38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAICONFIG_METHOD_2_9566F3591B542B38_OFFSET))(a1, a2);
		}
	};
}
