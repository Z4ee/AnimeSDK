#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLIPPERLIB_MAXIMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C55D0)

namespace ClipperLib
{
	inline static constexpr unsigned int Maxima_TypeDefinitionIndex = 33420;

	class Maxima : public ::System::Object
	{
	public:
		::ClipperLib::Maxima* Prev; // 0x10
		::ClipperLib::Maxima* Next; // 0x18
		::System::Int64 X; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_MAXIMA__CTOR_OFFSET))(this);
		}
	};
}
