#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/EdgeSide.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/ClipperLib/PolyType.h"
#include "unitysdk/System/Object.h"

#define CLIPPERLIB_TEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF80D0)

namespace ClipperLib
{
	inline static constexpr unsigned int TEdge_TypeDefinitionIndex = 32780;

	class TEdge : public ::System::Object
	{
	public:
		::ClipperLib::TEdge* NextInSEL; // 0x10
		::ClipperLib::TEdge* NextInAEL; // 0x18
		::ClipperLib::TEdge* Next; // 0x20
		::ClipperLib::TEdge* Prev; // 0x28
		::ClipperLib::TEdge* NextInLML; // 0x30
		::ClipperLib::TEdge* PrevInSEL; // 0x38
		::ClipperLib::TEdge* PrevInAEL; // 0x40
		::ClipperLib::IntPoint Delta; // 0x48
		::System::Int32 WindCnt; // 0x58
		::System::Int32 WindDelta; // 0x5C
		::System::Int32 OutIdx; // 0x60
		::System::Int32 WindCnt2; // 0x64
		::ClipperLib::IntPoint Curr; // 0x68
		::System::Double Dx; // 0x78
		::ClipperLib::IntPoint Bot; // 0x80
		::ClipperLib::IntPoint Top; // 0x90
		::ClipperLib::EdgeSide Side; // 0xA0
		::ClipperLib::PolyType PolyTyp; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_TEDGE__CTOR_OFFSET))(this);
		}
	};
}
