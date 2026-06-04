#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_819_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AB0DC50)
#define CLASS_1_D17272E82AE804C2_819_CLONE_OFFSET UNITYSDK_OFFSET(0x1AB0D9E0)
#define CLASS_1_D17272E82AE804C2_819_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AB0DAE0)
#define CLASS_1_D17272E82AE804C2_819_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB0DA70)
#define CLASS_1_D17272E82AE804C2_819_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB0DB40)
#define CLASS_1_D17272E82AE804C2_819_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AB0DDA0)
#define CLASS_1_D17272E82AE804C2_819_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AB0DD60)
#define CLASS_1_D17272E82AE804C2_819_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1AB0DA50)
#define CLASS_1_D17272E82AE804C2_819_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1AB0DA30)
#define CLASS_1_D17272E82AE804C2_819_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AB0D960)
#define CLASS_1_D17272E82AE804C2_819_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1AB0DA60)
#define CLASS_1_D17272E82AE804C2_819_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1AB0DA40)
#define CLASS_1_D17272E82AE804C2_819_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AB0D990)
#define CLASS_1_D17272E82AE804C2_819_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB0DB70)
#define CLASS_1_D17272E82AE804C2_819_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AB0DBD0)
#define CLASS_1_D17272E82AE804C2_819__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB0DF20)
#define CLASS_1_D17272E82AE804C2_819__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB0D9B0)
#define CLASS_1_D17272E82AE804C2_819__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0D9A0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_819_TypeDefinitionIndex = 31069;

class Class_1_D17272E82AE804C2_819 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_819*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_819*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_819_TypeDefinitionIndex)->GetStaticField(0x15DC0);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_819* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_819*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_819*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_819*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_819* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_819*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_819* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_819*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_819* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_819*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_819_MERGEFROM_1_OFFSET))(this, a1);
	}
};
