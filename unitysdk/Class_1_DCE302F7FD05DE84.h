#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_DCE302F7FD05DE84_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1812E170)
#define CLASS_1_DCE302F7FD05DE84_CLONE_OFFSET UNITYSDK_OFFSET(0x1812DBE0)
#define CLASS_1_DCE302F7FD05DE84_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1812DE90)
#define CLASS_1_DCE302F7FD05DE84_EQUALS_OFFSET UNITYSDK_OFFSET(0x1812DD80)
#define CLASS_1_DCE302F7FD05DE84_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1812DF70)
#define CLASS_1_DCE302F7FD05DE84_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1812E570)
#define CLASS_1_DCE302F7FD05DE84_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1812E4A0)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1812DCC0)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1812DD00)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1812DD20)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1812DD40)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1812DD60)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1812DCA0)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1812DCF0)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1812DCE0)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1812DCD0)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1812DD10)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1812DD30)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1812DD50)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1812DD70)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1812DCB0)
#define CLASS_1_DCE302F7FD05DE84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1812DB40)
#define CLASS_1_DCE302F7FD05DE84_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1812DFC0)
#define CLASS_1_DCE302F7FD05DE84_WRITETO_OFFSET UNITYSDK_OFFSET(0x1812E020)
#define CLASS_1_DCE302F7FD05DE84__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1812DB60)
#define CLASS_1_DCE302F7FD05DE84__CTOR_OFFSET UNITYSDK_OFFSET(0x1812DB50)

inline static constexpr unsigned int Class_1_DCE302F7FD05DE84_TypeDefinitionIndex = 23384;

class Class_1_DCE302F7FD05DE84 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Proto::ItemList* Field_1_6; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_14; // 0x24
	::System::UInt32 Field_1_2; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::System::UInt32 Field_1_10; // 0x30
	::System::UInt32 Field_1_12; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_DCE302F7FD05DE84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE302F7FD05DE84*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_DCE302F7FD05DE84* Clone()
	{
		return ((::Class_1_DCE302F7FD05DE84*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_DCE302F7FD05DE84* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DCE302F7FD05DE84*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_DCE302F7FD05DE84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE302F7FD05DE84*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_MERGEFROM_1_OFFSET))(this, a1);
	}
};
