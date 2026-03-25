#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTEREYELOOKATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB36030)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterEyeLookAtData_TypeDefinitionIndex = 38826;

	class CharacterEyeLookAtData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::String* TargetCharacterUniqueName; // 0x18
		::System::String* TargetCharacterAttachPoint; // 0x20
		::System::String* TargetAreaName; // 0x28
		::System::String* TargetAnchorName; // 0x30
		::System::Boolean KeepTracking; // 0x38
		::System::Single Duration; // 0x3C
		::System::String* CurveName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTEREYELOOKATDATA__CTOR_OFFSET))(this);
		}
	};
}
