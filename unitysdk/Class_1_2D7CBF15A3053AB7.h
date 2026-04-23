#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class DiceCombatAvatar; }
namespace System { class String; }

#define CLASS_1_2D7CBF15A3053AB7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1930B3F0)
#define CLASS_1_2D7CBF15A3053AB7_CLONE_OFFSET UNITYSDK_OFFSET(0x1930B0B0)
#define CLASS_1_2D7CBF15A3053AB7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1930B220)
#define CLASS_1_2D7CBF15A3053AB7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1930B170)
#define CLASS_1_2D7CBF15A3053AB7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1930B2D0)
#define CLASS_1_2D7CBF15A3053AB7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1930B5D0)
#define CLASS_1_2D7CBF15A3053AB7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1930B4C0)
#define CLASS_1_2D7CBF15A3053AB7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1930B130)
#define CLASS_1_2D7CBF15A3053AB7_METHOD_1_5B639E2F3BC3679C_OFFSET UNITYSDK_OFFSET(0x1930B150)
#define CLASS_1_2D7CBF15A3053AB7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1930AFF0)
#define CLASS_1_2D7CBF15A3053AB7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1930B140)
#define CLASS_1_2D7CBF15A3053AB7_METHOD_1_E31A6982643BF6CF_OFFSET UNITYSDK_OFFSET(0x1930B160)
#define CLASS_1_2D7CBF15A3053AB7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1930B020)
#define CLASS_1_2D7CBF15A3053AB7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1930B310)
#define CLASS_1_2D7CBF15A3053AB7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1930B370)
#define CLASS_1_2D7CBF15A3053AB7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1930B6B0)
#define CLASS_1_2D7CBF15A3053AB7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1930B040)
#define CLASS_1_2D7CBF15A3053AB7__CTOR_OFFSET UNITYSDK_OFFSET(0x1930B030)

inline static constexpr unsigned int Class_1_2D7CBF15A3053AB7_TypeDefinitionIndex = 26295;

class Class_1_2D7CBF15A3053AB7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2D7CBF15A3053AB7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2D7CBF15A3053AB7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D7CBF15A3053AB7_TypeDefinitionIndex)->GetStaticField(0x5FAE0);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	::Proto::DiceCombatAvatar* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2D7CBF15A3053AB7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2D7CBF15A3053AB7*))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2D7CBF15A3053AB7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2D7CBF15A3053AB7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2D7CBF15A3053AB7* Clone()
	{
		return ((::Class_1_2D7CBF15A3053AB7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::DiceCombatAvatar* Method_1_5B639E2F3BC3679C()
	{
		return ((::Proto::DiceCombatAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_METHOD_1_5B639E2F3BC3679C_OFFSET))(this);
	}

	::System::Void Method_1_E31A6982643BF6CF(::Proto::DiceCombatAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::DiceCombatAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_METHOD_1_E31A6982643BF6CF_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2D7CBF15A3053AB7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2D7CBF15A3053AB7*))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2D7CBF15A3053AB7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2D7CBF15A3053AB7*))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2D7CBF15A3053AB7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
