#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLIPPERLIB_SCANBEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D4620)

namespace ClipperLib
{
	inline static constexpr unsigned int Scanbeam_TypeDefinitionIndex = 33419;

	class Scanbeam : public ::System::Object
	{
	public:
		::ClipperLib::Scanbeam* Next; // 0x10
		::System::Int64 Y; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_SCANBEAM__CTOR_OFFSET))(this);
		}
	};
}
