#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/EdgeSide.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/ClipperLib/PolyType.h"
#include "unitysdk/System/Object.h"

#define CLIPPERLIB_TEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB6D0B0)

namespace ClipperLib
{
	inline static constexpr unsigned int TEdge_TypeDefinitionIndex = 31229;

	class TEdge : public ::System::Object
	{
	public:
		::ClipperLib::TEdge* PrevInAEL; // 0x10
		::ClipperLib::TEdge* Next; // 0x18
		::ClipperLib::TEdge* NextInSEL; // 0x20
		::ClipperLib::TEdge* Prev; // 0x28
		::ClipperLib::TEdge* NextInLML; // 0x30
		::ClipperLib::TEdge* NextInAEL; // 0x38
		::ClipperLib::TEdge* PrevInSEL; // 0x40
		::ClipperLib::IntPoint Top; // 0x48
		::ClipperLib::PolyType PolyTyp; // 0x58
		::ClipperLib::EdgeSide Side; // 0x5C
		::ClipperLib::IntPoint Bot; // 0x60
		::ClipperLib::IntPoint Curr; // 0x70
		::ClipperLib::IntPoint Delta; // 0x80
		::System::Int32 WindCnt; // 0x90
		::System::Int32 WindDelta; // 0x94
		::System::Int32 OutIdx; // 0x98
		::System::Int32 WindCnt2; // 0x9C
		::System::Double Dx; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_TEDGE__CTOR_OFFSET))(this);
		}
	};
}
