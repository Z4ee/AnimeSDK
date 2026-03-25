#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveStepData.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVESEQUENCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB3ECC0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStoryMoveSequenceData_TypeDefinitionIndex = 38861;

	class CharacterStoryMoveSequenceData : public ::RPGTools::Timeline::CharacterStoryMoveStepData
	{
	public:
		::System::String* SequenceName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVESEQUENCEDATA__CTOR_OFFSET))(this);
		}
	};
}
