#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_F96FD15F02F0BB7D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CBDFF0)
#define CLASS_1_F96FD15F02F0BB7D_CLONE_OFFSET UNITYSDK_OFFSET(0x17CBD950)
#define CLASS_1_F96FD15F02F0BB7D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CBDC30)
#define CLASS_1_F96FD15F02F0BB7D_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CBDB30)
#define CLASS_1_F96FD15F02F0BB7D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CBDD50)
#define CLASS_1_F96FD15F02F0BB7D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CBE410)
#define CLASS_1_F96FD15F02F0BB7D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CBE300)
#define CLASS_1_F96FD15F02F0BB7D_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x17CBDAB0)
#define CLASS_1_F96FD15F02F0BB7D_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17CBD9F0)
#define CLASS_1_F96FD15F02F0BB7D_METHOD_1_1D3C8F680A3EDA34_1_OFFSET UNITYSDK_OFFSET(0x17CBDAC0)
#define CLASS_1_F96FD15F02F0BB7D_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17CBDA00)
#define CLASS_1_F96FD15F02F0BB7D_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17CBDA80)
#define CLASS_1_F96FD15F02F0BB7D_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17CBDAA0)
#define CLASS_1_F96FD15F02F0BB7D_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17CBDA90)
#define CLASS_1_F96FD15F02F0BB7D_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17CBDA70)
#define CLASS_1_F96FD15F02F0BB7D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CBD890)
#define CLASS_1_F96FD15F02F0BB7D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CBDEA0)
#define CLASS_1_F96FD15F02F0BB7D_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CBDF00)
#define CLASS_1_F96FD15F02F0BB7D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CBD8C0)
#define CLASS_1_F96FD15F02F0BB7D__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBD8A0)

inline static constexpr unsigned int Class_1_F96FD15F02F0BB7D_TypeDefinitionIndex = 25124;

class Class_1_F96FD15F02F0BB7D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	::System::String* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::String* Field_1_8; // 0x20
	::Proto::ItemList* Field_1_6; // 0x28
	::System::UInt64 Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F96FD15F02F0BB7D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F96FD15F02F0BB7D*))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F96FD15F02F0BB7D* Clone()
	{
		return ((::Class_1_F96FD15F02F0BB7D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_METHOD_1_1D3C8F680A3EDA34_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F96FD15F02F0BB7D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F96FD15F02F0BB7D*))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F96FD15F02F0BB7D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F96FD15F02F0BB7D*))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F96FD15F02F0BB7D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
