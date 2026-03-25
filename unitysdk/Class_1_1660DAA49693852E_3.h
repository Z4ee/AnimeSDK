#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_22;
class Class_1_C9DFE5EE7107C629_7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1660DAA49693852E_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E54130)
#define CLASS_1_1660DAA49693852E_3_CLONE_OFFSET UNITYSDK_OFFSET(0x17E53CF0)
#define CLASS_1_1660DAA49693852E_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E53F10)
#define CLASS_1_1660DAA49693852E_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E53E20)
#define CLASS_1_1660DAA49693852E_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E53FF0)
#define CLASS_1_1660DAA49693852E_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E542E0)
#define CLASS_1_1660DAA49693852E_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E541C0)
#define CLASS_1_1660DAA49693852E_3_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17E53E00)
#define CLASS_1_1660DAA49693852E_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E53DE0)
#define CLASS_1_1660DAA49693852E_3_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17E53E10)
#define CLASS_1_1660DAA49693852E_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E53DF0)
#define CLASS_1_1660DAA49693852E_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E53BF0)
#define CLASS_1_1660DAA49693852E_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E54050)
#define CLASS_1_1660DAA49693852E_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E540B0)
#define CLASS_1_1660DAA49693852E_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E53C10)
#define CLASS_1_1660DAA49693852E_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17E53C00)

inline static constexpr unsigned int Class_1_1660DAA49693852E_3_TypeDefinitionIndex = 24550;

class Class_1_1660DAA49693852E_3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Class_1_99BD961747420BEB_22* Field_1_2; // 0x10
	::Class_1_C9DFE5EE7107C629_7* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1660DAA49693852E_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_3*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1660DAA49693852E_3* Clone()
	{
		return ((::Class_1_1660DAA49693852E_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3_CLONE_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_22* Method_1_24748FC20F375725()
	{
		return ((::Class_1_99BD961747420BEB_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_99BD961747420BEB_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_22*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_C9DFE5EE7107C629_7* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_C9DFE5EE7107C629_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_C9DFE5EE7107C629_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_7*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1660DAA49693852E_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1660DAA49693852E_3*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1660DAA49693852E_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_3*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
