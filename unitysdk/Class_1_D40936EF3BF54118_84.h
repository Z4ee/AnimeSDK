#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_23D2315D93EC7C07;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_84_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C3CE090)
#define CLASS_1_D40936EF3BF54118_84_CLONE_OFFSET UNITYSDK_OFFSET(0x1C3CDC10)
#define CLASS_1_D40936EF3BF54118_84_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C3CDDF0)
#define CLASS_1_D40936EF3BF54118_84_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C3CDC70)
#define CLASS_1_D40936EF3BF54118_84_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C3CDF10)
#define CLASS_1_D40936EF3BF54118_84_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C3CE1D0)
#define CLASS_1_D40936EF3BF54118_84_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C3CE130)
#define CLASS_1_D40936EF3BF54118_84_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C3CDAA0)
#define CLASS_1_D40936EF3BF54118_84_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C3CDC60)
#define CLASS_1_D40936EF3BF54118_84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C3CDB00)
#define CLASS_1_D40936EF3BF54118_84_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C3CDF80)
#define CLASS_1_D40936EF3BF54118_84_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C3CDFE0)
#define CLASS_1_D40936EF3BF54118_84__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3CE390)
#define CLASS_1_D40936EF3BF54118_84__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3CDB60)
#define CLASS_1_D40936EF3BF54118_84__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CDB10)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_84_TypeDefinitionIndex = 31573;

class Class_1_D40936EF3BF54118_84 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_84*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_84*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_84_TypeDefinitionIndex)->GetStaticField(0x211D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_23D2315D93EC7C07*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_23D2315D93EC7C07*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_84_TypeDefinitionIndex)->GetStaticField(0x211D8);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_23D2315D93EC7C07*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_84*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_84*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_84*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_84* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_84*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_23D2315D93EC7C07*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_23D2315D93EC7C07*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_84* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_84*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_84*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_84_MERGEFROM_1_OFFSET))(this, a1);
	}
};
