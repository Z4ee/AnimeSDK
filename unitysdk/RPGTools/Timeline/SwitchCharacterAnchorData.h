#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF27860)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SwitchCharacterAnchorData_TypeDefinitionIndex = 48825;

	class SwitchCharacterAnchorData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20
		::System::UInt32 GroupID; // 0x28
		::System::UInt32 AnchorID; // 0x2C
		::System::Boolean StickToGround; // 0x30
		::System::Boolean Hide; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORDATA__CTOR_OFFSET))(this);
		}
	};
}
