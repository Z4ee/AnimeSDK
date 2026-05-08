#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json { template <typename T> class IArrayPool_1; }

#define NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_ENSUREBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1B248700)
#define NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_RENTBUFFER_OFFSET UNITYSDK_OFFSET(0x1B248530)
#define NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_RETURNBUFFER_OFFSET UNITYSDK_OFFSET(0x1B248620)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int BufferUtils_TypeDefinitionIndex = 6925;

	class BufferUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>* RentBuffer(::Newtonsoft::Json::IArrayPool_1<::System::Char>* bufferPool, ::System::Int32 minSize)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_RENTBUFFER_OFFSET))(bufferPool, minSize);
		}

		static ::System::Void ReturnBuffer(::Newtonsoft::Json::IArrayPool_1<::System::Char>* bufferPool, ::Il2CppArray<::System::Char>* buffer)
		{
			return ((::System::Void(*)(::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_RETURNBUFFER_OFFSET))(bufferPool, buffer);
		}

		static ::Il2CppArray<::System::Char>* EnsureBufferSize(::Newtonsoft::Json::IArrayPool_1<::System::Char>* bufferPool, ::System::Int32 size, ::Il2CppArray<::System::Char>* buffer)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::System::Int32, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_ENSUREBUFFERSIZE_OFFSET))(bufferPool, size, buffer);
		}
	};
}
