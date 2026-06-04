#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_CuePos3dInfo.h"
#include "unitysdk/CriWare/CriAtomEx_CueType.h"
#include "unitysdk/CriWare/CriAtomEx_GameVariableInfo.h"
#include "unitysdk/CriWare/CriAtomEx_PanType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEX_CUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x2BD22E0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_CueInfo_TypeDefinitionIndex = 37019;

	struct alignas(8) CriAtomEx_CueInfo
	{
		::System::Int32 id; // 0x10
		::CriWare::CriAtomEx_CueType type; // 0x14
		::System::String* name; // 0x18
		::System::String* userData; // 0x20
		::System::Int64 length; // 0x28
		::Il2CppArray<::System::UInt16>* categories; // 0x30
		::System::Int16 numLimits; // 0x38
		::System::UInt16 numBlocks; // 0x3A
		::System::UInt16 numTracks; // 0x3C
		::System::UInt16 numRelatedWaveForms; // 0x3E
		::System::Byte priority; // 0x40
		::System::Byte headerVisibility; // 0x41
		::System::Byte ignore_player_parameter; // 0x42
		::System::Byte probability; // 0x43
		::CriWare::CriAtomEx_PanType panType; // 0x44
		::CriWare::CriAtomEx_CuePos3dInfo pos3dInfo; // 0x48
		::CriWare::CriAtomEx_GameVariableInfo gameVariableInfo; // 0x90

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CUEINFO__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
