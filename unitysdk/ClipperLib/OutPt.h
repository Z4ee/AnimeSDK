#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/System/Object.h"

#define CLIPPERLIB_OUTPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CAA50)

namespace ClipperLib
{
	inline static constexpr unsigned int OutPt_TypeDefinitionIndex = 33422;

	class OutPt : public ::System::Object
	{
	public:
		::ClipperLib::OutPt* Next; // 0x10
		::ClipperLib::OutPt* Prev; // 0x18
		::System::Int32 Idx; // 0x20
		::ClipperLib::IntPoint Pt; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_OUTPT__CTOR_OFFSET))(this);
		}
	};
}
