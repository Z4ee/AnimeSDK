#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15DB4570)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_CLONE_OFFSET UNITYSDK_OFFSET(0x15DB4240)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15DB4340)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x15DB4290)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15DB43B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15DB3F70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15DA77F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15DB4600)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15DB40F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15DB4480)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_WRITETO_OFFSET UNITYSDK_OFFSET(0x15DB44E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DB46C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15DB41A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB4150)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptorSet_TypeDefinitionIndex = 28045;

	class FileDescriptorSet : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorSet_TypeDefinitionIndex)->GetStaticField(0x21E80);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*>** StaticGet__repeated_file_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorSet_TypeDefinitionIndex)->GetStaticField(0x21E88);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*>* file_; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_MERGEFROM_OFFSET))(this, input);
		}
	};
}
