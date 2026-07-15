#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData_RootMotionCurve.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2; }
namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int MovementStoppedRootMotionBakedData_TypeDefinitionIndex = 65742;

	struct alignas(8) MovementStoppedRootMotionBakedData
	{
		::System::String* startStateName; // 0x10
		::System::String* finishStateName; // 0x18
		::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2* Info; // 0x20
		::RPG::GameCore::CharacterMotionFlag motionFlag; // 0x28
		::Il2CppArray<::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve>* rootMotionCurves; // 0x30
	};
}
