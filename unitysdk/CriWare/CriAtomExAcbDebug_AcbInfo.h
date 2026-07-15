#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_CharacterEncoding.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcbDebug_AcbInfo_TypeDefinitionIndex = 38036;

	struct alignas(8) CriAtomExAcbDebug_AcbInfo
	{
		::System::String* name; // 0x10
		::System::UInt32 size; // 0x18
		::System::UInt32 version; // 0x1C
		::CriWare::CriAtomEx_CharacterEncoding characterEncoding; // 0x20
		::System::Single volume; // 0x24
		::System::Int32 numCues; // 0x28
	};
}
