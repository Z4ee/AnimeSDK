#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_764_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E84CB30)
#define CLASS_1_D17272E82AE804C2_764_CLONE_OFFSET UNITYSDK_OFFSET(0x1E84C710)
#define CLASS_1_D17272E82AE804C2_764_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E84C8A0)
#define CLASS_1_D17272E82AE804C2_764_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E84C7C0)
#define CLASS_1_D17272E82AE804C2_764_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E84C970)
#define CLASS_1_D17272E82AE804C2_764_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E84CD10)
#define CLASS_1_D17272E82AE804C2_764_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E84CCC0)
#define CLASS_1_D17272E82AE804C2_764_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E84C780)
#define CLASS_1_D17272E82AE804C2_764_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E84C7A0)
#define CLASS_1_D17272E82AE804C2_764_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E84C760)
#define CLASS_1_D17272E82AE804C2_764_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E84C680)
#define CLASS_1_D17272E82AE804C2_764_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E84C790)
#define CLASS_1_D17272E82AE804C2_764_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E84C7B0)
#define CLASS_1_D17272E82AE804C2_764_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E84C770)
#define CLASS_1_D17272E82AE804C2_764_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E84C6B0)
#define CLASS_1_D17272E82AE804C2_764_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E84C9A0)
#define CLASS_1_D17272E82AE804C2_764_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E84CA00)
#define CLASS_1_D17272E82AE804C2_764__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E84CEB0)
#define CLASS_1_D17272E82AE804C2_764__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E84C6D0)
#define CLASS_1_D17272E82AE804C2_764__CTOR_OFFSET UNITYSDK_OFFSET(0x1E84C6C0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_764_TypeDefinitionIndex = 30812;

class Class_1_D17272E82AE804C2_764 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_764*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_764*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_764_TypeDefinitionIndex)->GetStaticField(0x5A3F0);
	}
	// static const ::System::Int32 PLDKENJLKME = 0xB; // 0x0
	// static const ::System::Int32 CLGAAGPCNGI = 0x1; // 0x0
	// static const ::System::Int32 AKNOMJNFBPP = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 EMEDPJEGFNE; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x1C
	::System::UInt32 KBBFPCGLDCN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_764* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_764*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_764*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_764*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_764* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_764*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_764* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_764*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_764* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_764*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_764_MERGEFROM_1_OFFSET))(this, a1);
	}
};
