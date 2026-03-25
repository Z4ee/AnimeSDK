#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXACFDEBUG_GLOBALAISACINFOFORMARSHALING_CONVERT_OFFSET UNITYSDK_OFFSET(0x14F0F40)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcfDebug_GlobalAisacInfoForMarshaling_TypeDefinitionIndex = 31206;

	struct alignas(8) CriAtomExAcfDebug_GlobalAisacInfoForMarshaling
	{
		::System::IntPtr namePtr; // 0x10
		::System::UInt16 index; // 0x18
		::System::UInt16 numGraphs; // 0x1A
		::System::UInt32 type; // 0x1C
		::System::Single randomRange; // 0x20
		::System::UInt16 controlId; // 0x24
		::System::UInt16 dummy; // 0x26

		/*
		::System::Void Convert(::CriWare::CriAtomExAcfDebug_GlobalAisacInfo& x)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GLOBALAISACINFOFORMARSHALING_CONVERT_OFFSET))(this, x);
		}
		*/
	};
}
