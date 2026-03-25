#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileStream.h"

namespace System { class String; }

#define RPG_HASHUTILS_THREADFILESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x17A61F60)
#define RPG_HASHUTILS_THREADFILESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17A60D00)

namespace RPG
{
	inline static constexpr unsigned int HashUtils_ThreadFileStream_TypeDefinitionIndex = 8689;

	class HashUtils_ThreadFileStream : public ::System::IO::FileStream
	{
	public:
		::System::Int32 _ReadCount; // 0x68
		::System::Int32 _SleepFreq; // 0x6C
		::System::Int32 _SleepMS; // 0x70

		::System::Void _ctor(::System::String* path, ::System::Int32 sleepFreq, ::System::Int32 sleepMS)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_THREADFILESTREAM__CTOR_OFFSET))(this, path, sleepFreq, sleepMS);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_THREADFILESTREAM_READ_OFFSET))(this, array, offset, count);
		}
	};
}
