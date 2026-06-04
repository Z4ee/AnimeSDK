#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class TextWriter; }

#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1886FF30)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_FLUSH_OFFSET UNITYSDK_OFFSET(0x188702D0)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x188702A0)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1886FEC0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int Base64Encoder_TypeDefinitionIndex = 9282;

	class Base64Encoder : public ::System::Object
	{
	public:
		::System::IO::TextWriter* _writer; // 0x10
		::Il2CppArray<::System::Byte>* _leftOverBytes; // 0x18
		::Il2CppArray<::System::Char>* _charsLine; // 0x20
		::System::Int32 _leftOverBytesCount; // 0x28

		::System::Void _ctor(::System::IO::TextWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Encode(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_ENCODE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_FLUSH_OFFSET))(this);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_WRITECHARS_OFFSET))(this, a1, a2, a3);
		}
	};
}
