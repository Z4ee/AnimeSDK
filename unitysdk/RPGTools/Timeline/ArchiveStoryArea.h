#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ArchiveAsset.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_ARCHIVESTORYAREA_METHOD_4_784C221F8D8DF4FC_OFFSET UNITYSDK_OFFSET(0xE813450)
#define RPGTOOLS_TIMELINE_ARCHIVESTORYAREA__CTOR_OFFSET UNITYSDK_OFFSET(0xE813520)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ArchiveStoryArea_TypeDefinitionIndex = 48959;

	class ArchiveStoryArea : public ::RPGTools::Timeline::ArchiveAsset
	{
	public:
		// static const ::System::String* UniqueName; // 0x0
		::System::String* AreaName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVESTORYAREA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_4_784C221F8D8DF4FC(::RPGTools::Timeline::ArchiveAsset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVESTORYAREA_METHOD_4_784C221F8D8DF4FC_OFFSET))(this, a1);
		}
	};
}
