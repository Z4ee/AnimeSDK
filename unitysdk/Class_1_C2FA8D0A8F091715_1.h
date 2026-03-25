#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_24.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_C2FA8D0A8F091715_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1813B7C0)
#define CLASS_1_C2FA8D0A8F091715_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1813B3A0)
#define CLASS_1_C2FA8D0A8F091715_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1813B570)
#define CLASS_1_C2FA8D0A8F091715_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1813B4A0)
#define CLASS_1_C2FA8D0A8F091715_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1813B640)
#define CLASS_1_C2FA8D0A8F091715_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1813BA00)
#define CLASS_1_C2FA8D0A8F091715_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1813B950)
#define CLASS_1_C2FA8D0A8F091715_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1813B460)
#define CLASS_1_C2FA8D0A8F091715_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1813B490)
#define CLASS_1_C2FA8D0A8F091715_1_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1813B450)
#define CLASS_1_C2FA8D0A8F091715_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1813B440)
#define CLASS_1_C2FA8D0A8F091715_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1813B470)
#define CLASS_1_C2FA8D0A8F091715_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1813B480)
#define CLASS_1_C2FA8D0A8F091715_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1813B430)
#define CLASS_1_C2FA8D0A8F091715_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1813B420)
#define CLASS_1_C2FA8D0A8F091715_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1813B310)
#define CLASS_1_C2FA8D0A8F091715_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1813B680)
#define CLASS_1_C2FA8D0A8F091715_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1813B6E0)
#define CLASS_1_C2FA8D0A8F091715_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1813B330)
#define CLASS_1_C2FA8D0A8F091715_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1813B320)

inline static constexpr unsigned int Class_1_C2FA8D0A8F091715_1_TypeDefinitionIndex = 23442;

class Class_1_C2FA8D0A8F091715_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Proto::ItemList* Field_1_4; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::UInt32 Field_1_6; // 0x24
	::Enum_3_0A3761FE34514D6C_24 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C2FA8D0A8F091715_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C2FA8D0A8F091715_1*))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C2FA8D0A8F091715_1* Clone()
	{
		return ((::Class_1_C2FA8D0A8F091715_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_24 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_24(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_24 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_24))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C2FA8D0A8F091715_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C2FA8D0A8F091715_1*))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C2FA8D0A8F091715_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C2FA8D0A8F091715_1*))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C2FA8D0A8F091715_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
