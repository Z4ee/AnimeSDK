#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json { template <typename T> class IArrayPool_1; }

#define NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_ENSUREBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1730A820)
#define NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_RENTBUFFER_OFFSET UNITYSDK_OFFSET(0x1730A610)
#define NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_RETURNBUFFER_OFFSET UNITYSDK_OFFSET(0x1730A720)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int BufferUtils_TypeDefinitionIndex = 9614;

	class BufferUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>* RentBuffer(::Newtonsoft::Json::IArrayPool_1<::System::Char>* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_RENTBUFFER_OFFSET))(a1, a2);
		}

		static ::System::Void ReturnBuffer(::Newtonsoft::Json::IArrayPool_1<::System::Char>* a1, ::Il2CppArray<::System::Char>* a2)
		{
			return ((::System::Void(*)(::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_RETURNBUFFER_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Char>* EnsureBufferSize(::Newtonsoft::Json::IArrayPool_1<::System::Char>* a1, ::System::Int32 a2, ::Il2CppArray<::System::Char>* a3)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::System::Int32, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_ENSUREBUFFERSIZE_OFFSET))(a1, a2, a3);
		}
	};
}
