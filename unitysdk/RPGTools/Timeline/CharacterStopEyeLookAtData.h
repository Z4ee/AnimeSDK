#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPEYELOOKATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B0200)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStopEyeLookAtData_TypeDefinitionIndex = 44743;

	class CharacterStopEyeLookAtData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::Single Duration; // 0x18
		::System::String* CurveName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPEYELOOKATDATA__CTOR_OFFSET))(this);
		}
	};
}
