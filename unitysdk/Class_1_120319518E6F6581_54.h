#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_120319518E6F6581_54_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F669C0)
#define CLASS_1_120319518E6F6581_54_CLONE_OFFSET UNITYSDK_OFFSET(0x17F66700)
#define CLASS_1_120319518E6F6581_54_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F66820)
#define CLASS_1_120319518E6F6581_54_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F667B0)
#define CLASS_1_120319518E6F6581_54_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F66890)
#define CLASS_1_120319518E6F6581_54_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F66BA0)
#define CLASS_1_120319518E6F6581_54_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F66B50)
#define CLASS_1_120319518E6F6581_54_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17F66770)
#define CLASS_1_120319518E6F6581_54_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17F66790)
#define CLASS_1_120319518E6F6581_54_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F66750)
#define CLASS_1_120319518E6F6581_54_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17F66780)
#define CLASS_1_120319518E6F6581_54_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17F667A0)
#define CLASS_1_120319518E6F6581_54_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F66760)
#define CLASS_1_120319518E6F6581_54_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F666A0)
#define CLASS_1_120319518E6F6581_54_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F668C0)
#define CLASS_1_120319518E6F6581_54_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F66920)
#define CLASS_1_120319518E6F6581_54__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F666C0)
#define CLASS_1_120319518E6F6581_54__CTOR_OFFSET UNITYSDK_OFFSET(0x17F666B0)

inline static constexpr unsigned int Class_1_120319518E6F6581_54_TypeDefinitionIndex = 25356;

class Class_1_120319518E6F6581_54 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_120319518E6F6581_54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_54*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_120319518E6F6581_54* Clone()
	{
		return ((::Class_1_120319518E6F6581_54*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_120319518E6F6581_54* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_120319518E6F6581_54*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_120319518E6F6581_54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_54*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_54_MERGEFROM_1_OFFSET))(this, a1);
	}
};
