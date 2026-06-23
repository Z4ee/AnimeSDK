#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json { template <typename T> class IArrayPool_1; }
namespace System { class String; }

#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_APPEND_1_OFFSET UNITYSDK_OFFSET(0xA7BB00)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_APPEND_OFFSET UNITYSDK_OFFSET(0xA7BAF0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7BB10)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_ENSURESIZE_OFFSET UNITYSDK_OFFSET(0xA7BC10)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_INTERNALBUFFER_OFFSET UNITYSDK_OFFSET(0x246290)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x427580)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x2C19D0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x52CCD0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA7BD30)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA7BD20)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x695ED0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0xA7BAC0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int StringBuffer_TypeDefinitionIndex = 7083;

	struct alignas(8) StringBuffer
	{
		::Il2CppArray<::System::Char>* _buffer; // 0x10
		::System::Int32 _position; // 0x18

		::System::Void _ctor(::Newtonsoft::Json::IArrayPool_1<::System::Char>* bufferPool, ::System::Int32 initalSize)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER__CTOR_OFFSET))(this, bufferPool, initalSize);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Char>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER__CTOR_1_OFFSET))(this, buffer);
		}

		::System::Int32 get_Position()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_SET_POSITION_OFFSET))(this, value);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void Append(::Newtonsoft::Json::IArrayPool_1<::System::Char>* bufferPool, ::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_APPEND_OFFSET))(this, bufferPool, value);
		}

		::System::Void Append_1(::Newtonsoft::Json::IArrayPool_1<::System::Char>* bufferPool, ::Il2CppArray<::System::Char>* buffer, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_APPEND_1_OFFSET))(this, bufferPool, buffer, startIndex, count);
		}

		::System::Void Clear(::Newtonsoft::Json::IArrayPool_1<::System::Char>* bufferPool)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_CLEAR_OFFSET))(this, bufferPool);
		}

		::System::Void EnsureSize(::Newtonsoft::Json::IArrayPool_1<::System::Char>* bufferPool, ::System::Int32 appendLength)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_ENSURESIZE_OFFSET))(this, bufferPool, appendLength);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_TOSTRING_1_OFFSET))(this, start, length);
		}

		::Il2CppArray<::System::Char>* get_InternalBuffer()
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_INTERNALBUFFER_OFFSET))(this);
		}
	};
}
