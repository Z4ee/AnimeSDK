#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_76.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_33A43F70B2DE3C6C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A29A570)
#define CLASS_1_33A43F70B2DE3C6C_CLONE_OFFSET UNITYSDK_OFFSET(0x1A29A1C0)
#define CLASS_1_33A43F70B2DE3C6C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A29A360)
#define CLASS_1_33A43F70B2DE3C6C_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A29A2A0)
#define CLASS_1_33A43F70B2DE3C6C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A29A410)
#define CLASS_1_33A43F70B2DE3C6C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A29A7A0)
#define CLASS_1_33A43F70B2DE3C6C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A29A700)
#define CLASS_1_33A43F70B2DE3C6C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A29A280)
#define CLASS_1_33A43F70B2DE3C6C_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A29A250)
#define CLASS_1_33A43F70B2DE3C6C_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A29A100)
#define CLASS_1_33A43F70B2DE3C6C_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1A29A270)
#define CLASS_1_33A43F70B2DE3C6C_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1A29A260)
#define CLASS_1_33A43F70B2DE3C6C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A29A290)
#define CLASS_1_33A43F70B2DE3C6C_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A29A240)
#define CLASS_1_33A43F70B2DE3C6C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A29A130)
#define CLASS_1_33A43F70B2DE3C6C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A29A450)
#define CLASS_1_33A43F70B2DE3C6C_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A29A4B0)
#define CLASS_1_33A43F70B2DE3C6C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A29A980)
#define CLASS_1_33A43F70B2DE3C6C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A29A150)
#define CLASS_1_33A43F70B2DE3C6C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A29A140)

inline static constexpr unsigned int Class_1_33A43F70B2DE3C6C_TypeDefinitionIndex = 33114;

class Class_1_33A43F70B2DE3C6C : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_33A43F70B2DE3C6C*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_33A43F70B2DE3C6C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33A43F70B2DE3C6C_TypeDefinitionIndex)->GetStaticField(0x49D60);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	::Proto::ItemList* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::Enum_3_0A3761FE34514D6C_76 Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_33A43F70B2DE3C6C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_33A43F70B2DE3C6C*))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_33A43F70B2DE3C6C*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_33A43F70B2DE3C6C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_33A43F70B2DE3C6C* Clone()
	{
		return ((::Class_1_33A43F70B2DE3C6C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_76 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_76(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_76 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_76))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_33A43F70B2DE3C6C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_33A43F70B2DE3C6C*))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_33A43F70B2DE3C6C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_33A43F70B2DE3C6C*))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_33A43F70B2DE3C6C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
