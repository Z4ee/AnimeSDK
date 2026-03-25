#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_120319518E6F6581_30_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18188940)
#define CLASS_1_120319518E6F6581_30_CLONE_OFFSET UNITYSDK_OFFSET(0x181885F0)
#define CLASS_1_120319518E6F6581_30_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18188780)
#define CLASS_1_120319518E6F6581_30_EQUALS_OFFSET UNITYSDK_OFFSET(0x181886D0)
#define CLASS_1_120319518E6F6581_30_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181887F0)
#define CLASS_1_120319518E6F6581_30_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18188B50)
#define CLASS_1_120319518E6F6581_30_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18188B00)
#define CLASS_1_120319518E6F6581_30_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18188690)
#define CLASS_1_120319518E6F6581_30_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18188670)
#define CLASS_1_120319518E6F6581_30_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x181886A0)
#define CLASS_1_120319518E6F6581_30_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18188680)
#define CLASS_1_120319518E6F6581_30_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x181886C0)
#define CLASS_1_120319518E6F6581_30_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x181886B0)
#define CLASS_1_120319518E6F6581_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18188590)
#define CLASS_1_120319518E6F6581_30_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18188820)
#define CLASS_1_120319518E6F6581_30_WRITETO_OFFSET UNITYSDK_OFFSET(0x18188880)
#define CLASS_1_120319518E6F6581_30__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181885B0)
#define CLASS_1_120319518E6F6581_30__CTOR_OFFSET UNITYSDK_OFFSET(0x181885A0)

inline static constexpr unsigned int Class_1_120319518E6F6581_30_TypeDefinitionIndex = 24308;

class Class_1_120319518E6F6581_30 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Int32 Field_1_6; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_120319518E6F6581_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_30*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_120319518E6F6581_30* Clone()
	{
		return ((::Class_1_120319518E6F6581_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_120319518E6F6581_30* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_120319518E6F6581_30*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_120319518E6F6581_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_30*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_30_MERGEFROM_1_OFFSET))(this, a1);
	}
};
