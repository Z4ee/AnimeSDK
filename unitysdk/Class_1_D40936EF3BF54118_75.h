#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8DE9E50311E36284;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_75_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A09100)
#define CLASS_1_D40936EF3BF54118_75_CLONE_OFFSET UNITYSDK_OFFSET(0x19A08CE0)
#define CLASS_1_D40936EF3BF54118_75_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A08E50)
#define CLASS_1_D40936EF3BF54118_75_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A08D40)
#define CLASS_1_D40936EF3BF54118_75_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A08F00)
#define CLASS_1_D40936EF3BF54118_75_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A09240)
#define CLASS_1_D40936EF3BF54118_75_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A091A0)
#define CLASS_1_D40936EF3BF54118_75_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19A08B70)
#define CLASS_1_D40936EF3BF54118_75_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19A08D30)
#define CLASS_1_D40936EF3BF54118_75_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A08BD0)
#define CLASS_1_D40936EF3BF54118_75_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A08FF0)
#define CLASS_1_D40936EF3BF54118_75_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A09050)
#define CLASS_1_D40936EF3BF54118_75__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A09320)
#define CLASS_1_D40936EF3BF54118_75__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A08C30)
#define CLASS_1_D40936EF3BF54118_75__CTOR_OFFSET UNITYSDK_OFFSET(0x19A08BE0)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_75_TypeDefinitionIndex = 30630;

class Class_1_D40936EF3BF54118_75 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_75*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_75*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_75_TypeDefinitionIndex)->GetStaticField(0x46B90);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_8DE9E50311E36284*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_8DE9E50311E36284*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_75_TypeDefinitionIndex)->GetStaticField(0x46B98);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8DE9E50311E36284*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_75*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_75*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_75*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_75* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8DE9E50311E36284*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8DE9E50311E36284*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_75* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_75*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_75*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_75_MERGEFROM_1_OFFSET))(this, a1);
	}
};
