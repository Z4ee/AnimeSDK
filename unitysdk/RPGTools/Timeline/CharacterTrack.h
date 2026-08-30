#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomUniqueNameTrack.h"

#define RPGTOOLS_TIMELINE_CHARACTERTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE816DB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterTrack_TypeDefinitionIndex = 48328;

	class CharacterTrack : public ::RPGTools::Timeline::CustomUniqueNameTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTRACK__CTOR_OFFSET))(this);
		}
	};
}
