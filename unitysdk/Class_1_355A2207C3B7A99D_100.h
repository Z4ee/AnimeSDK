#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_54;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_100_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A76940)
#define CLASS_1_355A2207C3B7A99D_100_CLONE_OFFSET UNITYSDK_OFFSET(0x19A76620)
#define CLASS_1_355A2207C3B7A99D_100_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A76790)
#define CLASS_1_355A2207C3B7A99D_100_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A766E0)
#define CLASS_1_355A2207C3B7A99D_100_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A76830)
#define CLASS_1_355A2207C3B7A99D_100_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A76AC0)
#define CLASS_1_355A2207C3B7A99D_100_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A769A0)
#define CLASS_1_355A2207C3B7A99D_100_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19A766C0)
#define CLASS_1_355A2207C3B7A99D_100_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19A76540)
#define CLASS_1_355A2207C3B7A99D_100_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19A766D0)
#define CLASS_1_355A2207C3B7A99D_100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A76570)
#define CLASS_1_355A2207C3B7A99D_100_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A76880)
#define CLASS_1_355A2207C3B7A99D_100_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A768E0)
#define CLASS_1_355A2207C3B7A99D_100__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A76BB0)
#define CLASS_1_355A2207C3B7A99D_100__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A76590)
#define CLASS_1_355A2207C3B7A99D_100__CTOR_OFFSET UNITYSDK_OFFSET(0x19A76580)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_100_TypeDefinitionIndex = 31246;

class Class_1_355A2207C3B7A99D_100 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_100*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_100*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_100_TypeDefinitionIndex)->GetStaticField(0x51420);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_4BC858D7C27E10ED_54* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_100*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_100*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_100*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_100* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_100*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100_CLONE_OFFSET))(this);
	}

	::Class_1_4BC858D7C27E10ED_54* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4BC858D7C27E10ED_54*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4BC858D7C27E10ED_54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_54*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_100* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_100*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_100*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_100_MERGEFROM_1_OFFSET))(this, a1);
	}
};
