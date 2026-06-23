#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingFramework/Serialize/BinaryReadArchive.h"

namespace System::IO { class MemoryStream; }

#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYREADARCHIVE_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1E230340)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYREADARCHIVE_INIT_OFFSET UNITYSDK_OFFSET(0x1E22B240)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYREADARCHIVE_RESET_OFFSET UNITYSDK_OFFSET(0x1E230370)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYREADARCHIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2301B0)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int MemoryReadArchive_TypeDefinitionIndex = 33979;

	class MemoryReadArchive : public ::BinaryTracingFramework::Serialize::BinaryReadArchive
	{
	public:
		::System::IO::MemoryStream* Stream; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYREADARCHIVE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYREADARCHIVE_INIT_OFFSET))(this, buffer, index, count);
		}

		::System::Int64 ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYREADARCHIVE_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYREADARCHIVE_RESET_OFFSET))(this);
		}
	};
}
