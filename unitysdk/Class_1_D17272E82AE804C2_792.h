#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_792_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ED58D10)
#define CLASS_1_D17272E82AE804C2_792_CLONE_OFFSET UNITYSDK_OFFSET(0x1ED588F0)
#define CLASS_1_D17272E82AE804C2_792_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ED58A80)
#define CLASS_1_D17272E82AE804C2_792_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ED589A0)
#define CLASS_1_D17272E82AE804C2_792_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ED58B50)
#define CLASS_1_D17272E82AE804C2_792_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ED58EF0)
#define CLASS_1_D17272E82AE804C2_792_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ED58EA0)
#define CLASS_1_D17272E82AE804C2_792_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1ED58960)
#define CLASS_1_D17272E82AE804C2_792_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1ED58980)
#define CLASS_1_D17272E82AE804C2_792_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1ED58940)
#define CLASS_1_D17272E82AE804C2_792_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1ED58860)
#define CLASS_1_D17272E82AE804C2_792_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1ED58970)
#define CLASS_1_D17272E82AE804C2_792_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1ED58990)
#define CLASS_1_D17272E82AE804C2_792_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1ED58950)
#define CLASS_1_D17272E82AE804C2_792_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ED58890)
#define CLASS_1_D17272E82AE804C2_792_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ED58B80)
#define CLASS_1_D17272E82AE804C2_792_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ED58BE0)
#define CLASS_1_D17272E82AE804C2_792__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED59090)
#define CLASS_1_D17272E82AE804C2_792__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED588B0)
#define CLASS_1_D17272E82AE804C2_792__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED588A0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_792_TypeDefinitionIndex = 30954;

class Class_1_D17272E82AE804C2_792 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_792*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_792*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_792_TypeDefinitionIndex)->GetStaticField(0x45530);
	}
	// static const ::System::Int32 FAFFHPGKOLG = 0xB; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0x3; // 0x0
	// static const ::System::Int32 LKJMIMGEBFO = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 LHNBGHCAICH; // 0x18
	::System::UInt32 JKFAONHBBEG; // 0x1C
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_792* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_792*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_792*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_792*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_792* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_792*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_792* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_792*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_792* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_792*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_792_MERGEFROM_1_OFFSET))(this, a1);
	}
};
