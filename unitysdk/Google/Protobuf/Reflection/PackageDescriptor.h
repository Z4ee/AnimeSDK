#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR_GET_FILE_OFFSET UNITYSDK_OFFSET(0x1711A040)
#define GOOGLE_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1711A030)
#define GOOGLE_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1711A020)
#define GOOGLE_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1711A010)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int PackageDescriptor_TypeDefinitionIndex = 6355;

	class PackageDescriptor : public ::System::Object
	{
	public:
		::Google::Protobuf::Reflection::FileDescriptor* file; // 0x10
		::System::String* name; // 0x18
		::System::String* fullName; // 0x20

		::System::Void _ctor(::System::String* name, ::System::String* fullName, ::Google::Protobuf::Reflection::FileDescriptor* file)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Google::Protobuf::Reflection::FileDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR__CTOR_OFFSET))(this, name, fullName, file);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR_GET_FULLNAME_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileDescriptor* get_File()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR_GET_FILE_OFFSET))(this);
		}
	};
}
