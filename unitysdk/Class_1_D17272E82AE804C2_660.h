#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_660_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DC7C960)
#define CLASS_1_D17272E82AE804C2_660_CLONE_OFFSET UNITYSDK_OFFSET(0x1DC7C5B0)
#define CLASS_1_D17272E82AE804C2_660_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DC7C720)
#define CLASS_1_D17272E82AE804C2_660_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DC7C640)
#define CLASS_1_D17272E82AE804C2_660_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DC7C7F0)
#define CLASS_1_D17272E82AE804C2_660_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DC7CAB0)
#define CLASS_1_D17272E82AE804C2_660_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DC7CA70)
#define CLASS_1_D17272E82AE804C2_660_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DC7C620)
#define CLASS_1_D17272E82AE804C2_660_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DC7C600)
#define CLASS_1_D17272E82AE804C2_660_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DC7C530)
#define CLASS_1_D17272E82AE804C2_660_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DC7C630)
#define CLASS_1_D17272E82AE804C2_660_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DC7C610)
#define CLASS_1_D17272E82AE804C2_660_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DC7C560)
#define CLASS_1_D17272E82AE804C2_660_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DC7C820)
#define CLASS_1_D17272E82AE804C2_660_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DC7C880)
#define CLASS_1_D17272E82AE804C2_660__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC7CC30)
#define CLASS_1_D17272E82AE804C2_660__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC7C580)
#define CLASS_1_D17272E82AE804C2_660__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7C570)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_660_TypeDefinitionIndex = 30105;

class Class_1_D17272E82AE804C2_660 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_660*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_660*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_660_TypeDefinitionIndex)->GetStaticField(0x57350);
	}
	// static const ::System::Int32 ACLGGLDCAEC = 0x8; // 0x0
	// static const ::System::Int32 IOAMBHCDNBJ = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 HJPCMINMFBI; // 0x18
	::System::UInt32 NECNCPDGBOO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_660* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_660*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_660*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_660*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_660* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_660*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_660* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_660*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_660* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_660*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_660_MERGEFROM_1_OFFSET))(this, a1);
	}
};
