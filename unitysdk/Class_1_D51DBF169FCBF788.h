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

#define CLASS_1_D51DBF169FCBF788_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C3F0030)
#define CLASS_1_D51DBF169FCBF788_CLONE_OFFSET UNITYSDK_OFFSET(0x1C3EF9C0)
#define CLASS_1_D51DBF169FCBF788_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C3EFBD0)
#define CLASS_1_D51DBF169FCBF788_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C3EFA60)
#define CLASS_1_D51DBF169FCBF788_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C3EFEA0)
#define CLASS_1_D51DBF169FCBF788_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C3F0120)
#define CLASS_1_D51DBF169FCBF788_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C3F0090)
#define CLASS_1_D51DBF169FCBF788_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C3EF900)
#define CLASS_1_D51DBF169FCBF788_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1C3EFA50)
#define CLASS_1_D51DBF169FCBF788_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1C3EFA40)
#define CLASS_1_D51DBF169FCBF788_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C3EF930)
#define CLASS_1_D51DBF169FCBF788_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C3EFF40)
#define CLASS_1_D51DBF169FCBF788_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C3EFFA0)
#define CLASS_1_D51DBF169FCBF788__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3F02D0)
#define CLASS_1_D51DBF169FCBF788__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3EF950)
#define CLASS_1_D51DBF169FCBF788__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3EF940)

inline static constexpr unsigned int Class_1_D51DBF169FCBF788_TypeDefinitionIndex = 30709;

class Class_1_D51DBF169FCBF788 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D51DBF169FCBF788*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D51DBF169FCBF788*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D51DBF169FCBF788_TypeDefinitionIndex)->GetStaticField(0x4A140);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Proto::ItemList* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D51DBF169FCBF788* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D51DBF169FCBF788*))((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D51DBF169FCBF788*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D51DBF169FCBF788*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D51DBF169FCBF788* Clone()
	{
		return ((::Class_1_D51DBF169FCBF788*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D51DBF169FCBF788* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D51DBF169FCBF788*))((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D51DBF169FCBF788* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D51DBF169FCBF788*))((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D51DBF169FCBF788_MERGEFROM_1_OFFSET))(this, a1);
	}
};
