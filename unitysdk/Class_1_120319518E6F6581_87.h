#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_120319518E6F6581_87_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C9A030)
#define CLASS_1_120319518E6F6581_87_CLONE_OFFSET UNITYSDK_OFFSET(0x17C99D00)
#define CLASS_1_120319518E6F6581_87_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C99E90)
#define CLASS_1_120319518E6F6581_87_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C99DE0)
#define CLASS_1_120319518E6F6581_87_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C99F00)
#define CLASS_1_120319518E6F6581_87_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C9A210)
#define CLASS_1_120319518E6F6581_87_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C9A1C0)
#define CLASS_1_120319518E6F6581_87_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17C99DA0)
#define CLASS_1_120319518E6F6581_87_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17C99DC0)
#define CLASS_1_120319518E6F6581_87_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C99D80)
#define CLASS_1_120319518E6F6581_87_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17C99DB0)
#define CLASS_1_120319518E6F6581_87_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17C99DD0)
#define CLASS_1_120319518E6F6581_87_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C99D90)
#define CLASS_1_120319518E6F6581_87_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C99CA0)
#define CLASS_1_120319518E6F6581_87_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C99F30)
#define CLASS_1_120319518E6F6581_87_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C99F90)
#define CLASS_1_120319518E6F6581_87__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C99CC0)
#define CLASS_1_120319518E6F6581_87__CTOR_OFFSET UNITYSDK_OFFSET(0x17C99CB0)

inline static constexpr unsigned int Class_1_120319518E6F6581_87_TypeDefinitionIndex = 25944;

class Class_1_120319518E6F6581_87 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_120319518E6F6581_87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_87*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_120319518E6F6581_87* Clone()
	{
		return ((::Class_1_120319518E6F6581_87*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_120319518E6F6581_87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_120319518E6F6581_87*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_120319518E6F6581_87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_87*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_87_MERGEFROM_1_OFFSET))(this, a1);
	}
};
