#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_1190_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C71FC10)
#define CLASS_1_D17272E82AE804C2_1190_CLONE_OFFSET UNITYSDK_OFFSET(0x1C71F860)
#define CLASS_1_D17272E82AE804C2_1190_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C71F990)
#define CLASS_1_D17272E82AE804C2_1190_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C71F8C0)
#define CLASS_1_D17272E82AE804C2_1190_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C71FB00)
#define CLASS_1_D17272E82AE804C2_1190_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C71FCD0)
#define CLASS_1_D17272E82AE804C2_1190_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C71FCA0)
#define CLASS_1_D17272E82AE804C2_1190_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C71F8A0)
#define CLASS_1_D17272E82AE804C2_1190_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C71F7E0)
#define CLASS_1_D17272E82AE804C2_1190_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C71F8B0)
#define CLASS_1_D17272E82AE804C2_1190_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C71F810)
#define CLASS_1_D17272E82AE804C2_1190_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C71FB30)
#define CLASS_1_D17272E82AE804C2_1190_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C71FB90)
#define CLASS_1_D17272E82AE804C2_1190__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C71FE30)
#define CLASS_1_D17272E82AE804C2_1190__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C71F830)
#define CLASS_1_D17272E82AE804C2_1190__CTOR_OFFSET UNITYSDK_OFFSET(0x1C71F820)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_1190_TypeDefinitionIndex = 33705;

class Class_1_D17272E82AE804C2_1190 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1190*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1190*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_1190_TypeDefinitionIndex)->GetStaticField(0x22C20);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_1190* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1190*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1190*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1190*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_1190* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_1190*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_1190* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_1190*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_1190* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1190*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1190_MERGEFROM_1_OFFSET))(this, a1);
	}
};
