#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_546_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19269970)
#define CLASS_1_D17272E82AE804C2_546_CLONE_OFFSET UNITYSDK_OFFSET(0x19269700)
#define CLASS_1_D17272E82AE804C2_546_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19269800)
#define CLASS_1_D17272E82AE804C2_546_EQUALS_OFFSET UNITYSDK_OFFSET(0x19269790)
#define CLASS_1_D17272E82AE804C2_546_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19269860)
#define CLASS_1_D17272E82AE804C2_546_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19269AC0)
#define CLASS_1_D17272E82AE804C2_546_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19269A80)
#define CLASS_1_D17272E82AE804C2_546_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19269770)
#define CLASS_1_D17272E82AE804C2_546_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19269750)
#define CLASS_1_D17272E82AE804C2_546_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19269680)
#define CLASS_1_D17272E82AE804C2_546_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19269780)
#define CLASS_1_D17272E82AE804C2_546_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19269760)
#define CLASS_1_D17272E82AE804C2_546_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x192696B0)
#define CLASS_1_D17272E82AE804C2_546_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19269890)
#define CLASS_1_D17272E82AE804C2_546_WRITETO_OFFSET UNITYSDK_OFFSET(0x192698F0)
#define CLASS_1_D17272E82AE804C2_546__CCTOR_OFFSET UNITYSDK_OFFSET(0x19269B40)
#define CLASS_1_D17272E82AE804C2_546__CTOR_1_OFFSET UNITYSDK_OFFSET(0x192696D0)
#define CLASS_1_D17272E82AE804C2_546__CTOR_OFFSET UNITYSDK_OFFSET(0x192696C0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_546_TypeDefinitionIndex = 28732;

class Class_1_D17272E82AE804C2_546 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_546*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_546*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_546_TypeDefinitionIndex)->GetStaticField(0x15A70);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_546* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_546*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_546*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_546*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_546* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_546*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_546* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_546*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_546* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_546*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_546_MERGEFROM_1_OFFSET))(this, a1);
	}
};
