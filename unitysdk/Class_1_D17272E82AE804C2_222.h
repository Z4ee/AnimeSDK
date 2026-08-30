#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_222_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9FB4A0)
#define CLASS_1_D17272E82AE804C2_222_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9FB0F0)
#define CLASS_1_D17272E82AE804C2_222_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9FB220)
#define CLASS_1_D17272E82AE804C2_222_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9FB150)
#define CLASS_1_D17272E82AE804C2_222_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9FB390)
#define CLASS_1_D17272E82AE804C2_222_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9FB560)
#define CLASS_1_D17272E82AE804C2_222_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9FB530)
#define CLASS_1_D17272E82AE804C2_222_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E9FB130)
#define CLASS_1_D17272E82AE804C2_222_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E9FB070)
#define CLASS_1_D17272E82AE804C2_222_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E9FB140)
#define CLASS_1_D17272E82AE804C2_222_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9FB0A0)
#define CLASS_1_D17272E82AE804C2_222_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9FB3C0)
#define CLASS_1_D17272E82AE804C2_222_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9FB420)
#define CLASS_1_D17272E82AE804C2_222__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9FB6C0)
#define CLASS_1_D17272E82AE804C2_222__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9FB0C0)
#define CLASS_1_D17272E82AE804C2_222__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FB0B0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_222_TypeDefinitionIndex = 26776;

class Class_1_D17272E82AE804C2_222 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_222*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_222*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_222_TypeDefinitionIndex)->GetStaticField(0x47130);
	}
	// static const ::System::Int32 CPHJPMIMLOG = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 GLMPJIMKAAG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_222* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_222*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_222*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_222*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_222* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_222*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_222* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_222*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_222* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_222*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_222_MERGEFROM_1_OFFSET))(this, a1);
	}
};
