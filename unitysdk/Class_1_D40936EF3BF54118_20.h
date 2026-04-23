#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3CA30716D4FAF92_10;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_20_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19297040)
#define CLASS_1_D40936EF3BF54118_20_CLONE_OFFSET UNITYSDK_OFFSET(0x19296C20)
#define CLASS_1_D40936EF3BF54118_20_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19296D90)
#define CLASS_1_D40936EF3BF54118_20_EQUALS_OFFSET UNITYSDK_OFFSET(0x19296C80)
#define CLASS_1_D40936EF3BF54118_20_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19296E40)
#define CLASS_1_D40936EF3BF54118_20_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19297180)
#define CLASS_1_D40936EF3BF54118_20_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x192970E0)
#define CLASS_1_D40936EF3BF54118_20_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19296AB0)
#define CLASS_1_D40936EF3BF54118_20_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19296C70)
#define CLASS_1_D40936EF3BF54118_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19296B10)
#define CLASS_1_D40936EF3BF54118_20_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19296F30)
#define CLASS_1_D40936EF3BF54118_20_WRITETO_OFFSET UNITYSDK_OFFSET(0x19296F90)
#define CLASS_1_D40936EF3BF54118_20__CCTOR_OFFSET UNITYSDK_OFFSET(0x19297260)
#define CLASS_1_D40936EF3BF54118_20__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19296B70)
#define CLASS_1_D40936EF3BF54118_20__CTOR_OFFSET UNITYSDK_OFFSET(0x19296B20)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_20_TypeDefinitionIndex = 26625;

class Class_1_D40936EF3BF54118_20 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_20*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_20*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_20_TypeDefinitionIndex)->GetStaticField(0x53400);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F3CA30716D4FAF92_10*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F3CA30716D4FAF92_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_20_TypeDefinitionIndex)->GetStaticField(0x53408);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_10*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_20*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_20*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_20*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_20* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_10*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_10*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_20* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_20*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_20*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_20_MERGEFROM_1_OFFSET))(this, a1);
	}
};
