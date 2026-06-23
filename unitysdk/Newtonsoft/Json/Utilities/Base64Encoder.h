#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class TextWriter; }

#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1E7DB700)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E7DBAD0)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1E7DBAA0)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DB660)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int Base64Encoder_TypeDefinitionIndex = 7033;

	class Base64Encoder : public ::System::Object
	{
	public:
		// static const ::System::Int32 Base64LineSize = 0x4C; // 0x0
		// static const ::System::Int32 LineSizeInBytes = 0x39; // 0x0
		::Il2CppArray<::System::Byte>* _leftOverBytes; // 0x10
		::Il2CppArray<::System::Char>* _charsLine; // 0x18
		::System::IO::TextWriter* _writer; // 0x20
		::System::Int32 _leftOverBytesCount; // 0x28

		::System::Void _ctor(::System::IO::TextWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER__CTOR_OFFSET))(this, writer);
		}

		::System::Void Encode(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_ENCODE_OFFSET))(this, buffer, index, count);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_FLUSH_OFFSET))(this);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* chars, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_WRITECHARS_OFFSET))(this, chars, index, count);
		}
	};
}
