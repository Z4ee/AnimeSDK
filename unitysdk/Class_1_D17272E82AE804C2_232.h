#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_232_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CCDEF50)
#define CLASS_1_D17272E82AE804C2_232_CLONE_OFFSET UNITYSDK_OFFSET(0x1CCDEB30)
#define CLASS_1_D17272E82AE804C2_232_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CCDECC0)
#define CLASS_1_D17272E82AE804C2_232_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CCDEBE0)
#define CLASS_1_D17272E82AE804C2_232_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CCDED90)
#define CLASS_1_D17272E82AE804C2_232_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CCDF130)
#define CLASS_1_D17272E82AE804C2_232_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CCDF0E0)
#define CLASS_1_D17272E82AE804C2_232_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CCDEBA0)
#define CLASS_1_D17272E82AE804C2_232_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1CCDEBC0)
#define CLASS_1_D17272E82AE804C2_232_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CCDEB80)
#define CLASS_1_D17272E82AE804C2_232_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CCDEAA0)
#define CLASS_1_D17272E82AE804C2_232_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CCDEBB0)
#define CLASS_1_D17272E82AE804C2_232_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1CCDEBD0)
#define CLASS_1_D17272E82AE804C2_232_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CCDEB90)
#define CLASS_1_D17272E82AE804C2_232_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CCDEAD0)
#define CLASS_1_D17272E82AE804C2_232_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CCDEDC0)
#define CLASS_1_D17272E82AE804C2_232_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CCDEE20)
#define CLASS_1_D17272E82AE804C2_232__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCDF2D0)
#define CLASS_1_D17272E82AE804C2_232__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CCDEAF0)
#define CLASS_1_D17272E82AE804C2_232__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDEAE0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_232_TypeDefinitionIndex = 26269;

class Class_1_D17272E82AE804C2_232 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_232*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_232*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_232_TypeDefinitionIndex)->GetStaticField(0x1A0B0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_232* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_232*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_232*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_232*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_232* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_232*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_232* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_232*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_232* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_232*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_232_MERGEFROM_1_OFFSET))(this, a1);
	}
};
