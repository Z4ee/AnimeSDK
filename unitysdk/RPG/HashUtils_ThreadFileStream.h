#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileStream.h"

namespace System { class String; }

#define RPG_HASHUTILS_THREADFILESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x14BE6FA0)
#define RPG_HASHUTILS_THREADFILESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x14BE5EF0)

namespace RPG
{
	inline static constexpr unsigned int HashUtils_ThreadFileStream_TypeDefinitionIndex = 6752;

	class HashUtils_ThreadFileStream : public ::System::IO::FileStream
	{
	public:
		::System::Int32 _ReadCount; // 0x68
		::System::Int32 _SleepMS; // 0x6C
		::System::Int32 _SleepFreq; // 0x70

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_THREADFILESTREAM__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_THREADFILESTREAM_READ_OFFSET))(this, a1, a2, a3);
		}
	};
}
