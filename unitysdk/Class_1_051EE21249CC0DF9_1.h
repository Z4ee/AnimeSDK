#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_051EE21249CC0DF9_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CE89750)
#define CLASS_1_051EE21249CC0DF9_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1CE89280)
#define CLASS_1_051EE21249CC0DF9_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CE89320)
#define CLASS_1_051EE21249CC0DF9_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CE892F0)
#define CLASS_1_051EE21249CC0DF9_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CE89470)
#define CLASS_1_051EE21249CC0DF9_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CE89940)
#define CLASS_1_051EE21249CC0DF9_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CE89880)
#define CLASS_1_051EE21249CC0DF9_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CE892B0)
#define CLASS_1_051EE21249CC0DF9_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CE892D0)
#define CLASS_1_051EE21249CC0DF9_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CE89080)
#define CLASS_1_051EE21249CC0DF9_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CE892C0)
#define CLASS_1_051EE21249CC0DF9_1_METHOD_1_959BA94B4EE67881_OFFSET UNITYSDK_OFFSET(0x1CE892E0)
#define CLASS_1_051EE21249CC0DF9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CE890B0)
#define CLASS_1_051EE21249CC0DF9_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CE895B0)
#define CLASS_1_051EE21249CC0DF9_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CE89610)
#define CLASS_1_051EE21249CC0DF9_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE89A90)
#define CLASS_1_051EE21249CC0DF9_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE89150)
#define CLASS_1_051EE21249CC0DF9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE890C0)

inline static constexpr unsigned int Class_1_051EE21249CC0DF9_1_TypeDefinitionIndex = 27763;

class Class_1_051EE21249CC0DF9_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051EE21249CC0DF9_1_TypeDefinitionIndex)->GetStaticField(0x64DD0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::PlayerSimpleInfo*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PlayerSimpleInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051EE21249CC0DF9_1_TypeDefinitionIndex)->GetStaticField(0x64DD8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_051EE21249CC0DF9_1*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_051EE21249CC0DF9_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051EE21249CC0DF9_1_TypeDefinitionIndex)->GetStaticField(0x64DE0);
	}
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>* Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_051EE21249CC0DF9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_051EE21249CC0DF9_1*))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_051EE21249CC0DF9_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_051EE21249CC0DF9_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_051EE21249CC0DF9_1* Clone()
	{
		return ((::Class_1_051EE21249CC0DF9_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>* Method_1_959BA94B4EE67881()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_METHOD_1_959BA94B4EE67881_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_051EE21249CC0DF9_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_051EE21249CC0DF9_1*))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_051EE21249CC0DF9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_051EE21249CC0DF9_1*))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_051EE21249CC0DF9_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
