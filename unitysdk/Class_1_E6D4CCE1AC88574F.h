#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E6D4CCE1AC88574F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18080760)
#define CLASS_1_E6D4CCE1AC88574F_CLONE_OFFSET UNITYSDK_OFFSET(0x180802B0)
#define CLASS_1_E6D4CCE1AC88574F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180804C0)
#define CLASS_1_E6D4CCE1AC88574F_EQUALS_OFFSET UNITYSDK_OFFSET(0x180803F0)
#define CLASS_1_E6D4CCE1AC88574F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18080550)
#define CLASS_1_E6D4CCE1AC88574F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18080B70)
#define CLASS_1_E6D4CCE1AC88574F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18080B00)
#define CLASS_1_E6D4CCE1AC88574F_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18080350)
#define CLASS_1_E6D4CCE1AC88574F_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x180803B0)
#define CLASS_1_E6D4CCE1AC88574F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18080330)
#define CLASS_1_E6D4CCE1AC88574F_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x180803E0)
#define CLASS_1_E6D4CCE1AC88574F_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x18080360)
#define CLASS_1_E6D4CCE1AC88574F_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x180803C0)
#define CLASS_1_E6D4CCE1AC88574F_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18080340)
#define CLASS_1_E6D4CCE1AC88574F_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x180803A0)
#define CLASS_1_E6D4CCE1AC88574F_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x18080380)
#define CLASS_1_E6D4CCE1AC88574F_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x18080390)
#define CLASS_1_E6D4CCE1AC88574F_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18080370)
#define CLASS_1_E6D4CCE1AC88574F_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x180803D0)
#define CLASS_1_E6D4CCE1AC88574F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18080250)
#define CLASS_1_E6D4CCE1AC88574F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180805B0)
#define CLASS_1_E6D4CCE1AC88574F_WRITETO_OFFSET UNITYSDK_OFFSET(0x18080610)
#define CLASS_1_E6D4CCE1AC88574F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18080270)
#define CLASS_1_E6D4CCE1AC88574F__CTOR_OFFSET UNITYSDK_OFFSET(0x18080260)

inline static constexpr unsigned int Class_1_E6D4CCE1AC88574F_TypeDefinitionIndex = 27500;

class Class_1_E6D4CCE1AC88574F : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Int32 Field_1_6; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::Int32 Field_1_8; // 0x20
	::System::UInt32 Field_1_10; // 0x24
	::System::UInt64 Field_1_12; // 0x28
	::System::UInt32 Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E6D4CCE1AC88574F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E6D4CCE1AC88574F*))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E6D4CCE1AC88574F* Clone()
	{
		return ((::Class_1_E6D4CCE1AC88574F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E6D4CCE1AC88574F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E6D4CCE1AC88574F*))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E6D4CCE1AC88574F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E6D4CCE1AC88574F*))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E6D4CCE1AC88574F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
