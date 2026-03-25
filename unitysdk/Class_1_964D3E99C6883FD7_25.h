#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_964D3E99C6883FD7_25_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AE9480)
#define CLASS_1_964D3E99C6883FD7_25_CLONE_OFFSET UNITYSDK_OFFSET(0x17AE90F0)
#define CLASS_1_964D3E99C6883FD7_25_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AE9290)
#define CLASS_1_964D3E99C6883FD7_25_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AE91D0)
#define CLASS_1_964D3E99C6883FD7_25_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AE9340)
#define CLASS_1_964D3E99C6883FD7_25_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AE9670)
#define CLASS_1_964D3E99C6883FD7_25_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AE95D0)
#define CLASS_1_964D3E99C6883FD7_25_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17AE91B0)
#define CLASS_1_964D3E99C6883FD7_25_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17AE9170)
#define CLASS_1_964D3E99C6883FD7_25_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17AE91A0)
#define CLASS_1_964D3E99C6883FD7_25_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17AE9190)
#define CLASS_1_964D3E99C6883FD7_25_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17AE91C0)
#define CLASS_1_964D3E99C6883FD7_25_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17AE9180)
#define CLASS_1_964D3E99C6883FD7_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AE9060)
#define CLASS_1_964D3E99C6883FD7_25_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AE9380)
#define CLASS_1_964D3E99C6883FD7_25_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AE93E0)
#define CLASS_1_964D3E99C6883FD7_25__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AE9080)
#define CLASS_1_964D3E99C6883FD7_25__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE9070)

inline static constexpr unsigned int Class_1_964D3E99C6883FD7_25_TypeDefinitionIndex = 27322;

class Class_1_964D3E99C6883FD7_25 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	::Proto::ItemList* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_964D3E99C6883FD7_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_964D3E99C6883FD7_25*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_964D3E99C6883FD7_25* Clone()
	{
		return ((::Class_1_964D3E99C6883FD7_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_964D3E99C6883FD7_25* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_964D3E99C6883FD7_25*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_964D3E99C6883FD7_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_964D3E99C6883FD7_25*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_25_MERGEFROM_1_OFFSET))(this, a1);
	}
};
