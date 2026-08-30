#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE81BF00)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterStopFullBodyData_TypeDefinitionIndex = 49259;

	class BPCharacterStopFullBodyData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYDATA__CTOR_OFFSET))(this);
		}
	};
}
