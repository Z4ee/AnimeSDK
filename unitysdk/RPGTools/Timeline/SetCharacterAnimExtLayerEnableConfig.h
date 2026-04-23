#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB911D90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SetCharacterAnimExtLayerEnableConfig_TypeDefinitionIndex = 44687;

	class SetCharacterAnimExtLayerEnableConfig : public ::System::Object
	{
	public:
		::System::String* LayerName; // 0x10
		::System::Boolean Enable; // 0x18
		::System::Single Duration; // 0x1C
		::System::String* TriggerStateName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETCHARACTERANIMEXTLAYERENABLECONFIG__CTOR_OFFSET))(this);
		}
	};
}
