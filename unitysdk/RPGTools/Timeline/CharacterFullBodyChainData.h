#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/FullBodyBipedChain.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERFULLBODYCHAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D13D5F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterFullBodyChainData_TypeDefinitionIndex = 48422;

	class CharacterFullBodyChainData : public ::System::Object
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::String* CharacterUniqueName; // 0x18
		::System::String* TargetCharacterUniqueName; // 0x20
		::System::String* TargetCharacterAttachPoint; // 0x28
		::System::String* TargetAreaName; // 0x30
		::System::String* TargetAnchorName; // 0x38
		::System::String* EffectorName; // 0x40
		::UnityEngine::Vector3 ComponentSpacePosition; // 0x48
		::UnityEngine::Quaternion ComponentSpaceRotation; // 0x54
		::System::String* AttachBoneName; // 0x68
		::System::Boolean EnableBendGoal; // 0x70
		::UnityEngine::Vector3 BendGoalComponentSpacePosition; // 0x74
		::RPG::Client::FullBody::FullBodyBipedChain BipedChain; // 0x80
		::System::Single Duration; // 0x84
		::System::String* CurveName; // 0x88
		::System::Single PositionWeight; // 0x90
		::System::Single PositionWeightBlendTime; // 0x94
		::System::String* PositionWeightBlendCurveName; // 0x98
		::System::Single RotationWeight; // 0xA0
		::System::Single RotationWeightBlendTime; // 0xA4
		::System::String* RotationWeightBlendCurveName; // 0xA8
		::System::Single MappingWeight; // 0xB0
		::System::Single MappingWeightBlendTime; // 0xB4
		::System::String* MappingWeightBlendCurveName; // 0xB8
		::System::String* BendGoalAreaName; // 0xC0
		::System::String* BendGoalAnchorName; // 0xC8
		::System::Single BendGoalWeight; // 0xD0
		::System::Single BendGoalWeightBlendTime; // 0xD4
		::System::String* BendGoalBlendCurveName; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFULLBODYCHAINDATA__CTOR_OFFSET))(this);
		}
	};
}
