#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A1BC640)
#define CLASS_1_D40936EF3BF54118_CLONE_OFFSET UNITYSDK_OFFSET(0x1A1BC230)
#define CLASS_1_D40936EF3BF54118_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A1BC3A0)
#define CLASS_1_D40936EF3BF54118_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A1BC290)
#define CLASS_1_D40936EF3BF54118_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1BC450)
#define CLASS_1_D40936EF3BF54118_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A1BC780)
#define CLASS_1_D40936EF3BF54118_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A1BC6E0)
#define CLASS_1_D40936EF3BF54118_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A1BC0C0)
#define CLASS_1_D40936EF3BF54118_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A1BC280)
#define CLASS_1_D40936EF3BF54118_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A1BC120)
#define CLASS_1_D40936EF3BF54118_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A1BC530)
#define CLASS_1_D40936EF3BF54118_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A1BC590)
#define CLASS_1_D40936EF3BF54118__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1BC940)
#define CLASS_1_D40936EF3BF54118__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1BC180)
#define CLASS_1_D40936EF3BF54118__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BC130)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_TypeDefinitionIndex = 23753;

class Class_1_D40936EF3BF54118 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_TypeDefinitionIndex)->GetStaticField(0x344A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_075C34D03AFA1215_1*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_075C34D03AFA1215_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_TypeDefinitionIndex)->GetStaticField(0x344A8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_075C34D03AFA1215_1*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118* Clone()
	{
		return ((::Class_1_D40936EF3BF54118*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_075C34D03AFA1215_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_075C34D03AFA1215_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_MERGEFROM_1_OFFSET))(this, a1);
	}
};
