#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIFollowMode.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETAIFOLLOW_METHOD_3_B8C8045FA96FC378_OFFSET UNITYSDK_OFFSET(0x186606D0)
#define RPG_GAMECORE_ADVSETAIFOLLOW_METHOD_3_F2C8FB101CD18266_OFFSET UNITYSDK_OFFSET(0x186607F0)
#define RPG_GAMECORE_ADVSETAIFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x18660710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetAIFollow_TypeDefinitionIndex = 21072;

	class AdvSetAIFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean FetchTarget; // 0x18
		::RPG::GameCore::DynamicFloat* EntityInstanceID; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Boolean FetchFollowTarget; // 0x30
		::RPG::GameCore::DynamicFloat* FollowEntityInstanceID; // 0x38
		::RPG::GameCore::TargetEvaluator* FollowTargetType; // 0x40
		::RPG::GameCore::AIFollowMode FollowMode; // 0x48
		::System::Single StopMoveDistance; // 0x4C
		::System::Single StartWalkDistance; // 0x50
		::System::Single StartWalkTime; // 0x54
		::System::Single StartRunDistance; // 0x58
		::System::Single StartSprintDistance; // 0x5C
		::System::Single TeleportDistance; // 0x60
		::System::Single AngleTolerance; // 0x64
		::System::Boolean UseSlot; // 0x68
		::RPG::GameCore::AdvancedFollowType FollowType; // 0x6C
		::System::Single StartFollowDistance; // 0x70
		::Il2CppArray<::System::Int32>* PreferSlotIDs; // 0x78
		::System::Single PredictTime; // 0x80
		::System::Single Halflife; // 0x84
		::System::Single TeleportDist; // 0x88
		::System::Boolean NeedAvoid; // 0x8C
		::System::Single StartAvoidDistance; // 0x90
		::System::Single StartAvoidTime; // 0x94
		::System::Boolean DisableTeleport; // 0x98
		::System::Boolean NoTeleportInCamera; // 0x99
		::System::Boolean UseEvent; // 0x9A
		::RPG::GameCore::DynamicString* StartEvent; // 0xA0
		::RPG::GameCore::DynamicString* StopEvent; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAIFOLLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B8C8045FA96FC378(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetAIFollow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetAIFollow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAIFOLLOW_METHOD_3_B8C8045FA96FC378_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F2C8FB101CD18266(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetAIFollow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetAIFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAIFOLLOW_METHOD_3_F2C8FB101CD18266_OFFSET))(a1, a2);
		}
	};
}
