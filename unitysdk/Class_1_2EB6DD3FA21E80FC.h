#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2EB6DD3FA21E80FC_Enum_3_FCBB2C507E9B21A3_28.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A_68;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_2EB6DD3FA21E80FC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BBC700)
#define CLASS_1_2EB6DD3FA21E80FC_CLONE_OFFSET UNITYSDK_OFFSET(0x17BBC220)
#define CLASS_1_2EB6DD3FA21E80FC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BBC310)
#define CLASS_1_2EB6DD3FA21E80FC_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BBC2B0)
#define CLASS_1_2EB6DD3FA21E80FC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BBC4F0)
#define CLASS_1_2EB6DD3FA21E80FC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BBCB00)
#define CLASS_1_2EB6DD3FA21E80FC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BBC890)
#define CLASS_1_2EB6DD3FA21E80FC_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17BBC270)
#define CLASS_1_2EB6DD3FA21E80FC_METHOD_1_2257AFAE479FF91C_OFFSET UNITYSDK_OFFSET(0x17BBC150)
#define CLASS_1_2EB6DD3FA21E80FC_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x17BBC290)
#define CLASS_1_2EB6DD3FA21E80FC_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x17BBC1A0)
#define CLASS_1_2EB6DD3FA21E80FC_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17BBC190)
#define CLASS_1_2EB6DD3FA21E80FC_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17BBC280)
#define CLASS_1_2EB6DD3FA21E80FC_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17BBC2A0)
#define CLASS_1_2EB6DD3FA21E80FC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17BBC200)
#define CLASS_1_2EB6DD3FA21E80FC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BBC000)
#define CLASS_1_2EB6DD3FA21E80FC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BBC5A0)
#define CLASS_1_2EB6DD3FA21E80FC_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BBC600)
#define CLASS_1_2EB6DD3FA21E80FC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BBC020)
#define CLASS_1_2EB6DD3FA21E80FC__CTOR_OFFSET UNITYSDK_OFFSET(0x17BBC010)

inline static constexpr unsigned int Class_1_2EB6DD3FA21E80FC_TypeDefinitionIndex = 26287;

class Class_1_2EB6DD3FA21E80FC : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Object* Field_1_5; // 0x18
	::Class_1_2EB6DD3FA21E80FC_Enum_3_FCBB2C507E9B21A3_28 Field_1_6; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2EB6DD3FA21E80FC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EB6DD3FA21E80FC*))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2EB6DD3FA21E80FC* Clone()
	{
		return ((::Class_1_2EB6DD3FA21E80FC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_2257AFAE479FF91C()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_METHOD_1_2257AFAE479FF91C_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Class_1_E7C4009BCC22497A_68* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_E7C4009BCC22497A_68*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E7C4009BCC22497A_68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_68*))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_2EB6DD3FA21E80FC_Enum_3_FCBB2C507E9B21A3_28 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_2EB6DD3FA21E80FC_Enum_3_FCBB2C507E9B21A3_28(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2EB6DD3FA21E80FC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2EB6DD3FA21E80FC*))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2EB6DD3FA21E80FC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EB6DD3FA21E80FC*))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2EB6DD3FA21E80FC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
