#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_DCE302F7FD05DE84_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EB03E0)
#define CLASS_1_DCE302F7FD05DE84_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17EAFE00)
#define CLASS_1_DCE302F7FD05DE84_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EB00E0)
#define CLASS_1_DCE302F7FD05DE84_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EAFFB0)
#define CLASS_1_DCE302F7FD05DE84_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EB01E0)
#define CLASS_1_DCE302F7FD05DE84_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EB0700)
#define CLASS_1_DCE302F7FD05DE84_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EB0630)
#define CLASS_1_DCE302F7FD05DE84_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17EAFF30)
#define CLASS_1_DCE302F7FD05DE84_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17EAFF50)
#define CLASS_1_DCE302F7FD05DE84_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17EAFF70)
#define CLASS_1_DCE302F7FD05DE84_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17EAFEF0)
#define CLASS_1_DCE302F7FD05DE84_1_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17EAFFA0)
#define CLASS_1_DCE302F7FD05DE84_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17EAFF90)
#define CLASS_1_DCE302F7FD05DE84_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17EAFF40)
#define CLASS_1_DCE302F7FD05DE84_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17EAFF60)
#define CLASS_1_DCE302F7FD05DE84_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17EAFF80)
#define CLASS_1_DCE302F7FD05DE84_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17EAFF00)
#define CLASS_1_DCE302F7FD05DE84_1_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17EAFF20)
#define CLASS_1_DCE302F7FD05DE84_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17EAFEE0)
#define CLASS_1_DCE302F7FD05DE84_1_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17EAFF10)
#define CLASS_1_DCE302F7FD05DE84_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17EAFED0)
#define CLASS_1_DCE302F7FD05DE84_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EAFD60)
#define CLASS_1_DCE302F7FD05DE84_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EB0230)
#define CLASS_1_DCE302F7FD05DE84_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EB0290)
#define CLASS_1_DCE302F7FD05DE84_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EAFD80)
#define CLASS_1_DCE302F7FD05DE84_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17EAFD70)

inline static constexpr unsigned int Class_1_DCE302F7FD05DE84_1_TypeDefinitionIndex = 24052;

class Class_1_DCE302F7FD05DE84_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xD; // 0x0
	::Proto::ItemList* Field_1_14; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_12; // 0x20
	::System::Boolean Field_1_2; // 0x24
	::System::Boolean Field_1_6; // 0x25
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_10; // 0x2C
	::System::UInt32 Field_1_8; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_DCE302F7FD05DE84_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE302F7FD05DE84_1*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_DCE302F7FD05DE84_1* Clone()
	{
		return ((::Class_1_DCE302F7FD05DE84_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_DCE302F7FD05DE84_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DCE302F7FD05DE84_1*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_DCE302F7FD05DE84_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE302F7FD05DE84_1*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
