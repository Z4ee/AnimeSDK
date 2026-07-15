#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F7366FFC3674B888;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD48890)
#define CLASS_1_D40936EF3BF54118_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD48410)
#define CLASS_1_D40936EF3BF54118_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD485F0)
#define CLASS_1_D40936EF3BF54118_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD48470)
#define CLASS_1_D40936EF3BF54118_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD48710)
#define CLASS_1_D40936EF3BF54118_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD489D0)
#define CLASS_1_D40936EF3BF54118_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD48930)
#define CLASS_1_D40936EF3BF54118_8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CD482A0)
#define CLASS_1_D40936EF3BF54118_8_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CD48460)
#define CLASS_1_D40936EF3BF54118_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD48300)
#define CLASS_1_D40936EF3BF54118_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD48780)
#define CLASS_1_D40936EF3BF54118_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD487E0)
#define CLASS_1_D40936EF3BF54118_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD48B90)
#define CLASS_1_D40936EF3BF54118_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD48360)
#define CLASS_1_D40936EF3BF54118_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD48310)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_8_TypeDefinitionIndex = 24951;

class Class_1_D40936EF3BF54118_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F7366FFC3674B888*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F7366FFC3674B888*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_8_TypeDefinitionIndex)->GetStaticField(0x34A30);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_8*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_8_TypeDefinitionIndex)->GetStaticField(0x34A38);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F7366FFC3674B888*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_8*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_8* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F7366FFC3674B888*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F7366FFC3674B888*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_8*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_8*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
