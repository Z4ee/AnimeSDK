#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FFA1F143DAED1B6C;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C867420)
#define CLASS_1_D40936EF3BF54118_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1C866FA0)
#define CLASS_1_D40936EF3BF54118_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C867180)
#define CLASS_1_D40936EF3BF54118_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C867000)
#define CLASS_1_D40936EF3BF54118_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8672A0)
#define CLASS_1_D40936EF3BF54118_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C867560)
#define CLASS_1_D40936EF3BF54118_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C8674C0)
#define CLASS_1_D40936EF3BF54118_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C866E30)
#define CLASS_1_D40936EF3BF54118_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C866FF0)
#define CLASS_1_D40936EF3BF54118_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C866E90)
#define CLASS_1_D40936EF3BF54118_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C867310)
#define CLASS_1_D40936EF3BF54118_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C867370)
#define CLASS_1_D40936EF3BF54118_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C867720)
#define CLASS_1_D40936EF3BF54118_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C866EF0)
#define CLASS_1_D40936EF3BF54118_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C866EA0)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_2_TypeDefinitionIndex = 24265;

class Class_1_D40936EF3BF54118_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FFA1F143DAED1B6C*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FFA1F143DAED1B6C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_2_TypeDefinitionIndex)->GetStaticField(0x18CF0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_2*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_2_TypeDefinitionIndex)->GetStaticField(0x18CF8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FFA1F143DAED1B6C*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_2*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_2* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FFA1F143DAED1B6C*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FFA1F143DAED1B6C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_2*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_2*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
