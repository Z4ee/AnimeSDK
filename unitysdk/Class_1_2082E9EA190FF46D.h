#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_2082E9EA190FF46D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D7B490)
#define CLASS_1_2082E9EA190FF46D_CLONE_OFFSET UNITYSDK_OFFSET(0x17D7AFA0)
#define CLASS_1_2082E9EA190FF46D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D7B1D0)
#define CLASS_1_2082E9EA190FF46D_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D7B0F0)
#define CLASS_1_2082E9EA190FF46D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D7B2B0)
#define CLASS_1_2082E9EA190FF46D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D7B860)
#define CLASS_1_2082E9EA190FF46D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D7B7A0)
#define CLASS_1_2082E9EA190FF46D_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17D7B050)
#define CLASS_1_2082E9EA190FF46D_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17D7B070)
#define CLASS_1_2082E9EA190FF46D_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17D7B0D0)
#define CLASS_1_2082E9EA190FF46D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D7B030)
#define CLASS_1_2082E9EA190FF46D_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17D7B0A0)
#define CLASS_1_2082E9EA190FF46D_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17D7B0C0)
#define CLASS_1_2082E9EA190FF46D_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17D7B0B0)
#define CLASS_1_2082E9EA190FF46D_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17D7B060)
#define CLASS_1_2082E9EA190FF46D_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17D7B080)
#define CLASS_1_2082E9EA190FF46D_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17D7B0E0)
#define CLASS_1_2082E9EA190FF46D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D7B040)
#define CLASS_1_2082E9EA190FF46D_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17D7B090)
#define CLASS_1_2082E9EA190FF46D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D7AF00)
#define CLASS_1_2082E9EA190FF46D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D7B310)
#define CLASS_1_2082E9EA190FF46D_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D7B370)
#define CLASS_1_2082E9EA190FF46D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D7AF20)
#define CLASS_1_2082E9EA190FF46D__CTOR_OFFSET UNITYSDK_OFFSET(0x17D7AF10)

inline static constexpr unsigned int Class_1_2082E9EA190FF46D_TypeDefinitionIndex = 25104;

class Class_1_2082E9EA190FF46D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x7; // 0x0
	::Proto::ItemList* Field_1_10; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_6; // 0x24
	::System::UInt64 Field_1_8; // 0x28
	::System::UInt32 Field_1_4; // 0x30
	::System::UInt32 Field_1_12; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2082E9EA190FF46D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2082E9EA190FF46D*))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2082E9EA190FF46D* Clone()
	{
		return ((::Class_1_2082E9EA190FF46D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2082E9EA190FF46D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2082E9EA190FF46D*))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2082E9EA190FF46D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2082E9EA190FF46D*))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2082E9EA190FF46D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
