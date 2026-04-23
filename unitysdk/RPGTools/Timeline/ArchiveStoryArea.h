#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ArchiveAsset.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_ARCHIVESTORYAREA_METHOD_4_35B1D6F5AD964588_OFFSET UNITYSDK_OFFSET(0xB8946F0)
#define RPGTOOLS_TIMELINE_ARCHIVESTORYAREA_METHOD_4_F8CFE1100A85137E_OFFSET UNITYSDK_OFFSET(0xB894610)
#define RPGTOOLS_TIMELINE_ARCHIVESTORYAREA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8946E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ArchiveStoryArea_TypeDefinitionIndex = 45217;

	class ArchiveStoryArea : public ::RPGTools::Timeline::ArchiveAsset
	{
	public:
		// static const ::System::String* UniqueName; // 0x0
		::System::String* AreaName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVESTORYAREA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_4_F8CFE1100A85137E(::RPGTools::Timeline::ArchiveAsset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVESTORYAREA_METHOD_4_F8CFE1100A85137E_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_35B1D6F5AD964588(::RPGTools::Timeline::ArchiveAsset* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVESTORYAREA_METHOD_4_35B1D6F5AD964588_OFFSET))(this, P0);
		}
	};
}
