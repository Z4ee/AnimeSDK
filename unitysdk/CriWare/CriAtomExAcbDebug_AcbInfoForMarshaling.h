#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_CharacterEncoding.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXACBDEBUG_ACBINFOFORMARSHALING_CONVERT_OFFSET UNITYSDK_OFFSET(0x3BAE900)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcbDebug_AcbInfoForMarshaling_TypeDefinitionIndex = 38896;

	struct alignas(8) CriAtomExAcbDebug_AcbInfoForMarshaling
	{
		::System::IntPtr namePtr; // 0x10
		::System::UInt32 size; // 0x18
		::System::UInt32 version; // 0x1C
		::System::String* userData; // 0x20
		::System::String* language; // 0x28
		::CriWare::CriAtomEx_CharacterEncoding characterEncoding; // 0x30
		::System::Single volume; // 0x34
		::System::Int32 numCues; // 0x38

		/*
		::System::Void Convert(::CriWare::CriAtomExAcbDebug_AcbInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAcbDebug_AcbInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBDEBUG_ACBINFOFORMARSHALING_CONVERT_OFFSET))(this, a1);
		}
		*/
	};
}
