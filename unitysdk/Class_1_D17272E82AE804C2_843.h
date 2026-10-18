#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_843_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E671860)
#define CLASS_1_D17272E82AE804C2_843_CLONE_OFFSET UNITYSDK_OFFSET(0x1E671460)
#define CLASS_1_D17272E82AE804C2_843_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E671620)
#define CLASS_1_D17272E82AE804C2_843_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E671510)
#define CLASS_1_D17272E82AE804C2_843_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6716F0)
#define CLASS_1_D17272E82AE804C2_843_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6719B0)
#define CLASS_1_D17272E82AE804C2_843_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E671970)
#define CLASS_1_D17272E82AE804C2_843_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E6714F0)
#define CLASS_1_D17272E82AE804C2_843_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E6714D0)
#define CLASS_1_D17272E82AE804C2_843_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E6713B0)
#define CLASS_1_D17272E82AE804C2_843_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E671500)
#define CLASS_1_D17272E82AE804C2_843_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E6714E0)
#define CLASS_1_D17272E82AE804C2_843_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E671410)
#define CLASS_1_D17272E82AE804C2_843_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E671720)
#define CLASS_1_D17272E82AE804C2_843_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E671780)
#define CLASS_1_D17272E82AE804C2_843__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E671B30)
#define CLASS_1_D17272E82AE804C2_843__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E671430)
#define CLASS_1_D17272E82AE804C2_843__CTOR_OFFSET UNITYSDK_OFFSET(0x1E671420)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_843_TypeDefinitionIndex = 31686;

class Class_1_D17272E82AE804C2_843 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_843*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_843*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_843_TypeDefinitionIndex)->GetStaticField(0x41AE0);
	}
	// static const ::System::Int32 ELFGGGHJCFC = 0xA; // 0x0
	// static const ::System::Int32 ODHBDFKGPJO = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 ADOPAOCMEOG; // 0x18
	::System::UInt32 LAPNIOGIGPL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_843* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_843*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_843*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_843*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_843* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_843*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_843* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_843*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_843* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_843*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_843_MERGEFROM_1_OFFSET))(this, a1);
	}
};
