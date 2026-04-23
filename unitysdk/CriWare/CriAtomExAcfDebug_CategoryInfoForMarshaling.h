#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXACFDEBUG_CATEGORYINFOFORMARSHALING_CONVERT_OFFSET UNITYSDK_OFFSET(0x1624B50)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcfDebug_CategoryInfoForMarshaling_TypeDefinitionIndex = 36923;

	struct alignas(8) CriAtomExAcfDebug_CategoryInfoForMarshaling
	{
		::System::UInt32 groupNo; // 0x10
		::System::UInt32 id; // 0x14
		::System::IntPtr namePtr; // 0x18
		::System::UInt32 numCueLimits; // 0x20
		::System::Single volume; // 0x24

		/*
		::System::Void Convert(::CriWare::CriAtomExAcfDebug_CategoryInfo& x)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAcfDebug_CategoryInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CATEGORYINFOFORMARSHALING_CONVERT_OFFSET))(this, x);
		}
		*/
	};
}
