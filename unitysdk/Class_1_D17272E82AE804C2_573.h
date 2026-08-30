#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_573_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5E2FC0)
#define CLASS_1_D17272E82AE804C2_573_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5E2BD0)
#define CLASS_1_D17272E82AE804C2_573_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5E2D30)
#define CLASS_1_D17272E82AE804C2_573_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5E2CB0)
#define CLASS_1_D17272E82AE804C2_573_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5E2E00)
#define CLASS_1_D17272E82AE804C2_573_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5E31A0)
#define CLASS_1_D17272E82AE804C2_573_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5E3150)
#define CLASS_1_D17272E82AE804C2_573_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E5E2C70)
#define CLASS_1_D17272E82AE804C2_573_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E5E2C90)
#define CLASS_1_D17272E82AE804C2_573_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E5E2C50)
#define CLASS_1_D17272E82AE804C2_573_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E5E2B10)
#define CLASS_1_D17272E82AE804C2_573_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E5E2C80)
#define CLASS_1_D17272E82AE804C2_573_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E5E2CA0)
#define CLASS_1_D17272E82AE804C2_573_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E5E2C60)
#define CLASS_1_D17272E82AE804C2_573_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5E2B70)
#define CLASS_1_D17272E82AE804C2_573_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5E2E30)
#define CLASS_1_D17272E82AE804C2_573_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5E2E90)
#define CLASS_1_D17272E82AE804C2_573__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E3340)
#define CLASS_1_D17272E82AE804C2_573__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5E2B90)
#define CLASS_1_D17272E82AE804C2_573__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E2B80)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_573_TypeDefinitionIndex = 29425;

class Class_1_D17272E82AE804C2_573 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_573*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_573*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_573_TypeDefinitionIndex)->GetStaticField(0x55B60);
	}
	// static const ::System::Int32 MJEFHLBIAFH = 0x4; // 0x0
	// static const ::System::Int32 ODNBILGNMAO = 0x1; // 0x0
	// static const ::System::Int32 HCHPPKMMJMB = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 NJMBJLHJKDK; // 0x18
	::System::UInt32 IHEJOPMGLJF; // 0x1C
	::System::UInt32 BLCMLDJEGIL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_573* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_573*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_573*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_573*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_573* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_573*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_573* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_573*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_573* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_573*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_573_MERGEFROM_1_OFFSET))(this, a1);
	}
};
