#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/DescriptorBase.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class OneofAccessor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class OneofDescriptorProto; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_CREATEACCESSOR_OFFSET UNITYSDK_OFFSET(0x1B0FD460)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x1B0F9660)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_ACCESSOR_OFFSET UNITYSDK_OFFSET(0x1B0D6F10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_CONTAININGTYPE_OFFSET UNITYSDK_OFFSET(0x1B0FD440)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B0FD5F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0FA0B0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofDescriptor_TypeDefinitionIndex = 35175;

	class OneofDescriptor : public ::MiHoYo::SDK::Protobuf::Reflection::DescriptorBase
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* containingType; // 0x28
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>* fields; // 0x30
		::MiHoYo::SDK::Protobuf::Reflection::OneofAccessor* accessor; // 0x38
		::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto* proto; // 0x40

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto* a1, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* a2, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_ContainingType()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_CONTAININGTYPE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::OneofAccessor* get_Accessor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::OneofAccessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_ACCESSOR_OFFSET))(this);
		}

		::System::Void CrossLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_CROSSLINK_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::OneofAccessor* CreateAccessor(::System::String* a1)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::OneofAccessor*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_CREATEACCESSOR_OFFSET))(this, a1);
		}
	};
}
