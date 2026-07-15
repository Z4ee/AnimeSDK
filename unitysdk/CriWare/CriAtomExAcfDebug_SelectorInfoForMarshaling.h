#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXACFDEBUG_SELECTORINFOFORMARSHALING_CONVERT_OFFSET UNITYSDK_OFFSET(0x3A18D90)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcfDebug_SelectorInfoForMarshaling_TypeDefinitionIndex = 38033;

	struct alignas(8) CriAtomExAcfDebug_SelectorInfoForMarshaling
	{
		::System::IntPtr namePtr; // 0x10
		::System::UInt16 index; // 0x18
		::System::UInt16 numLabels; // 0x1A
		::System::UInt16 globalLabelIndex; // 0x1C

		/*
		::System::Void Convert(::CriWare::CriAtomExAcfDebug_SelectorInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAcfDebug_SelectorInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_SELECTORINFOFORMARSHALING_CONVERT_OFFSET))(this, a1);
		}
		*/
	};
}
