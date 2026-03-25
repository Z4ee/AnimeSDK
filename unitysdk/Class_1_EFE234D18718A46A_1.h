#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_3.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EFE234D18718A46A_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F130F0)
#define CLASS_1_EFE234D18718A46A_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17F12C40)
#define CLASS_1_EFE234D18718A46A_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F12E50)
#define CLASS_1_EFE234D18718A46A_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F12D80)
#define CLASS_1_EFE234D18718A46A_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F12EF0)
#define CLASS_1_EFE234D18718A46A_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F13450)
#define CLASS_1_EFE234D18718A46A_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F133F0)
#define CLASS_1_EFE234D18718A46A_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17F12D40)
#define CLASS_1_EFE234D18718A46A_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17F12D60)
#define CLASS_1_EFE234D18718A46A_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F12CE0)
#define CLASS_1_EFE234D18718A46A_1_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x17F12D30)
#define CLASS_1_EFE234D18718A46A_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17F12CD0)
#define CLASS_1_EFE234D18718A46A_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17F12D50)
#define CLASS_1_EFE234D18718A46A_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17F12D70)
#define CLASS_1_EFE234D18718A46A_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F12CF0)
#define CLASS_1_EFE234D18718A46A_1_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x17F12D20)
#define CLASS_1_EFE234D18718A46A_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17F12CC0)
#define CLASS_1_EFE234D18718A46A_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17F12D10)
#define CLASS_1_EFE234D18718A46A_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17F12D00)
#define CLASS_1_EFE234D18718A46A_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F12BE0)
#define CLASS_1_EFE234D18718A46A_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F12F30)
#define CLASS_1_EFE234D18718A46A_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F12F90)
#define CLASS_1_EFE234D18718A46A_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F12C00)
#define CLASS_1_EFE234D18718A46A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F12BF0)

inline static constexpr unsigned int Class_1_EFE234D18718A46A_1_TypeDefinitionIndex = 25227;

class Class_1_EFE234D18718A46A_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_A35B38E5F9115A76 Field_1_2; // 0x18
	::Enum_3_63C076C405BE0674_3 Field_1_8; // 0x1C
	::System::UInt32 Field_1_12; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::Boolean Field_1_6; // 0x28
	::System::UInt32 Field_1_10; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EFE234D18718A46A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFE234D18718A46A_1*))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EFE234D18718A46A_1* Clone()
	{
		return ((::Class_1_EFE234D18718A46A_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_CLONE_OFFSET))(this);
	}

	::Enum_3_A35B38E5F9115A76 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_A35B38E5F9115A76(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_A35B38E5F9115A76 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Enum_3_63C076C405BE0674_3 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_63C076C405BE0674_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_63C076C405BE0674_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_3))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EFE234D18718A46A_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EFE234D18718A46A_1*))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EFE234D18718A46A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFE234D18718A46A_1*))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
