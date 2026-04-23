#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEX_GAMEVARIABLEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16221A0)
#define CRIWARE_CRIATOMEX_GAMEVARIABLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1622190)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_GameVariableInfo_TypeDefinitionIndex = 36717;

	struct alignas(8) CriAtomEx_GameVariableInfo
	{
		::System::String* name; // 0x10
		::System::UInt32 id; // 0x18
		::System::Single gameValue; // 0x1C

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GAMEVARIABLEINFO__CTOR_OFFSET))(this, data, startIndex);
		}

		::System::Void _ctor_1(::System::String* name, ::System::UInt32 id, ::System::Single gameValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GAMEVARIABLEINFO__CTOR_1_OFFSET))(this, name, id, gameValue);
		}
	};
}
