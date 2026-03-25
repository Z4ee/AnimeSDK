#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ArchiveAsset.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_ARCHIVELEVELBLOCK_METHOD_4_35B1D6F5AD964588_OFFSET UNITYSDK_OFFSET(0xAB207F0)
#define RPGTOOLS_TIMELINE_ARCHIVELEVELBLOCK_METHOD_4_F8CFE1100A85137E_OFFSET UNITYSDK_OFFSET(0xAB206E0)
#define RPGTOOLS_TIMELINE_ARCHIVELEVELBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xAB207E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ArchiveLevelBlock_TypeDefinitionIndex = 39307;

	class ArchiveLevelBlock : public ::RPGTools::Timeline::ArchiveAsset
	{
	public:
		::System::String* UniqueName; // 0x20
		::System::String* PrefabAlias; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVELEVELBLOCK__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_4_F8CFE1100A85137E(::RPGTools::Timeline::ArchiveAsset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVELEVELBLOCK_METHOD_4_F8CFE1100A85137E_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_35B1D6F5AD964588(::RPGTools::Timeline::ArchiveAsset* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVELEVELBLOCK_METHOD_4_35B1D6F5AD964588_OFFSET))(this, P0);
		}
	};
}
