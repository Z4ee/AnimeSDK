#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class FileDescriptorProto; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17109610)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_CLONE_OFFSET UNITYSDK_OFFSET(0x17109200)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17109360)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x17109250)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17109410)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17108F20)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17108EC0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17109750)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x171096B0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x171090A0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17109500)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_WRITETO_OFFSET UNITYSDK_OFFSET(0x17109560)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x17109830)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17109150)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CTOR_OFFSET UNITYSDK_OFFSET(0x17109100)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptorSet_TypeDefinitionIndex = 6254;

	class FileDescriptorSet : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::FileDescriptorProto*>** StaticGet__repeated_file_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::FileDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorSet_TypeDefinitionIndex)->GetStaticField(0x5720);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileDescriptorSet*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileDescriptorSet*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorSet_TypeDefinitionIndex)->GetStaticField(0x5728);
		}
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::FileDescriptorProto*>* file_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::FileDescriptorSet* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileDescriptorSet*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileDescriptorSet*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileDescriptorSet*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileDescriptorSet* Clone()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptorSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::FileDescriptorSet* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::FileDescriptorSet*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::FileDescriptorSet* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileDescriptorSet*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
