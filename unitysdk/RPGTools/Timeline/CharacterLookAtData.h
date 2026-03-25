#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterHeadConstraint; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERLOOKATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB38280)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterLookAtData_TypeDefinitionIndex = 38829;

	class CharacterLookAtData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::String* TargetCharacterUniqueName; // 0x18
		::System::String* TargetCharacterAttachPoint; // 0x20
		::System::String* TargetAreaName; // 0x28
		::System::String* TargetAnchorName; // 0x30
		::System::Boolean ForceChangeTarget; // 0x38
		::System::Boolean KeepTracking; // 0x39
		::System::Single Duration; // 0x3C
		::System::String* CurveName; // 0x40
		::RPG::GameCore::CharacterHeadConstraint* Constraint; // 0x48
		::System::Single OverrideMinSpringHairAngle; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATDATA__CTOR_OFFSET))(this);
		}
	};
}
