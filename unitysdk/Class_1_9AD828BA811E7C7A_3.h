#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9AD828BA811E7C7A_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1976F8E0)
#define CLASS_1_9AD828BA811E7C7A_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1976F350)
#define CLASS_1_9AD828BA811E7C7A_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1976F5D0)
#define CLASS_1_9AD828BA811E7C7A_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1976F4D0)
#define CLASS_1_9AD828BA811E7C7A_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1976F690)
#define CLASS_1_9AD828BA811E7C7A_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1976FAC0)
#define CLASS_1_9AD828BA811E7C7A_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1976FA30)
#define CLASS_1_9AD828BA811E7C7A_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1976F400)
#define CLASS_1_9AD828BA811E7C7A_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1976F210)
#define CLASS_1_9AD828BA811E7C7A_3_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1976F420)
#define CLASS_1_9AD828BA811E7C7A_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1976F410)
#define CLASS_1_9AD828BA811E7C7A_3_METHOD_1_C271468BB9D81456_OFFSET UNITYSDK_OFFSET(0x1976F430)
#define CLASS_1_9AD828BA811E7C7A_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1976F270)
#define CLASS_1_9AD828BA811E7C7A_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1976F7D0)
#define CLASS_1_9AD828BA811E7C7A_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1976F830)
#define CLASS_1_9AD828BA811E7C7A_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1976FBC0)
#define CLASS_1_9AD828BA811E7C7A_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1976F2D0)
#define CLASS_1_9AD828BA811E7C7A_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1976F280)

inline static constexpr unsigned int Class_1_9AD828BA811E7C7A_3_TypeDefinitionIndex = 26825;

class Class_1_9AD828BA811E7C7A_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AD828BA811E7C7A_3_TypeDefinitionIndex)->GetStaticField(0x34AE0);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::ByteString* Field_1_5; // 0x18
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9AD828BA811E7C7A_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_3*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9AD828BA811E7C7A_3* Clone()
	{
		return ((::Class_1_9AD828BA811E7C7A_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_C271468BB9D81456(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_METHOD_1_C271468BB9D81456_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9AD828BA811E7C7A_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_3*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9AD828BA811E7C7A_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_3*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
