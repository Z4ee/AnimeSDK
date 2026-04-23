#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPLOOKATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B0F40)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStopLookAtData_TypeDefinitionIndex = 44746;

	class CharacterStopLookAtData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::Boolean ForceChange; // 0x18
		::System::Single FadeOutTime; // 0x1C
		::System::String* CurveName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPLOOKATDATA__CTOR_OFFSET))(this);
		}
	};
}
