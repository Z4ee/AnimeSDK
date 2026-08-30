#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_720_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E119B40)
#define CLASS_1_D17272E82AE804C2_720_CLONE_OFFSET UNITYSDK_OFFSET(0x1E119750)
#define CLASS_1_D17272E82AE804C2_720_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1198B0)
#define CLASS_1_D17272E82AE804C2_720_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E119830)
#define CLASS_1_D17272E82AE804C2_720_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E119980)
#define CLASS_1_D17272E82AE804C2_720_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E119D20)
#define CLASS_1_D17272E82AE804C2_720_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E119CD0)
#define CLASS_1_D17272E82AE804C2_720_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E1197F0)
#define CLASS_1_D17272E82AE804C2_720_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E119810)
#define CLASS_1_D17272E82AE804C2_720_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E1197D0)
#define CLASS_1_D17272E82AE804C2_720_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E119690)
#define CLASS_1_D17272E82AE804C2_720_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E119800)
#define CLASS_1_D17272E82AE804C2_720_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E119820)
#define CLASS_1_D17272E82AE804C2_720_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E1197E0)
#define CLASS_1_D17272E82AE804C2_720_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1196F0)
#define CLASS_1_D17272E82AE804C2_720_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1199B0)
#define CLASS_1_D17272E82AE804C2_720_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E119A10)
#define CLASS_1_D17272E82AE804C2_720__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E119EE0)
#define CLASS_1_D17272E82AE804C2_720__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E119710)
#define CLASS_1_D17272E82AE804C2_720__CTOR_OFFSET UNITYSDK_OFFSET(0x1E119700)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_720_TypeDefinitionIndex = 30591;

class Class_1_D17272E82AE804C2_720 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_720*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_720*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_720_TypeDefinitionIndex)->GetStaticField(0x2F5C0);
	}
	// static const ::System::Int32 OJKKIIEOEDC = 0x9; // 0x0
	// static const ::System::Int32 AOEBNCAILPJ = 0x7; // 0x0
	// static const ::System::Int32 AGMNNNMDIPG = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 LMBGHCAGODP; // 0x18
	::System::UInt32 KDKCDDFJMGA; // 0x1C
	::System::UInt32 DNKADAFBILN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_720* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_720*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_720*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_720*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_720* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_720*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_720* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_720*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_720* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_720*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_720_MERGEFROM_1_OFFSET))(this, a1);
	}
};
