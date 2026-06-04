#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_72;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_59_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A236040)
#define CLASS_1_D40936EF3BF54118_59_CLONE_OFFSET UNITYSDK_OFFSET(0x1A235C30)
#define CLASS_1_D40936EF3BF54118_59_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A235DA0)
#define CLASS_1_D40936EF3BF54118_59_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A235C90)
#define CLASS_1_D40936EF3BF54118_59_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A235E50)
#define CLASS_1_D40936EF3BF54118_59_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A236180)
#define CLASS_1_D40936EF3BF54118_59_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A2360E0)
#define CLASS_1_D40936EF3BF54118_59_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A235AC0)
#define CLASS_1_D40936EF3BF54118_59_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A235C80)
#define CLASS_1_D40936EF3BF54118_59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A235B20)
#define CLASS_1_D40936EF3BF54118_59_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A235F30)
#define CLASS_1_D40936EF3BF54118_59_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A235F90)
#define CLASS_1_D40936EF3BF54118_59__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A236340)
#define CLASS_1_D40936EF3BF54118_59__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A235B80)
#define CLASS_1_D40936EF3BF54118_59__CTOR_OFFSET UNITYSDK_OFFSET(0x1A235B30)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_59_TypeDefinitionIndex = 29322;

class Class_1_D40936EF3BF54118_59 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_59*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_59*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_59_TypeDefinitionIndex)->GetStaticField(0x42010);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D1E0AD3915BCCF29_72*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D1E0AD3915BCCF29_72*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_59_TypeDefinitionIndex)->GetStaticField(0x42018);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_72*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_59*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_59*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_59*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_59* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_59*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_72*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_72*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_59* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_59*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_59*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_MERGEFROM_1_OFFSET))(this, a1);
	}
};
