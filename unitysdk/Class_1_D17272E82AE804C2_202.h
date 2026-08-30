#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_202_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EDDDDB0)
#define CLASS_1_D17272E82AE804C2_202_CLONE_OFFSET UNITYSDK_OFFSET(0x1EDDDA00)
#define CLASS_1_D17272E82AE804C2_202_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EDDDB30)
#define CLASS_1_D17272E82AE804C2_202_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EDDDA60)
#define CLASS_1_D17272E82AE804C2_202_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EDDDCA0)
#define CLASS_1_D17272E82AE804C2_202_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EDDDE70)
#define CLASS_1_D17272E82AE804C2_202_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EDDDE40)
#define CLASS_1_D17272E82AE804C2_202_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EDDDA40)
#define CLASS_1_D17272E82AE804C2_202_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EDDD980)
#define CLASS_1_D17272E82AE804C2_202_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EDDDA50)
#define CLASS_1_D17272E82AE804C2_202_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EDDD9B0)
#define CLASS_1_D17272E82AE804C2_202_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EDDDCD0)
#define CLASS_1_D17272E82AE804C2_202_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EDDDD30)
#define CLASS_1_D17272E82AE804C2_202__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDDDFD0)
#define CLASS_1_D17272E82AE804C2_202__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EDDD9D0)
#define CLASS_1_D17272E82AE804C2_202__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDDD9C0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_202_TypeDefinitionIndex = 26632;

class Class_1_D17272E82AE804C2_202 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_202*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_202*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_202_TypeDefinitionIndex)->GetStaticField(0x290F0);
	}
	// static const ::System::Int32 MFOEEODHKGH = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 KBMHLCCHEGF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_202* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_202*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_202*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_202*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_202* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_202*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_202* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_202*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_202* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_202*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_202_MERGEFROM_1_OFFSET))(this, a1);
	}
};
