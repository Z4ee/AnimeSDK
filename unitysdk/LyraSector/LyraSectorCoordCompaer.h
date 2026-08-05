#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/System/Object.h"

#define LYRASECTOR_LYRASECTORCOORDCOMPAER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CB024A0)
#define LYRASECTOR_LYRASECTORCOORDCOMPAER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CB02520)
#define LYRASECTOR_LYRASECTORCOORDCOMPAER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB025A0)

namespace LyraSector
{
	inline static constexpr unsigned int LyraSectorCoordCompaer_TypeDefinitionIndex = 27878;

	class LyraSectorCoordCompaer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORDCOMPAER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::LyraSector::LyraSectorCoord l, ::LyraSector::LyraSectorCoord r)
		{
			return ((::System::Boolean(*)(::PVOID, ::LyraSector::LyraSectorCoord, ::LyraSector::LyraSectorCoord))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORDCOMPAER_EQUALS_OFFSET))(this, l, r);
		}

		::System::Int32 GetHashCode(::LyraSector::LyraSectorCoord coord)
		{
			return ((::System::Int32(*)(::PVOID, ::LyraSector::LyraSectorCoord))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORDCOMPAER_GETHASHCODE_OFFSET))(this, coord);
		}
	};
}
