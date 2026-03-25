#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTEERTODATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB3A540)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterSteerToData_TypeDefinitionIndex = 38846;

	class CharacterSteerToData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::String* AnchorName; // 0x18
		::System::String* AreaName; // 0x20
		::System::String* TargetCharacterUniqueName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTEERTODATA__CTOR_OFFSET))(this);
		}
	};
}
