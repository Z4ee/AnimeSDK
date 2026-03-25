#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_4B0F10A29A8267F7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1824D1F0)
#define CLASS_1_4B0F10A29A8267F7_CLONE_OFFSET UNITYSDK_OFFSET(0x1824CEA0)
#define CLASS_1_4B0F10A29A8267F7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1824D010)
#define CLASS_1_4B0F10A29A8267F7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1824CF60)
#define CLASS_1_4B0F10A29A8267F7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1824D0C0)
#define CLASS_1_4B0F10A29A8267F7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1824D3B0)
#define CLASS_1_4B0F10A29A8267F7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1824D2C0)
#define CLASS_1_4B0F10A29A8267F7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1824CF40)
#define CLASS_1_4B0F10A29A8267F7_METHOD_1_2FF5CA20D3582DA7_OFFSET UNITYSDK_OFFSET(0x1824CF20)
#define CLASS_1_4B0F10A29A8267F7_METHOD_1_76682DC918AEFE3C_OFFSET UNITYSDK_OFFSET(0x1824CF30)
#define CLASS_1_4B0F10A29A8267F7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1824CF50)
#define CLASS_1_4B0F10A29A8267F7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1824CE10)
#define CLASS_1_4B0F10A29A8267F7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1824D110)
#define CLASS_1_4B0F10A29A8267F7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1824D170)
#define CLASS_1_4B0F10A29A8267F7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1824CE30)
#define CLASS_1_4B0F10A29A8267F7__CTOR_OFFSET UNITYSDK_OFFSET(0x1824CE20)

inline static constexpr unsigned int Class_1_4B0F10A29A8267F7_TypeDefinitionIndex = 24641;

class Class_1_4B0F10A29A8267F7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Proto::PlayerSimpleInfo* Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4B0F10A29A8267F7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B0F10A29A8267F7*))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4B0F10A29A8267F7* Clone()
	{
		return ((::Class_1_4B0F10A29A8267F7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7_CLONE_OFFSET))(this);
	}

	::Proto::PlayerSimpleInfo* Method_1_2FF5CA20D3582DA7()
	{
		return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7_METHOD_1_2FF5CA20D3582DA7_OFFSET))(this);
	}

	::System::Void Method_1_76682DC918AEFE3C(::Proto::PlayerSimpleInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7_METHOD_1_76682DC918AEFE3C_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4B0F10A29A8267F7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4B0F10A29A8267F7*))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4B0F10A29A8267F7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B0F10A29A8267F7*))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4B0F10A29A8267F7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
