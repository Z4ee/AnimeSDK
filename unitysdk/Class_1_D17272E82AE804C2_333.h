#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_333_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E080C60)
#define CLASS_1_D17272E82AE804C2_333_CLONE_OFFSET UNITYSDK_OFFSET(0x1E080870)
#define CLASS_1_D17272E82AE804C2_333_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0809D0)
#define CLASS_1_D17272E82AE804C2_333_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E080950)
#define CLASS_1_D17272E82AE804C2_333_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E080AA0)
#define CLASS_1_D17272E82AE804C2_333_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E080E40)
#define CLASS_1_D17272E82AE804C2_333_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E080DF0)
#define CLASS_1_D17272E82AE804C2_333_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E080910)
#define CLASS_1_D17272E82AE804C2_333_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E080930)
#define CLASS_1_D17272E82AE804C2_333_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E0808F0)
#define CLASS_1_D17272E82AE804C2_333_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E0807B0)
#define CLASS_1_D17272E82AE804C2_333_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E080920)
#define CLASS_1_D17272E82AE804C2_333_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E080940)
#define CLASS_1_D17272E82AE804C2_333_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E080900)
#define CLASS_1_D17272E82AE804C2_333_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E080810)
#define CLASS_1_D17272E82AE804C2_333_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E080AD0)
#define CLASS_1_D17272E82AE804C2_333_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E080B30)
#define CLASS_1_D17272E82AE804C2_333__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E081000)
#define CLASS_1_D17272E82AE804C2_333__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E080830)
#define CLASS_1_D17272E82AE804C2_333__CTOR_OFFSET UNITYSDK_OFFSET(0x1E080820)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_333_TypeDefinitionIndex = 28082;

class Class_1_D17272E82AE804C2_333 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_333*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_333*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_333_TypeDefinitionIndex)->GetStaticField(0xECB0);
	}
	// static const ::System::Int32 EJCBKFFFEBP = 0x9; // 0x0
	// static const ::System::Int32 OAOPNBOFEOM = 0x1; // 0x0
	// static const ::System::Int32 CLGAAGPCNGI = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 OFIPOINCFIP; // 0x18
	::System::UInt32 OKPIGPJBOID; // 0x1C
	::System::UInt32 KBBFPCGLDCN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_333* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_333*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_333*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_333*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_333* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_333*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_333* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_333*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_333* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_333*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_333_MERGEFROM_1_OFFSET))(this, a1);
	}
};
