#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_A2C1FA0FF16CC08A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BDAFD0)
#define CLASS_1_A2C1FA0FF16CC08A_CLONE_OFFSET UNITYSDK_OFFSET(0x17BDABA0)
#define CLASS_1_A2C1FA0FF16CC08A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BDACF0)
#define CLASS_1_A2C1FA0FF16CC08A_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BDAC00)
#define CLASS_1_A2C1FA0FF16CC08A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BDADA0)
#define CLASS_1_A2C1FA0FF16CC08A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BDB1A0)
#define CLASS_1_A2C1FA0FF16CC08A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BDB100)
#define CLASS_1_A2C1FA0FF16CC08A_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17BDABE0)
#define CLASS_1_A2C1FA0FF16CC08A_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17BDABF0)
#define CLASS_1_A2C1FA0FF16CC08A_METHOD_1_959BA94B4EE67881_OFFSET UNITYSDK_OFFSET(0x17BDABD0)
#define CLASS_1_A2C1FA0FF16CC08A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BDAA80)
#define CLASS_1_A2C1FA0FF16CC08A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BDAE90)
#define CLASS_1_A2C1FA0FF16CC08A_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BDAEF0)
#define CLASS_1_A2C1FA0FF16CC08A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BDB280)
#define CLASS_1_A2C1FA0FF16CC08A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BDAAE0)
#define CLASS_1_A2C1FA0FF16CC08A__CTOR_OFFSET UNITYSDK_OFFSET(0x17BDAA90)

inline static constexpr unsigned int Class_1_A2C1FA0FF16CC08A_TypeDefinitionIndex = 24666;

class Class_1_A2C1FA0FF16CC08A : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::PlayerSimpleInfo*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PlayerSimpleInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2C1FA0FF16CC08A_TypeDefinitionIndex)->GetStaticField(0x358C0);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A2C1FA0FF16CC08A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2C1FA0FF16CC08A*))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A2C1FA0FF16CC08A* Clone()
	{
		return ((::Class_1_A2C1FA0FF16CC08A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>* Method_1_959BA94B4EE67881()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A_METHOD_1_959BA94B4EE67881_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A2C1FA0FF16CC08A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A2C1FA0FF16CC08A*))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A2C1FA0FF16CC08A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2C1FA0FF16CC08A*))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A2C1FA0FF16CC08A_MERGEFROM_1_OFFSET))(this, a1);
	}
};
