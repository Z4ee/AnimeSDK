#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingFramework/Serialize/BaseArchive.h"

namespace System { class String; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1E2303E0)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x1E22B1E0)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1E22B210)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_GETSTREAM_OFFSET UNITYSDK_OFFSET(0x1E2304A0)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_RESET_OFFSET UNITYSDK_OFFSET(0x1E22E990)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1E22EA00)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1E22EA30)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x1E22EAA0)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x1E22EA60)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x1E230410)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x1E230440)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x1E230470)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E22C250)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E22E460)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22E560)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int MemoryWriteArchive_TypeDefinitionIndex = 33977;

	class MemoryWriteArchive : public ::BinaryTracingFramework::Serialize::BaseArchive
	{
	public:
		// static const ::System::Int32 DefaultCapacity = 0x80; // 0x0
		::System::IO::BinaryWriter* _writer; // 0x18
		::System::IO::MemoryStream* _stream; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE__CTOR_1_OFFSET))(this, capacity);
		}

		::System::Int64 ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_CONTENTLENGTH_OFFSET))(this);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize(::Il2CppArray<::System::Byte>* source, ::System::Int32 length, ::System::Int32 offset)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_OFFSET))(this, source, length, offset);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize_1(::System::Int32& value)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_1_OFFSET))(this, value);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize_2(::System::Single& value)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_2_OFFSET))(this, value);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize_3(::System::String*& value)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_3_OFFSET))(this, value);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize_4(::System::Boolean& value)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_4_OFFSET))(this, value);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize_5(::System::Int64& value)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_5_OFFSET))(this, value);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize_6(::System::Int16& value)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::System::Int16&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_6_OFFSET))(this, value);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize_7(::System::Char& value)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::System::Char&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_SERIALIZE_7_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* GetBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_GETBUFFER_OFFSET))(this);
		}

		::System::Int32 GetLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_GETLENGTH_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_RESET_OFFSET))(this);
		}

		::System::IO::MemoryStream* GetStream()
		{
			return ((::System::IO::MemoryStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_MEMORYWRITEARCHIVE_GETSTREAM_OFFSET))(this);
		}
	};
}
