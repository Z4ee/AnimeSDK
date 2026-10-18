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

#define CLASS_1_0CF86E4F213706E6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E384170)
#define CLASS_1_0CF86E4F213706E6_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3839E0)
#define CLASS_1_0CF86E4F213706E6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E383D00)
#define CLASS_1_0CF86E4F213706E6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E383AD0)
#define CLASS_1_0CF86E4F213706E6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E383F30)
#define CLASS_1_0CF86E4F213706E6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3842E0)
#define CLASS_1_0CF86E4F213706E6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E384200)
#define CLASS_1_0CF86E4F213706E6_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E3838F0)
#define CLASS_1_0CF86E4F213706E6_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x1E383AC0)
#define CLASS_1_0CF86E4F213706E6_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1E383AA0)
#define CLASS_1_0CF86E4F213706E6_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x1E383AB0)
#define CLASS_1_0CF86E4F213706E6_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1E383A90)
#define CLASS_1_0CF86E4F213706E6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E383920)
#define CLASS_1_0CF86E4F213706E6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E384030)
#define CLASS_1_0CF86E4F213706E6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E384090)
#define CLASS_1_0CF86E4F213706E6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3844F0)
#define CLASS_1_0CF86E4F213706E6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E383940)
#define CLASS_1_0CF86E4F213706E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1E383930)

inline static constexpr unsigned int Class_1_0CF86E4F213706E6_TypeDefinitionIndex = 32756;

class Class_1_0CF86E4F213706E6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_0CF86E4F213706E6*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0CF86E4F213706E6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CF86E4F213706E6_TypeDefinitionIndex)->GetStaticField(0x5EB50);
	}
	// static const ::System::Int32 JBNOCJKJGPK = 0x4; // 0x0
	// static const ::System::Int32 EHKOKGLGJOJ = 0x3; // 0x0
	::Proto::ItemList* LEANGDCBGPB; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Proto::ItemList* OPMLHBNDENF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0CF86E4F213706E6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0CF86E4F213706E6*))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0CF86E4F213706E6*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0CF86E4F213706E6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0CF86E4F213706E6* Clone()
	{
		return ((::Class_1_0CF86E4F213706E6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0CF86E4F213706E6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0CF86E4F213706E6*))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0CF86E4F213706E6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0CF86E4F213706E6*))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0CF86E4F213706E6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
