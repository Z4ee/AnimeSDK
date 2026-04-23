#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_54;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_54_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x194002E0)
#define CLASS_1_355A2207C3B7A99D_54_CLONE_OFFSET UNITYSDK_OFFSET(0x193FFFC0)
#define CLASS_1_355A2207C3B7A99D_54_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19400130)
#define CLASS_1_355A2207C3B7A99D_54_EQUALS_OFFSET UNITYSDK_OFFSET(0x19400080)
#define CLASS_1_355A2207C3B7A99D_54_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x194001D0)
#define CLASS_1_355A2207C3B7A99D_54_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x194004A0)
#define CLASS_1_355A2207C3B7A99D_54_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19400340)
#define CLASS_1_355A2207C3B7A99D_54_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19400060)
#define CLASS_1_355A2207C3B7A99D_54_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x193FFEE0)
#define CLASS_1_355A2207C3B7A99D_54_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19400070)
#define CLASS_1_355A2207C3B7A99D_54_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193FFF10)
#define CLASS_1_355A2207C3B7A99D_54_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19400220)
#define CLASS_1_355A2207C3B7A99D_54_WRITETO_OFFSET UNITYSDK_OFFSET(0x19400280)
#define CLASS_1_355A2207C3B7A99D_54__CCTOR_OFFSET UNITYSDK_OFFSET(0x194005D0)
#define CLASS_1_355A2207C3B7A99D_54__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193FFF30)
#define CLASS_1_355A2207C3B7A99D_54__CTOR_OFFSET UNITYSDK_OFFSET(0x193FFF20)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_54_TypeDefinitionIndex = 29190;

class Class_1_355A2207C3B7A99D_54 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_54*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_54*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_54_TypeDefinitionIndex)->GetStaticField(0x41E00);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Class_1_45BB92167AED63A0_54* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_54*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_54*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_54*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_54* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_54*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54_CLONE_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_54* Method_1_24748FC20F375725()
	{
		return ((::Class_1_45BB92167AED63A0_54*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_45BB92167AED63A0_54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_54*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_54* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_54*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_54*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_54_MERGEFROM_1_OFFSET))(this, a1);
	}
};
