#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/MusicRhythmPropType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_MUSICRHYTHMPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1484F290)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int MusicRhythmProp_TypeDefinitionIndex = 74226;

	class MusicRhythmProp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* UniqueName; // 0x18
		::System::Boolean PlayerHint; // 0x20
		::System::Single HintOffset; // 0x24
		::RPG::Client::Prop::MusicRhythmPropType PropType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MUSICRHYTHMPROP__CTOR_OFFSET))(this);
		}
	};
}
