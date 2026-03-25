#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_D41D64E5C75E7B64_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181AF0C0)
#define CLASS_1_D41D64E5C75E7B64_CLONE_OFFSET UNITYSDK_OFFSET(0x181AE970)
#define CLASS_1_D41D64E5C75E7B64_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181AEB30)
#define CLASS_1_D41D64E5C75E7B64_EQUALS_OFFSET UNITYSDK_OFFSET(0x181AEB00)
#define CLASS_1_D41D64E5C75E7B64_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181AED00)
#define CLASS_1_D41D64E5C75E7B64_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181AF5F0)
#define CLASS_1_D41D64E5C75E7B64_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181AF4B0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x181AE9C0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x181AEA20)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x181AEA40)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x181AEA80)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x181AEAC0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x181AEAE0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x181AE9A0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x181AEAA0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x181AEA70)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x181AEA10)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x181AEA60)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x181AEA00)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x181AE9D0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x181AEA30)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x181AEA50)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x181AEA90)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x181AEAD0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x181AEAF0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x181AE9B0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x181AE9F0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x181AEAB0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x181AE9E0)
#define CLASS_1_D41D64E5C75E7B64_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181AE880)
#define CLASS_1_D41D64E5C75E7B64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181AEDE0)
#define CLASS_1_D41D64E5C75E7B64_WRITETO_OFFSET UNITYSDK_OFFSET(0x181AEE40)
#define CLASS_1_D41D64E5C75E7B64__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181AE8A0)
#define CLASS_1_D41D64E5C75E7B64__CTOR_OFFSET UNITYSDK_OFFSET(0x181AE890)

inline static constexpr unsigned int Class_1_D41D64E5C75E7B64_TypeDefinitionIndex = 25393;

class Class_1_D41D64E5C75E7B64 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_19 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x8; // 0x0
	::Proto::ItemList* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Proto::ItemList* Field_1_14; // 0x20
	::System::Single Field_1_18; // 0x28
	::System::UInt32 Field_1_10; // 0x2C
	::System::Boolean Field_1_6; // 0x30
	::System::UInt32 Field_1_4; // 0x34
	::System::UInt32 Field_1_20; // 0x38
	::System::UInt32 Field_1_2; // 0x3C
	::System::UInt32 Field_1_12; // 0x40
	::System::UInt32 Field_1_22; // 0x44
	::System::UInt32 Field_1_16; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D41D64E5C75E7B64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D41D64E5C75E7B64*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D41D64E5C75E7B64* Clone()
	{
		return ((::Class_1_D41D64E5C75E7B64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D41D64E5C75E7B64* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D41D64E5C75E7B64*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D41D64E5C75E7B64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D41D64E5C75E7B64*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_MERGEFROM_1_OFFSET))(this, a1);
	}
};
