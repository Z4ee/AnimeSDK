#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ClipperLib { class OutPt; }
namespace ClipperLib { class PolyNode; }

#define CLIPPERLIB_OUTREC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D4630)

namespace ClipperLib
{
	inline static constexpr unsigned int OutRec_TypeDefinitionIndex = 33421;

	class OutRec : public ::System::Object
	{
	public:
		::ClipperLib::OutPt* Pts; // 0x10
		::ClipperLib::OutRec* FirstLeft; // 0x18
		::ClipperLib::OutPt* BottomPt; // 0x20
		::ClipperLib::PolyNode* PolyNode; // 0x28
		::System::Boolean IsOpen; // 0x30
		::System::Boolean IsHole; // 0x31
		::System::Int32 Idx; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_OUTREC__CTOR_OFFSET))(this);
		}
	};
}
