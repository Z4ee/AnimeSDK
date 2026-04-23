#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_252_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BCC9E0)
#define CLASS_1_D17272E82AE804C2_252_CLONE_OFFSET UNITYSDK_OFFSET(0x19BCC720)
#define CLASS_1_D17272E82AE804C2_252_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BCC870)
#define CLASS_1_D17272E82AE804C2_252_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BCC7D0)
#define CLASS_1_D17272E82AE804C2_252_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BCC8D0)
#define CLASS_1_D17272E82AE804C2_252_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BCCB30)
#define CLASS_1_D17272E82AE804C2_252_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BCCAF0)
#define CLASS_1_D17272E82AE804C2_252_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19BCC7B0)
#define CLASS_1_D17272E82AE804C2_252_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19BCC790)
#define CLASS_1_D17272E82AE804C2_252_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19BCC670)
#define CLASS_1_D17272E82AE804C2_252_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19BCC7C0)
#define CLASS_1_D17272E82AE804C2_252_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19BCC7A0)
#define CLASS_1_D17272E82AE804C2_252_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BCC6D0)
#define CLASS_1_D17272E82AE804C2_252_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BCC900)
#define CLASS_1_D17272E82AE804C2_252_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BCC960)
#define CLASS_1_D17272E82AE804C2_252__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BCCBB0)
#define CLASS_1_D17272E82AE804C2_252__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BCC6F0)
#define CLASS_1_D17272E82AE804C2_252__CTOR_OFFSET UNITYSDK_OFFSET(0x19BCC6E0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_252_TypeDefinitionIndex = 26388;

class Class_1_D17272E82AE804C2_252 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_252*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_252*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_252_TypeDefinitionIndex)->GetStaticField(0x50F50);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_252* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_252*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_252*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_252*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_252* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_252*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_252* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_252*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_252* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_252*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_252_MERGEFROM_1_OFFSET))(this, a1);
	}
};
