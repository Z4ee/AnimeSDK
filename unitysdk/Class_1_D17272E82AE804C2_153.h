#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_153_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF05540)
#define CLASS_1_D17272E82AE804C2_153_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF05120)
#define CLASS_1_D17272E82AE804C2_153_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF052B0)
#define CLASS_1_D17272E82AE804C2_153_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF051D0)
#define CLASS_1_D17272E82AE804C2_153_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF05380)
#define CLASS_1_D17272E82AE804C2_153_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF05720)
#define CLASS_1_D17272E82AE804C2_153_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF056D0)
#define CLASS_1_D17272E82AE804C2_153_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DF05190)
#define CLASS_1_D17272E82AE804C2_153_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1DF051B0)
#define CLASS_1_D17272E82AE804C2_153_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DF05170)
#define CLASS_1_D17272E82AE804C2_153_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DF05090)
#define CLASS_1_D17272E82AE804C2_153_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DF051A0)
#define CLASS_1_D17272E82AE804C2_153_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1DF051C0)
#define CLASS_1_D17272E82AE804C2_153_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DF05180)
#define CLASS_1_D17272E82AE804C2_153_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF050C0)
#define CLASS_1_D17272E82AE804C2_153_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF053B0)
#define CLASS_1_D17272E82AE804C2_153_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF05410)
#define CLASS_1_D17272E82AE804C2_153__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF058C0)
#define CLASS_1_D17272E82AE804C2_153__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF050E0)
#define CLASS_1_D17272E82AE804C2_153__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF050D0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_153_TypeDefinitionIndex = 26432;

class Class_1_D17272E82AE804C2_153 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_153*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_153*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_153_TypeDefinitionIndex)->GetStaticField(0x112E0);
	}
	// static const ::System::Int32 FPKJMJADEBI = 0x4; // 0x0
	// static const ::System::Int32 MCMOCFDHDCI = 0xA; // 0x0
	// static const ::System::Int32 KPGNEGMDKCI = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 ENMONJLKFME; // 0x18
	::System::UInt32 MMOEKGNHACP; // 0x1C
	::System::UInt32 NFGNEEGBNIF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_153* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_153*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_153*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_153*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_153* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_153*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_153* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_153*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_153* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_153*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_153_MERGEFROM_1_OFFSET))(this, a1);
	}
};
