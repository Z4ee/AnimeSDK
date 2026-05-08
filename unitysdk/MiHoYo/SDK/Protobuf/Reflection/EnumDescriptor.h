#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/DescriptorBase.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class EnumDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumValueDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C490E90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C490CD0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptor_TypeDefinitionIndex = 26069;

	class EnumDescriptor : public ::MiHoYo::SDK::Protobuf::Reflection::DescriptorBase
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto* proto; // 0x28
		::System::Type* clrType; // 0x30
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptor*>* values; // 0x38
		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* containingType; // 0x40

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto* proto, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* file, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* parent, ::System::Int32 index, ::System::Type* clrType)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTOR__CTOR_OFFSET))(this, proto, file, parent, index, clrType);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTOR_GET_NAME_OFFSET))(this);
		}
	};
}
