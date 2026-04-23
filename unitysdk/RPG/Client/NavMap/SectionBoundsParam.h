#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_NAVMAP_SECTIONBOUNDSPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xAB6F3B0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int SectionBoundsParam_TypeDefinitionIndex = 68769;

	class SectionBoundsParam : public ::System::Object
	{
	public:
		::System::Single MaxX; // 0x10
		::System::Single MaxY; // 0x14
		::System::Single MinX; // 0x18
		::System::Single MinY; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONBOUNDSPARAM__CTOR_OFFSET))(this);
		}
	};
}
