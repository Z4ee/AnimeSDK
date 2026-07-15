#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_15.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_401ACB8470FA05BD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C331BA0)
#define CLASS_1_401ACB8470FA05BD_CLONE_OFFSET UNITYSDK_OFFSET(0x1C3314E0)
#define CLASS_1_401ACB8470FA05BD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C331710)
#define CLASS_1_401ACB8470FA05BD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C3315F0)
#define CLASS_1_401ACB8470FA05BD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C3318B0)
#define CLASS_1_401ACB8470FA05BD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C331DE0)
#define CLASS_1_401ACB8470FA05BD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C331D30)
#define CLASS_1_401ACB8470FA05BD_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C3315D0)
#define CLASS_1_401ACB8470FA05BD_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C3315C0)
#define CLASS_1_401ACB8470FA05BD_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C331410)
#define CLASS_1_401ACB8470FA05BD_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1C331580)
#define CLASS_1_401ACB8470FA05BD_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1C331570)
#define CLASS_1_401ACB8470FA05BD_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C3315E0)
#define CLASS_1_401ACB8470FA05BD_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C3315B0)
#define CLASS_1_401ACB8470FA05BD_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C3315A0)
#define CLASS_1_401ACB8470FA05BD_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C331590)
#define CLASS_1_401ACB8470FA05BD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C331440)
#define CLASS_1_401ACB8470FA05BD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C331950)
#define CLASS_1_401ACB8470FA05BD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C3319B0)
#define CLASS_1_401ACB8470FA05BD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C331ED0)
#define CLASS_1_401ACB8470FA05BD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C331460)
#define CLASS_1_401ACB8470FA05BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C331450)

inline static constexpr unsigned int Class_1_401ACB8470FA05BD_TypeDefinitionIndex = 25343;

class Class_1_401ACB8470FA05BD : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_401ACB8470FA05BD*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_401ACB8470FA05BD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_401ACB8470FA05BD_TypeDefinitionIndex)->GetStaticField(0x5FC20);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Proto::ItemList* Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::Boolean Field_1_8; // 0x24
	::Enum_3_DB663931210BBC27_15 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_401ACB8470FA05BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_401ACB8470FA05BD*))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_401ACB8470FA05BD*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_401ACB8470FA05BD*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_401ACB8470FA05BD* Clone()
	{
		return ((::Class_1_401ACB8470FA05BD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_15 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_15(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_15 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_15))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_401ACB8470FA05BD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_401ACB8470FA05BD*))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_401ACB8470FA05BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_401ACB8470FA05BD*))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_401ACB8470FA05BD_MERGEFROM_1_OFFSET))(this, a1);
	}
};
