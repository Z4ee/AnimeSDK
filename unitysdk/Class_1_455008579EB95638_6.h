#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_419A79D235B9417C_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C56FBD0)
#define CLASS_1_455008579EB95638_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1C56F730)
#define CLASS_1_455008579EB95638_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C56F800)
#define CLASS_1_455008579EB95638_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C56F7A0)
#define CLASS_1_455008579EB95638_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C56F950)
#define CLASS_1_455008579EB95638_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C56FD60)
#define CLASS_1_455008579EB95638_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C56FCB0)
#define CLASS_1_455008579EB95638_6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C56F500)
#define CLASS_1_455008579EB95638_6_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C56F780)
#define CLASS_1_455008579EB95638_6_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C56F790)
#define CLASS_1_455008579EB95638_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C56F560)
#define CLASS_1_455008579EB95638_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C56FA90)
#define CLASS_1_455008579EB95638_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C56FAF0)
#define CLASS_1_455008579EB95638_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C56FF80)
#define CLASS_1_455008579EB95638_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C56F600)
#define CLASS_1_455008579EB95638_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56F570)

inline static constexpr unsigned int Class_1_455008579EB95638_6_TypeDefinitionIndex = 27936;

class Class_1_455008579EB95638_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_6_TypeDefinitionIndex)->GetStaticField(0x60E30);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_6_TypeDefinitionIndex)->GetStaticField(0x60E38);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_419A79D235B9417C_5*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_419A79D235B9417C_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_6_TypeDefinitionIndex)->GetStaticField(0x60E40);
	}
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_419A79D235B9417C_5*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_6*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_6* Clone()
	{
		return ((::Class_1_455008579EB95638_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_419A79D235B9417C_5*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_419A79D235B9417C_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_6*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_6*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
