#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BF8FDF00F218876_22;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_52_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1941B080)
#define CLASS_1_D40936EF3BF54118_52_CLONE_OFFSET UNITYSDK_OFFSET(0x1941AC60)
#define CLASS_1_D40936EF3BF54118_52_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1941ADD0)
#define CLASS_1_D40936EF3BF54118_52_EQUALS_OFFSET UNITYSDK_OFFSET(0x1941ACC0)
#define CLASS_1_D40936EF3BF54118_52_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1941AE80)
#define CLASS_1_D40936EF3BF54118_52_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1941B1C0)
#define CLASS_1_D40936EF3BF54118_52_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1941B120)
#define CLASS_1_D40936EF3BF54118_52_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1941AAF0)
#define CLASS_1_D40936EF3BF54118_52_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1941ACB0)
#define CLASS_1_D40936EF3BF54118_52_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1941AB50)
#define CLASS_1_D40936EF3BF54118_52_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1941AF70)
#define CLASS_1_D40936EF3BF54118_52_WRITETO_OFFSET UNITYSDK_OFFSET(0x1941AFD0)
#define CLASS_1_D40936EF3BF54118_52__CCTOR_OFFSET UNITYSDK_OFFSET(0x1941B2A0)
#define CLASS_1_D40936EF3BF54118_52__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1941ABB0)
#define CLASS_1_D40936EF3BF54118_52__CTOR_OFFSET UNITYSDK_OFFSET(0x1941AB60)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_52_TypeDefinitionIndex = 28377;

class Class_1_D40936EF3BF54118_52 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_7BF8FDF00F218876_22*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_7BF8FDF00F218876_22*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_52_TypeDefinitionIndex)->GetStaticField(0x44620);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_52*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_52*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_52_TypeDefinitionIndex)->GetStaticField(0x44628);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7BF8FDF00F218876_22*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_52*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_52*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_52*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_52* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_52*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7BF8FDF00F218876_22*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7BF8FDF00F218876_22*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_52* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_52*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_52*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_52_MERGEFROM_1_OFFSET))(this, a1);
	}
};
