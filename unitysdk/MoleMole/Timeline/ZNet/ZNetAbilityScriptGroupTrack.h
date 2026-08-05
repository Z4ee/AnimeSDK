#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ZNet/ZNetGroupTrack.h"

namespace System { class String; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTGROUPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19741B80)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetAbilityScriptGroupTrack_TypeDefinitionIndex = 89320;

	class ZNetAbilityScriptGroupTrack : public ::MoleMole::Timeline::ZNet::ZNetGroupTrack
	{
	public:
		::System::String* guid_Editor; // 0xB8
		::System::String* patternName; // 0xC0
		::System::String* abilityName; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTGROUPTRACK__CTOR_OFFSET))(this);
		}
	};
}
