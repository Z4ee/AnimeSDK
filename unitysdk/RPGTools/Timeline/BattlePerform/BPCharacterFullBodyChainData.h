#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/FullBodyBipedChain.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYCHAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D12CAD0)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterFullBodyChainData_TypeDefinitionIndex = 49254;

	class BPCharacterFullBodyChainData : public ::System::Object
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::String* CharacterUniqueName; // 0x18
		::System::String* EffectorName; // 0x20
		::UnityEngine::Vector3 ComponentSpacePosition; // 0x28
		::UnityEngine::Quaternion ComponentSpaceRotation; // 0x34
		::System::Boolean EnableBendGoal; // 0x44
		::UnityEngine::Vector3 BendGoalComponentSpacePosition; // 0x48
		::RPG::Client::FullBody::FullBodyBipedChain BipedChain; // 0x54
		::System::Single Duration; // 0x58
		::System::String* CurveName; // 0x60
		::System::Single PositionWeight; // 0x68
		::System::Single PositionWeightBlendTime; // 0x6C
		::System::String* PositionWeightBlendCurveName; // 0x70
		::System::Single RotationWeight; // 0x78
		::System::Single RotationWeightBlendTime; // 0x7C
		::System::String* RotationWeightBlendCurveName; // 0x80
		::System::Single MappingWeight; // 0x88
		::System::Single MappingWeightBlendTime; // 0x8C
		::System::String* MappingWeightBlendCurveName; // 0x90
		::System::Single BendGoalWeight; // 0x98
		::System::Single BendGoalWeightBlendTime; // 0x9C
		::System::String* BendGoalBlendCurveName; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYCHAINDATA__CTOR_OFFSET))(this);
		}
	};
}
