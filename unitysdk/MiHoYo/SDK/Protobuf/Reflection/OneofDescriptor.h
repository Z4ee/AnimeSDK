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

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_CREATEACCESSOR_OFFSET UNITYSDK_OFFSET(0x15DBB6C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x15DB80E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_ACCESSOR_OFFSET UNITYSDK_OFFSET(0x15D98F90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_CONTAININGTYPE_OFFSET UNITYSDK_OFFSET(0x15DBB6A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15DBB910)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB8930)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofDescriptor_TypeDefinitionIndex = 28131;

	class OneofDescriptor : public ::MiHoYo::SDK::Protobuf::Reflection::DescriptorBase
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::OneofAccessor* accessor; // 0x28
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>* fields; // 0x30
		::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto* proto; // 0x38
		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* containingType; // 0x40

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto* proto, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* file, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* parent, ::System::Int32 index, ::System::String* clrName)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR__CTOR_OFFSET))(this, proto, file, parent, index, clrName);
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

		::MiHoYo::SDK::Protobuf::Reflection::OneofAccessor* CreateAccessor(::System::String* clrName)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::OneofAccessor*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_CREATEACCESSOR_OFFSET))(this, clrName);
		}
	};
}
