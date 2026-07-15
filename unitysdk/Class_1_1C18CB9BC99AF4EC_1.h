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
namespace System { class String; }

#define CLASS_1_1C18CB9BC99AF4EC_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C353E10)
#define CLASS_1_1C18CB9BC99AF4EC_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1C353870)
#define CLASS_1_1C18CB9BC99AF4EC_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C3539D0)
#define CLASS_1_1C18CB9BC99AF4EC_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C353910)
#define CLASS_1_1C18CB9BC99AF4EC_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C353AE0)
#define CLASS_1_1C18CB9BC99AF4EC_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C353F20)
#define CLASS_1_1C18CB9BC99AF4EC_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C353EC0)
#define CLASS_1_1C18CB9BC99AF4EC_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C353710)
#define CLASS_1_1C18CB9BC99AF4EC_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C3538C0)
#define CLASS_1_1C18CB9BC99AF4EC_1_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1C353900)
#define CLASS_1_1C18CB9BC99AF4EC_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C3538E0)
#define CLASS_1_1C18CB9BC99AF4EC_1_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1C3538F0)
#define CLASS_1_1C18CB9BC99AF4EC_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C3538D0)
#define CLASS_1_1C18CB9BC99AF4EC_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C353770)
#define CLASS_1_1C18CB9BC99AF4EC_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C353BE0)
#define CLASS_1_1C18CB9BC99AF4EC_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C353C40)
#define CLASS_1_1C18CB9BC99AF4EC_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C354010)
#define CLASS_1_1C18CB9BC99AF4EC_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3537D0)
#define CLASS_1_1C18CB9BC99AF4EC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C353780)

inline static constexpr unsigned int Class_1_1C18CB9BC99AF4EC_1_TypeDefinitionIndex = 28988;

class Class_1_1C18CB9BC99AF4EC_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1C18CB9BC99AF4EC_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1C18CB9BC99AF4EC_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C18CB9BC99AF4EC_1_TypeDefinitionIndex)->GetStaticField(0x4FB90);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C18CB9BC99AF4EC_1_TypeDefinitionIndex)->GetStaticField(0x4FB98);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::System::Boolean Field_1_7; // 0x20
	::System::Boolean Field_1_8; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1C18CB9BC99AF4EC_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C18CB9BC99AF4EC_1*))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1C18CB9BC99AF4EC_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1C18CB9BC99AF4EC_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1C18CB9BC99AF4EC_1* Clone()
	{
		return ((::Class_1_1C18CB9BC99AF4EC_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1C18CB9BC99AF4EC_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1C18CB9BC99AF4EC_1*))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1C18CB9BC99AF4EC_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C18CB9BC99AF4EC_1*))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
