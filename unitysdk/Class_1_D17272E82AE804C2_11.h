#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE19A00)
#define CLASS_1_D17272E82AE804C2_11_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE19600)
#define CLASS_1_D17272E82AE804C2_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE197C0)
#define CLASS_1_D17272E82AE804C2_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE196B0)
#define CLASS_1_D17272E82AE804C2_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE19890)
#define CLASS_1_D17272E82AE804C2_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE19B50)
#define CLASS_1_D17272E82AE804C2_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE19B10)
#define CLASS_1_D17272E82AE804C2_11_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DE19690)
#define CLASS_1_D17272E82AE804C2_11_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DE19670)
#define CLASS_1_D17272E82AE804C2_11_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DE19550)
#define CLASS_1_D17272E82AE804C2_11_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DE196A0)
#define CLASS_1_D17272E82AE804C2_11_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DE19680)
#define CLASS_1_D17272E82AE804C2_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE195B0)
#define CLASS_1_D17272E82AE804C2_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE198C0)
#define CLASS_1_D17272E82AE804C2_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE19920)
#define CLASS_1_D17272E82AE804C2_11__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE19CD0)
#define CLASS_1_D17272E82AE804C2_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE195D0)
#define CLASS_1_D17272E82AE804C2_11__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE195C0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_11_TypeDefinitionIndex = 24998;

class Class_1_D17272E82AE804C2_11 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_11*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_11_TypeDefinitionIndex)->GetStaticField(0x1DD00);
	}
	// static const ::System::Int32 KOEOEHIMOEI = 0x1; // 0x0
	// static const ::System::Int32 PJEILMGNBGB = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 LJDBCGPFFDH; // 0x18
	::System::UInt32 AHGHHCFGNJP; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_11*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_11*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_11*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_11* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_11*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_11*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
