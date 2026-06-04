#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class SourceCodeInfo_Types_Location; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E7ED20)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x17E7E910)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E7EA80)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E7E970)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E7EB30)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E7E560)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x17E7E960)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17E7E500)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E7EF20)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E7EDC0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E7E6E0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E7EC10)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E7EC70)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E7F0E0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E7E790)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7E740)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int SourceCodeInfo_TypeDefinitionIndex = 5515;

	class SourceCodeInfo : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::SourceCodeInfo*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::SourceCodeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_TypeDefinitionIndex)->GetStaticField(0x3E990);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*>** StaticGet__repeated_location_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*>**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_TypeDefinitionIndex)->GetStaticField(0x3E998);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*>* location_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::SourceCodeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::SourceCodeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::SourceCodeInfo*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::SourceCodeInfo*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::SourceCodeInfo* Clone()
		{
			return ((::Google::Protobuf::Reflection::SourceCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*>* get_Location()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_LOCATION_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::SourceCodeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::SourceCodeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::SourceCodeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::SourceCodeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
