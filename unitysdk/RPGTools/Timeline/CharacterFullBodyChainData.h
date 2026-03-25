#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/FullBodyBipedChain.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERFULLBODYCHAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB36760)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterFullBodyChainData_TypeDefinitionIndex = 38814;

	class CharacterFullBodyChainData : public ::System::Object
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::String* TargetCharacterUniqueName; // 0x18
		::System::String* TargetCharacterAttachPoint; // 0x20
		::System::String* TargetAreaName; // 0x28
		::System::String* TargetAnchorName; // 0x30
		::RPG::Client::FullBody::FullBodyBipedChain BipedChain; // 0x38
		::System::Single Duration; // 0x3C
		::System::String* CurveName; // 0x40
		::System::Single PositionWeight; // 0x48
		::System::Single PositionWeightBlendTime; // 0x4C
		::System::String* PositionWeightBlendCurveName; // 0x50
		::System::Single RotationWeight; // 0x58
		::System::Single RotationWeightBlendTime; // 0x5C
		::System::String* RotationWeightBlendCurveName; // 0x60
		::System::Single MappingWeight; // 0x68
		::System::Single MappingWeightBlendTime; // 0x6C
		::System::String* MappingWeightBlendCurveName; // 0x70
		::System::String* BendGoalAreaName; // 0x78
		::System::String* BendGoalAnchorName; // 0x80
		::System::Single BendGoalWeight; // 0x88
		::System::Single BendGoalWeightBlendTime; // 0x8C
		::System::String* BendGoalBlendCurveName; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFULLBODYCHAINDATA__CTOR_OFFSET))(this);
		}
	};
}
