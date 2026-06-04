#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_17;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_30_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A403770)
#define CLASS_1_455008579EB95638_30_CLONE_OFFSET UNITYSDK_OFFSET(0x1A403320)
#define CLASS_1_455008579EB95638_30_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A4033A0)
#define CLASS_1_455008579EB95638_30_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A403370)
#define CLASS_1_455008579EB95638_30_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A403480)
#define CLASS_1_455008579EB95638_30_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A403900)
#define CLASS_1_455008579EB95638_30_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A403850)
#define CLASS_1_455008579EB95638_30_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A403360)
#define CLASS_1_455008579EB95638_30_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A403180)
#define CLASS_1_455008579EB95638_30_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A403350)
#define CLASS_1_455008579EB95638_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A4031B0)
#define CLASS_1_455008579EB95638_30_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A403630)
#define CLASS_1_455008579EB95638_30_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A403690)
#define CLASS_1_455008579EB95638_30__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A403B00)
#define CLASS_1_455008579EB95638_30__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A403230)
#define CLASS_1_455008579EB95638_30__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4031C0)

inline static constexpr unsigned int Class_1_455008579EB95638_30_TypeDefinitionIndex = 26565;

class Class_1_455008579EB95638_30 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_17*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_30_TypeDefinitionIndex)->GetStaticField(0x5F20);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_30*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_30*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_30_TypeDefinitionIndex)->GetStaticField(0x5F28);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_30_TypeDefinitionIndex)->GetStaticField(0x5F30);
	}
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_17*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_30*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_30*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_30*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_30* Clone()
	{
		return ((::Class_1_455008579EB95638_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_17*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_17*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_30* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_30*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_30*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_30_MERGEFROM_1_OFFSET))(this, a1);
	}
};
