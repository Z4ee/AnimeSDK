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
namespace Proto { class PlayerAssistInfo; }
namespace System { class String; }

#define CLASS_1_ACE7DA343C24D230_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CB28520)
#define CLASS_1_ACE7DA343C24D230_CLONE_OFFSET UNITYSDK_OFFSET(0x1CB27FE0)
#define CLASS_1_ACE7DA343C24D230_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CB281C0)
#define CLASS_1_ACE7DA343C24D230_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CB28060)
#define CLASS_1_ACE7DA343C24D230_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CB282F0)
#define CLASS_1_ACE7DA343C24D230_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CB28760)
#define CLASS_1_ACE7DA343C24D230_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CB286B0)
#define CLASS_1_ACE7DA343C24D230_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CB28040)
#define CLASS_1_ACE7DA343C24D230_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CB28010)
#define CLASS_1_ACE7DA343C24D230_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CB27E90)
#define CLASS_1_ACE7DA343C24D230_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CB28050)
#define CLASS_1_ACE7DA343C24D230_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CB28020)
#define CLASS_1_ACE7DA343C24D230_METHOD_1_AD515D31D5C81878_OFFSET UNITYSDK_OFFSET(0x1CB28030)
#define CLASS_1_ACE7DA343C24D230_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CB27EC0)
#define CLASS_1_ACE7DA343C24D230_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CB28360)
#define CLASS_1_ACE7DA343C24D230_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CB283C0)
#define CLASS_1_ACE7DA343C24D230__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB289F0)
#define CLASS_1_ACE7DA343C24D230__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB27F20)
#define CLASS_1_ACE7DA343C24D230__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB27ED0)

inline static constexpr unsigned int Class_1_ACE7DA343C24D230_TypeDefinitionIndex = 27807;

class Class_1_ACE7DA343C24D230 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::PlayerAssistInfo*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PlayerAssistInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ACE7DA343C24D230_TypeDefinitionIndex)->GetStaticField(0x61640);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_ACE7DA343C24D230*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_ACE7DA343C24D230*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ACE7DA343C24D230_TypeDefinitionIndex)->GetStaticField(0x61648);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerAssistInfo*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_ACE7DA343C24D230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ACE7DA343C24D230*))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_ACE7DA343C24D230*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_ACE7DA343C24D230*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_ACE7DA343C24D230* Clone()
	{
		return ((::Class_1_ACE7DA343C24D230*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerAssistInfo*>* Method_1_AD515D31D5C81878()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerAssistInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_METHOD_1_AD515D31D5C81878_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_ACE7DA343C24D230* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_ACE7DA343C24D230*))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_ACE7DA343C24D230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ACE7DA343C24D230*))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ACE7DA343C24D230_MERGEFROM_1_OFFSET))(this, a1);
	}
};
