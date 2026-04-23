#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1B1315A1174544DE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19865BC0)
#define CLASS_1_1B1315A1174544DE_CLONE_OFFSET UNITYSDK_OFFSET(0x19865710)
#define CLASS_1_1B1315A1174544DE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19865870)
#define CLASS_1_1B1315A1174544DE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19865840)
#define CLASS_1_1B1315A1174544DE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19865980)
#define CLASS_1_1B1315A1174544DE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19865D80)
#define CLASS_1_1B1315A1174544DE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19865CE0)
#define CLASS_1_1B1315A1174544DE_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19865790)
#define CLASS_1_1B1315A1174544DE_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x19865770)
#define CLASS_1_1B1315A1174544DE_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19865670)
#define CLASS_1_1B1315A1174544DE_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x198657A0)
#define CLASS_1_1B1315A1174544DE_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x19865780)
#define CLASS_1_1B1315A1174544DE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x198656A0)
#define CLASS_1_1B1315A1174544DE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19865AC0)
#define CLASS_1_1B1315A1174544DE_WRITETO_OFFSET UNITYSDK_OFFSET(0x19865B20)
#define CLASS_1_1B1315A1174544DE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19865E80)
#define CLASS_1_1B1315A1174544DE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x198656C0)
#define CLASS_1_1B1315A1174544DE__CTOR_OFFSET UNITYSDK_OFFSET(0x198656B0)

inline static constexpr unsigned int Class_1_1B1315A1174544DE_TypeDefinitionIndex = 32070;

class Class_1_1B1315A1174544DE : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1B1315A1174544DE*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1B1315A1174544DE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1B1315A1174544DE_TypeDefinitionIndex)->GetStaticField(0x49520);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	::System::String* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::Single Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1B1315A1174544DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1B1315A1174544DE*))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1B1315A1174544DE*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1B1315A1174544DE*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1B1315A1174544DE* Clone()
	{
		return ((::Class_1_1B1315A1174544DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_CLONE_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1B1315A1174544DE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1B1315A1174544DE*))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1B1315A1174544DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1B1315A1174544DE*))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1B1315A1174544DE_MERGEFROM_1_OFFSET))(this, a1);
	}
};
