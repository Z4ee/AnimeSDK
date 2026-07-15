#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXACFDEBUG_SELECTORLABELINFOFORMARSHALING_CONVERT_OFFSET UNITYSDK_OFFSET(0x3A18DE0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcfDebug_SelectorLabelInfoForMarshaling_TypeDefinitionIndex = 38034;

	struct alignas(8) CriAtomExAcfDebug_SelectorLabelInfoForMarshaling
	{
		::System::IntPtr selectorNamePtr; // 0x10
		::System::IntPtr labelNamePtr; // 0x18

		/*
		::System::Void Convert(::CriWare::CriAtomExAcfDebug_SelectorLabelInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAcfDebug_SelectorLabelInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_SELECTORLABELINFOFORMARSHALING_CONVERT_OFFSET))(this, a1);
		}
		*/
	};
}
