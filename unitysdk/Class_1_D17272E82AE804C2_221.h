#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_221_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3E6C10)
#define CLASS_1_D17272E82AE804C2_221_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3E6860)
#define CLASS_1_D17272E82AE804C2_221_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3E6990)
#define CLASS_1_D17272E82AE804C2_221_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3E68C0)
#define CLASS_1_D17272E82AE804C2_221_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3E6B00)
#define CLASS_1_D17272E82AE804C2_221_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3E6CD0)
#define CLASS_1_D17272E82AE804C2_221_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3E6CA0)
#define CLASS_1_D17272E82AE804C2_221_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E3E68A0)
#define CLASS_1_D17272E82AE804C2_221_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E3E67E0)
#define CLASS_1_D17272E82AE804C2_221_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E3E68B0)
#define CLASS_1_D17272E82AE804C2_221_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3E6810)
#define CLASS_1_D17272E82AE804C2_221_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3E6B30)
#define CLASS_1_D17272E82AE804C2_221_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3E6B90)
#define CLASS_1_D17272E82AE804C2_221__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E6E30)
#define CLASS_1_D17272E82AE804C2_221__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3E6830)
#define CLASS_1_D17272E82AE804C2_221__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E6820)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_221_TypeDefinitionIndex = 26753;

class Class_1_D17272E82AE804C2_221 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_221*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_221*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_221_TypeDefinitionIndex)->GetStaticField(0x11980);
	}
	// static const ::System::Int32 BOGFCKKNGJB = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 MGPCOLIAECE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_221* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_221*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_221*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_221*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_221* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_221*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_221* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_221*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_221* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_221*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_221_MERGEFROM_1_OFFSET))(this, a1);
	}
};
