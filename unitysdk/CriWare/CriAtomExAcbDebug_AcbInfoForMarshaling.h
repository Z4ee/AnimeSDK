#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_CharacterEncoding.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXACBDEBUG_ACBINFOFORMARSHALING_CONVERT_OFFSET UNITYSDK_OFFSET(0x14EE060)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcbDebug_AcbInfoForMarshaling_TypeDefinitionIndex = 31211;

	struct alignas(8) CriAtomExAcbDebug_AcbInfoForMarshaling
	{
		::System::IntPtr namePtr; // 0x10
		::System::UInt32 size; // 0x18
		::System::UInt32 version; // 0x1C
		::CriWare::CriAtomEx_CharacterEncoding characterEncoding; // 0x20
		::System::Single volume; // 0x24
		::System::Int32 numCues; // 0x28

		/*
		::System::Void Convert(::CriWare::CriAtomExAcbDebug_AcbInfo& x)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAcbDebug_AcbInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBDEBUG_ACBINFOFORMARSHALING_CONVERT_OFFSET))(this, x);
		}
		*/
	};
}
