#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ArchiveAsset.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_ARCHIVELEVELBLOCK_METHOD_4_3B794CA8887053C1_OFFSET UNITYSDK_OFFSET(0x1B342C90)
#define RPGTOOLS_TIMELINE_ARCHIVELEVELBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B342D90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ArchiveLevelBlock_TypeDefinitionIndex = 46712;

	class ArchiveLevelBlock : public ::RPGTools::Timeline::ArchiveAsset
	{
	public:
		::System::String* UniqueName; // 0x20
		::System::String* PrefabAlias; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVELEVELBLOCK__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_4_3B794CA8887053C1(::RPGTools::Timeline::ArchiveAsset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVELEVELBLOCK_METHOD_4_3B794CA8887053C1_OFFSET))(this, a1);
		}
	};
}
