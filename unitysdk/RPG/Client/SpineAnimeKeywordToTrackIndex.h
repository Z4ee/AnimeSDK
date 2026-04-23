#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_SPINEANIMEKEYWORDTOTRACKINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0xB1A5DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpineAnimeKeywordToTrackIndex_TypeDefinitionIndex = 63627;

	class SpineAnimeKeywordToTrackIndex : public ::System::Object
	{
	public:
		::System::String* Keyword; // 0x10
		::System::Int32 TrackIndex; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPINEANIMEKEYWORDTOTRACKINDEX__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
