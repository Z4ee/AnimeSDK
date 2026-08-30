#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_3A9E54A224DC962B_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DAAA030)
#define CLASS_1_3A9E54A224DC962B_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1DAA9A90)
#define CLASS_1_3A9E54A224DC962B_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DAA9CD0)
#define CLASS_1_3A9E54A224DC962B_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DAA9B50)
#define CLASS_1_3A9E54A224DC962B_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DAA9E50)
#define CLASS_1_3A9E54A224DC962B_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DAAA190)
#define CLASS_1_3A9E54A224DC962B_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DAAA100)
#define CLASS_1_3A9E54A224DC962B_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DAA9B30)
#define CLASS_1_3A9E54A224DC962B_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DAA99D0)
#define CLASS_1_3A9E54A224DC962B_1_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1DAA9B20)
#define CLASS_1_3A9E54A224DC962B_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1DAA9B10)
#define CLASS_1_3A9E54A224DC962B_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DAA9B40)
#define CLASS_1_3A9E54A224DC962B_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DAA9A00)
#define CLASS_1_3A9E54A224DC962B_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DAA9EF0)
#define CLASS_1_3A9E54A224DC962B_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DAA9F50)
#define CLASS_1_3A9E54A224DC962B_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAAA350)
#define CLASS_1_3A9E54A224DC962B_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAA9A20)
#define CLASS_1_3A9E54A224DC962B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA9A10)

inline static constexpr unsigned int Class_1_3A9E54A224DC962B_1_TypeDefinitionIndex = 25876;

class Class_1_3A9E54A224DC962B_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_3A9E54A224DC962B_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3A9E54A224DC962B_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A9E54A224DC962B_1_TypeDefinitionIndex)->GetStaticField(0x2ABB0);
	}
	// static const ::System::Int32 EBMIJAAKMMH = 0xD; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Proto::ItemList* JDAFJANAEBG; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3A9E54A224DC962B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A9E54A224DC962B_1*))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3A9E54A224DC962B_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3A9E54A224DC962B_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3A9E54A224DC962B_1* Clone()
	{
		return ((::Class_1_3A9E54A224DC962B_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3A9E54A224DC962B_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3A9E54A224DC962B_1*))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3A9E54A224DC962B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A9E54A224DC962B_1*))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3A9E54A224DC962B_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
