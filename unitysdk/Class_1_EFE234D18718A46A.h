#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EFE234D18718A46A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E29A20)
#define CLASS_1_EFE234D18718A46A_CLONE_OFFSET UNITYSDK_OFFSET(0x17E295A0)
#define CLASS_1_EFE234D18718A46A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E297B0)
#define CLASS_1_EFE234D18718A46A_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E296E0)
#define CLASS_1_EFE234D18718A46A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E29850)
#define CLASS_1_EFE234D18718A46A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E29D40)
#define CLASS_1_EFE234D18718A46A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E29CE0)
#define CLASS_1_EFE234D18718A46A_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17E29660)
#define CLASS_1_EFE234D18718A46A_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17E29680)
#define CLASS_1_EFE234D18718A46A_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17E296A0)
#define CLASS_1_EFE234D18718A46A_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E29640)
#define CLASS_1_EFE234D18718A46A_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17E296D0)
#define CLASS_1_EFE234D18718A46A_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17E29670)
#define CLASS_1_EFE234D18718A46A_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17E29690)
#define CLASS_1_EFE234D18718A46A_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17E296B0)
#define CLASS_1_EFE234D18718A46A_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E29650)
#define CLASS_1_EFE234D18718A46A_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17E296C0)
#define CLASS_1_EFE234D18718A46A_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17E29630)
#define CLASS_1_EFE234D18718A46A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17E29620)
#define CLASS_1_EFE234D18718A46A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E29540)
#define CLASS_1_EFE234D18718A46A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E29890)
#define CLASS_1_EFE234D18718A46A_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E298F0)
#define CLASS_1_EFE234D18718A46A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E29560)
#define CLASS_1_EFE234D18718A46A__CTOR_OFFSET UNITYSDK_OFFSET(0x17E29550)

inline static constexpr unsigned int Class_1_EFE234D18718A46A_TypeDefinitionIndex = 25103;

class Class_1_EFE234D18718A46A : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_8; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::UInt32 Field_1_4; // 0x20
	::Enum_3_A35B38E5F9115A76 Field_1_12; // 0x24
	::System::UInt32 Field_1_6; // 0x28
	::System::UInt32 Field_1_10; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EFE234D18718A46A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFE234D18718A46A*))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EFE234D18718A46A* Clone()
	{
		return ((::Class_1_EFE234D18718A46A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Enum_3_A35B38E5F9115A76 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_A35B38E5F9115A76(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_A35B38E5F9115A76 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EFE234D18718A46A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EFE234D18718A46A*))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EFE234D18718A46A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFE234D18718A46A*))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EFE234D18718A46A_MERGEFROM_1_OFFSET))(this, a1);
	}
};
