#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_48ABDB052C195CD2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197658B0)
#define CLASS_1_D40936EF3BF54118_3_CLONE_OFFSET UNITYSDK_OFFSET(0x19765490)
#define CLASS_1_D40936EF3BF54118_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19765600)
#define CLASS_1_D40936EF3BF54118_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x197654F0)
#define CLASS_1_D40936EF3BF54118_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197656B0)
#define CLASS_1_D40936EF3BF54118_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197659F0)
#define CLASS_1_D40936EF3BF54118_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19765950)
#define CLASS_1_D40936EF3BF54118_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19765320)
#define CLASS_1_D40936EF3BF54118_3_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x197654E0)
#define CLASS_1_D40936EF3BF54118_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19765380)
#define CLASS_1_D40936EF3BF54118_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197657A0)
#define CLASS_1_D40936EF3BF54118_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x19765800)
#define CLASS_1_D40936EF3BF54118_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x19765AD0)
#define CLASS_1_D40936EF3BF54118_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197653E0)
#define CLASS_1_D40936EF3BF54118_3__CTOR_OFFSET UNITYSDK_OFFSET(0x19765390)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_3_TypeDefinitionIndex = 24080;

class Class_1_D40936EF3BF54118_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_48ABDB052C195CD2*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_48ABDB052C195CD2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_3_TypeDefinitionIndex)->GetStaticField(0x42870);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_3_TypeDefinitionIndex)->GetStaticField(0x42878);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_48ABDB052C195CD2*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_3*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_3* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_48ABDB052C195CD2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_48ABDB052C195CD2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_3*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_3*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
