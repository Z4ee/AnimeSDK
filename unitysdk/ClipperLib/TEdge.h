#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/EdgeSide.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/ClipperLib/PolyType.h"
#include "unitysdk/System/Object.h"

#define CLIPPERLIB_TEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D43F0)

namespace ClipperLib
{
	inline static constexpr unsigned int TEdge_TypeDefinitionIndex = 33415;

	class TEdge : public ::System::Object
	{
	public:
		::ClipperLib::TEdge* NextInLML; // 0x10
		::ClipperLib::TEdge* Prev; // 0x18
		::ClipperLib::TEdge* Next; // 0x20
		::ClipperLib::TEdge* NextInAEL; // 0x28
		::ClipperLib::TEdge* PrevInSEL; // 0x30
		::ClipperLib::TEdge* NextInSEL; // 0x38
		::ClipperLib::TEdge* PrevInAEL; // 0x40
		::ClipperLib::IntPoint Top; // 0x48
		::ClipperLib::IntPoint Bot; // 0x58
		::ClipperLib::PolyType PolyTyp; // 0x68
		::ClipperLib::EdgeSide Side; // 0x6C
		::ClipperLib::IntPoint Delta; // 0x70
		::ClipperLib::IntPoint Curr; // 0x80
		::System::Int32 WindCnt; // 0x90
		::System::Int32 WindDelta; // 0x94
		::System::Int32 WindCnt2; // 0x98
		::System::Int32 OutIdx; // 0x9C
		::System::Double Dx; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_TEDGE__CTOR_OFFSET))(this);
		}
	};
}
