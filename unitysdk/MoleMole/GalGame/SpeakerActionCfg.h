#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_SPEAKERACTIONCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE0E70)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int SpeakerActionCfg_TypeDefinitionIndex = 79514;

	class SpeakerActionCfg : public ::System::Object
	{
	public:
		::System::Int32 SpeakerNpcTag; // 0x10
		::System::String* SpeakerMember; // 0x18
		::System::Int32 FacialActionID; // 0x20
		::System::String* FacialAniKey; // 0x28
		::System::String* FacialBubbleKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SPEAKERACTIONCFG__CTOR_OFFSET))(this);
		}
	};
}
