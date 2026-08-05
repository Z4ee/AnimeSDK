#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingFramework/Serialize/BaseArchive.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class Stream; }

#define BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1F653E80)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1F64F320)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1F64F3A0)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x1F64F360)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x1F64F3E0)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x1F653ED0)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x1F653F10)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x1F653F50)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F653E90)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SETUP_OFFSET UNITYSDK_OFFSET(0x1F653DB0)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F653DA0)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int BinaryReadArchive_TypeDefinitionIndex = 34614;

	class BinaryReadArchive : public ::BinaryTracingFramework::Serialize::BaseArchive
	{
	public:
		::System::IO::BinaryReader* _reader; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SETUP_OFFSET))(this, stream);
		}

		::System::Int64 ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_CONTENTLENGTH_OFFSET))(this);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize(::Il2CppArray<::System::Byte>* source, ::System::Int32 length, ::System::Int32 offset)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_OFFSET))(this, source, length, offset);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize_1(::System::Int32& value)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_1_OFFSET))(this, value);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize_2(::System::Single& value)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_2_OFFSET))(this, value);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize_3(::System::String*& value)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_3_OFFSET))(this, value);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize_4(::System::Boolean& value)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_4_OFFSET))(this, value);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize_5(::System::Int64& value)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_5_OFFSET))(this, value);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize_6(::System::Int16& value)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::System::Int16&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_6_OFFSET))(this, value);
		}

		::BinaryTracingFramework::Serialize::BaseArchive* Serialize_7(::System::Char& value)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::PVOID, ::System::Char&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_BINARYREADARCHIVE_SERIALIZE_7_OFFSET))(this, value);
		}
	};
}
