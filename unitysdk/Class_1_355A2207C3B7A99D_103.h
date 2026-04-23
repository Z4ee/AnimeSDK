#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C74059A83466814F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_103_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19401540)
#define CLASS_1_355A2207C3B7A99D_103_CLONE_OFFSET UNITYSDK_OFFSET(0x19401240)
#define CLASS_1_355A2207C3B7A99D_103_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19401390)
#define CLASS_1_355A2207C3B7A99D_103_EQUALS_OFFSET UNITYSDK_OFFSET(0x194012E0)
#define CLASS_1_355A2207C3B7A99D_103_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19401430)
#define CLASS_1_355A2207C3B7A99D_103_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19401630)
#define CLASS_1_355A2207C3B7A99D_103_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x194015A0)
#define CLASS_1_355A2207C3B7A99D_103_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x194012C0)
#define CLASS_1_355A2207C3B7A99D_103_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19401180)
#define CLASS_1_355A2207C3B7A99D_103_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x194012D0)
#define CLASS_1_355A2207C3B7A99D_103_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x194011B0)
#define CLASS_1_355A2207C3B7A99D_103_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19401480)
#define CLASS_1_355A2207C3B7A99D_103_WRITETO_OFFSET UNITYSDK_OFFSET(0x194014E0)
#define CLASS_1_355A2207C3B7A99D_103__CCTOR_OFFSET UNITYSDK_OFFSET(0x19401710)
#define CLASS_1_355A2207C3B7A99D_103__CTOR_1_OFFSET UNITYSDK_OFFSET(0x194011D0)
#define CLASS_1_355A2207C3B7A99D_103__CTOR_OFFSET UNITYSDK_OFFSET(0x194011C0)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_103_TypeDefinitionIndex = 31611;

class Class_1_355A2207C3B7A99D_103 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_103*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_103*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_103_TypeDefinitionIndex)->GetStaticField(0x42640);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_C74059A83466814F* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_103* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_103*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_103*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_103*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_103* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_103*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103_CLONE_OFFSET))(this);
	}

	::Class_1_C74059A83466814F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C74059A83466814F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C74059A83466814F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_103* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_103*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_103* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_103*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_103_MERGEFROM_1_OFFSET))(this, a1);
	}
};
