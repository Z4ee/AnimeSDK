#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_AB10E38C5412ABE5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A386E00)
#define CLASS_1_AB10E38C5412ABE5_CLONE_OFFSET UNITYSDK_OFFSET(0x1A3869B0)
#define CLASS_1_AB10E38C5412ABE5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A386AC0)
#define CLASS_1_AB10E38C5412ABE5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A386A90)
#define CLASS_1_AB10E38C5412ABE5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A386BE0)
#define CLASS_1_AB10E38C5412ABE5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A386F80)
#define CLASS_1_AB10E38C5412ABE5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A386F20)
#define CLASS_1_AB10E38C5412ABE5_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A386A20)
#define CLASS_1_AB10E38C5412ABE5_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A386A10)
#define CLASS_1_AB10E38C5412ABE5_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1A386A70)
#define CLASS_1_AB10E38C5412ABE5_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A386910)
#define CLASS_1_AB10E38C5412ABE5_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1A386A80)
#define CLASS_1_AB10E38C5412ABE5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A386940)
#define CLASS_1_AB10E38C5412ABE5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A386D10)
#define CLASS_1_AB10E38C5412ABE5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A386D70)
#define CLASS_1_AB10E38C5412ABE5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A387130)
#define CLASS_1_AB10E38C5412ABE5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A386960)
#define CLASS_1_AB10E38C5412ABE5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A386950)

inline static constexpr unsigned int Class_1_AB10E38C5412ABE5_TypeDefinitionIndex = 32179;

class Class_1_AB10E38C5412ABE5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_AB10E38C5412ABE5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_AB10E38C5412ABE5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB10E38C5412ABE5_TypeDefinitionIndex)->GetStaticField(0x33B70);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	::System::String* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::System::Single Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AB10E38C5412ABE5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AB10E38C5412ABE5*))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_AB10E38C5412ABE5*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_AB10E38C5412ABE5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_AB10E38C5412ABE5* Clone()
	{
		return ((::Class_1_AB10E38C5412ABE5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AB10E38C5412ABE5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AB10E38C5412ABE5*))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_AB10E38C5412ABE5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AB10E38C5412ABE5*))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AB10E38C5412ABE5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
