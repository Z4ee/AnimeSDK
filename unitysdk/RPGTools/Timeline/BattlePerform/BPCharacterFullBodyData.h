#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE81A4F0)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterFullBodyData_TypeDefinitionIndex = 49253;

	class BPCharacterFullBodyData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYDATA__CTOR_OFFSET))(this);
		}
	};
}
