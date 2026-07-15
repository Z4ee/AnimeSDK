#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_907;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_3647CDEF13483562_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C91E2A0)
#define CLASS_1_3647CDEF13483562_CLONE_OFFSET UNITYSDK_OFFSET(0x1C91DA80)
#define CLASS_1_3647CDEF13483562_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C91DDF0)
#define CLASS_1_3647CDEF13483562_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C91DBC0)
#define CLASS_1_3647CDEF13483562_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C91E020)
#define CLASS_1_3647CDEF13483562_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C91E4E0)
#define CLASS_1_3647CDEF13483562_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C91E3B0)
#define CLASS_1_3647CDEF13483562_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C91DBA0)
#define CLASS_1_3647CDEF13483562_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C91DB60)
#define CLASS_1_3647CDEF13483562_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C91D960)
#define CLASS_1_3647CDEF13483562_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1C91DB90)
#define CLASS_1_3647CDEF13483562_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1C91DB80)
#define CLASS_1_3647CDEF13483562_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C91DBB0)
#define CLASS_1_3647CDEF13483562_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C91DB70)
#define CLASS_1_3647CDEF13483562_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C91D990)
#define CLASS_1_3647CDEF13483562_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C91E100)
#define CLASS_1_3647CDEF13483562_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C91E160)
#define CLASS_1_3647CDEF13483562__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C91E6E0)
#define CLASS_1_3647CDEF13483562__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C91D9B0)
#define CLASS_1_3647CDEF13483562__CTOR_OFFSET UNITYSDK_OFFSET(0x1C91D9A0)

inline static constexpr unsigned int Class_1_3647CDEF13483562_TypeDefinitionIndex = 31379;

class Class_1_3647CDEF13483562 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_3647CDEF13483562*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3647CDEF13483562*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3647CDEF13483562_TypeDefinitionIndex)->GetStaticField(0x5A940);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Proto::ItemList* Field_1_4; // 0x10
	::Class_1_D17272E82AE804C2_907* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3647CDEF13483562* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3647CDEF13483562*))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3647CDEF13483562*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3647CDEF13483562*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3647CDEF13483562* Clone()
	{
		return ((::Class_1_3647CDEF13483562*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_907* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_907*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_907* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_907*))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3647CDEF13483562* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3647CDEF13483562*))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3647CDEF13483562* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3647CDEF13483562*))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3647CDEF13483562_MERGEFROM_1_OFFSET))(this, a1);
	}
};
