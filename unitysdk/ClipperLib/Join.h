#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/System/Object.h"

namespace ClipperLib { class OutPt; }

#define CLIPPERLIB_JOIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEC960)

namespace ClipperLib
{
	inline static constexpr unsigned int Join_TypeDefinitionIndex = 32788;

	class Join : public ::System::Object
	{
	public:
		::ClipperLib::OutPt* OutPt1; // 0x10
		::ClipperLib::OutPt* OutPt2; // 0x18
		::ClipperLib::IntPoint OffPt; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_JOIN__CTOR_OFFSET))(this);
		}
	};
}
