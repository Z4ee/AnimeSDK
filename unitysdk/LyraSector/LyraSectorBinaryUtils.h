#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LYRASECTOR_LYRASECTORBINARYUTILS_READUINT_OFFSET UNITYSDK_OFFSET(0x19B6D3A0)
#define LYRASECTOR_LYRASECTORBINARYUTILS_WRITEUINT_OFFSET UNITYSDK_OFFSET(0x19B6D480)
#define LYRASECTOR_LYRASECTORBINARYUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x19B6D560)

namespace LyraSector
{
	inline static constexpr unsigned int LyraSectorBinaryUtils_TypeDefinitionIndex = 29693;

	class LyraSectorBinaryUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORBINARYUTILS__CTOR_OFFSET))(this);
		}

		static ::System::UInt32 ReadUInt(::Il2CppArray<::System::Byte>* buffer, ::System::UInt32 offset)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORBINARYUTILS_READUINT_OFFSET))(buffer, offset);
		}

		static ::System::Void WriteUInt(::System::UInt32 i, ::Il2CppArray<::System::Byte>* buffer, ::System::UInt32 offset)
		{
			return ((::System::Void(*)(::System::UInt32, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORBINARYUTILS_WRITEUINT_OFFSET))(i, buffer, offset);
		}
	};
}
