#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLIPPERLIB_DOUBLEPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x31EB80)
#define CLIPPERLIB_DOUBLEPOINT__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA19E80)
#define CLIPPERLIB_DOUBLEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x3C3A00)

namespace ClipperLib
{
	inline static constexpr unsigned int DoublePoint_TypeDefinitionIndex = 33402;

	struct alignas(8) DoublePoint
	{
		::System::Double X; // 0x10
		::System::Double Y; // 0x18

		::System::Void _ctor(::System::Double x, ::System::Double y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_DOUBLEPOINT__CTOR_OFFSET))(this, x, y);
		}

		::System::Void _ctor_1(::ClipperLib::DoublePoint dp)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::DoublePoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_DOUBLEPOINT__CTOR_1_OFFSET))(this, dp);
		}

		/*
		::System::Void _ctor_2(::ClipperLib::IntPoint ip)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_DOUBLEPOINT__CTOR_2_OFFSET))(this, ip);
		}
		*/
	};
}
