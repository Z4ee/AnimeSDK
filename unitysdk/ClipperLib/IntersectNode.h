#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/System/Object.h"

namespace ClipperLib { class TEdge; }

#define CLIPPERLIB_INTERSECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CD2F0)

namespace ClipperLib
{
	inline static constexpr unsigned int IntersectNode_TypeDefinitionIndex = 33416;

	class IntersectNode : public ::System::Object
	{
	public:
		::ClipperLib::TEdge* Edge2; // 0x10
		::ClipperLib::TEdge* Edge1; // 0x18
		::ClipperLib::IntPoint Pt; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_INTERSECTNODE__CTOR_OFFSET))(this);
		}
	};
}
