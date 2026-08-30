#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_810_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E26BD20)
#define CLASS_1_D17272E82AE804C2_810_CLONE_OFFSET UNITYSDK_OFFSET(0x1E26B910)
#define CLASS_1_D17272E82AE804C2_810_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E26BAA0)
#define CLASS_1_D17272E82AE804C2_810_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E26B9A0)
#define CLASS_1_D17272E82AE804C2_810_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E26BC10)
#define CLASS_1_D17272E82AE804C2_810_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E26BDE0)
#define CLASS_1_D17272E82AE804C2_810_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E26BDB0)
#define CLASS_1_D17272E82AE804C2_810_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E26B980)
#define CLASS_1_D17272E82AE804C2_810_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E26B860)
#define CLASS_1_D17272E82AE804C2_810_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E26B990)
#define CLASS_1_D17272E82AE804C2_810_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E26B8C0)
#define CLASS_1_D17272E82AE804C2_810_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E26BC40)
#define CLASS_1_D17272E82AE804C2_810_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E26BCA0)
#define CLASS_1_D17272E82AE804C2_810__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26BF40)
#define CLASS_1_D17272E82AE804C2_810__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E26B8E0)
#define CLASS_1_D17272E82AE804C2_810__CTOR_OFFSET UNITYSDK_OFFSET(0x1E26B8D0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_810_TypeDefinitionIndex = 31062;

class Class_1_D17272E82AE804C2_810 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_810*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_810*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_810_TypeDefinitionIndex)->GetStaticField(0x393D0);
	}
	// static const ::System::Int32 OILJOBDJEDO = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 EMJPCHGKDPL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_810* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_810*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_810*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_810*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_810* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_810*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_810* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_810*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_810* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_810*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_MERGEFROM_1_OFFSET))(this, a1);
	}
};
