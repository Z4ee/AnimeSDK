#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_33.h"
#include "unitysdk/System/Object.h"

class Class_1_36E3880E987172D7_4;
class Class_1_BB4B99DE4C2501EC_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1E593CFC2E19B08E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19445AB0)
#define CLASS_1_1E593CFC2E19B08E_CLONE_OFFSET UNITYSDK_OFFSET(0x19445620)
#define CLASS_1_1E593CFC2E19B08E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19445840)
#define CLASS_1_1E593CFC2E19B08E_EQUALS_OFFSET UNITYSDK_OFFSET(0x19445740)
#define CLASS_1_1E593CFC2E19B08E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19445930)
#define CLASS_1_1E593CFC2E19B08E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19445CC0)
#define CLASS_1_1E593CFC2E19B08E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19445C00)
#define CLASS_1_1E593CFC2E19B08E_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x19445700)
#define CLASS_1_1E593CFC2E19B08E_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x194456E0)
#define CLASS_1_1E593CFC2E19B08E_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19445730)
#define CLASS_1_1E593CFC2E19B08E_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19445520)
#define CLASS_1_1E593CFC2E19B08E_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x19445710)
#define CLASS_1_1E593CFC2E19B08E_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x194456F0)
#define CLASS_1_1E593CFC2E19B08E_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19445720)
#define CLASS_1_1E593CFC2E19B08E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19445550)
#define CLASS_1_1E593CFC2E19B08E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19445990)
#define CLASS_1_1E593CFC2E19B08E_WRITETO_OFFSET UNITYSDK_OFFSET(0x194459F0)
#define CLASS_1_1E593CFC2E19B08E__CCTOR_OFFSET UNITYSDK_OFFSET(0x19445D90)
#define CLASS_1_1E593CFC2E19B08E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19445570)
#define CLASS_1_1E593CFC2E19B08E__CTOR_OFFSET UNITYSDK_OFFSET(0x19445560)

inline static constexpr unsigned int Class_1_1E593CFC2E19B08E_TypeDefinitionIndex = 32176;

class Class_1_1E593CFC2E19B08E : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1E593CFC2E19B08E*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1E593CFC2E19B08E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E593CFC2E19B08E_TypeDefinitionIndex)->GetStaticField(0x48630);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	::Class_1_36E3880E987172D7_4* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Class_1_BB4B99DE4C2501EC_2* Field_1_5; // 0x20
	::Enum_3_4608E37A1B3D374A_33 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1E593CFC2E19B08E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1E593CFC2E19B08E*))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1E593CFC2E19B08E*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1E593CFC2E19B08E*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1E593CFC2E19B08E* Clone()
	{
		return ((::Class_1_1E593CFC2E19B08E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_CLONE_OFFSET))(this);
	}

	::Class_1_36E3880E987172D7_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_36E3880E987172D7_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_36E3880E987172D7_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36E3880E987172D7_4*))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_BB4B99DE4C2501EC_2* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_BB4B99DE4C2501EC_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_BB4B99DE4C2501EC_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_2*))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Enum_3_4608E37A1B3D374A_33 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_33(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_33 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_33))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1E593CFC2E19B08E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1E593CFC2E19B08E*))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1E593CFC2E19B08E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1E593CFC2E19B08E*))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1E593CFC2E19B08E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
