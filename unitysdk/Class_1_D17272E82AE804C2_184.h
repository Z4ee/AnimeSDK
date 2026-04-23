#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_184_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19985610)
#define CLASS_1_D17272E82AE804C2_184_CLONE_OFFSET UNITYSDK_OFFSET(0x199853A0)
#define CLASS_1_D17272E82AE804C2_184_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x199854A0)
#define CLASS_1_D17272E82AE804C2_184_EQUALS_OFFSET UNITYSDK_OFFSET(0x19985430)
#define CLASS_1_D17272E82AE804C2_184_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19985500)
#define CLASS_1_D17272E82AE804C2_184_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19985760)
#define CLASS_1_D17272E82AE804C2_184_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19985720)
#define CLASS_1_D17272E82AE804C2_184_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19985410)
#define CLASS_1_D17272E82AE804C2_184_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x199853F0)
#define CLASS_1_D17272E82AE804C2_184_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19985320)
#define CLASS_1_D17272E82AE804C2_184_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19985420)
#define CLASS_1_D17272E82AE804C2_184_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19985400)
#define CLASS_1_D17272E82AE804C2_184_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19985350)
#define CLASS_1_D17272E82AE804C2_184_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19985530)
#define CLASS_1_D17272E82AE804C2_184_WRITETO_OFFSET UNITYSDK_OFFSET(0x19985590)
#define CLASS_1_D17272E82AE804C2_184__CCTOR_OFFSET UNITYSDK_OFFSET(0x199857E0)
#define CLASS_1_D17272E82AE804C2_184__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19985370)
#define CLASS_1_D17272E82AE804C2_184__CTOR_OFFSET UNITYSDK_OFFSET(0x19985360)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_184_TypeDefinitionIndex = 25694;

class Class_1_D17272E82AE804C2_184 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_184*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_184*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_184_TypeDefinitionIndex)->GetStaticField(0x637B0);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_184*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_184*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_184*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_184* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_184*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_184* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_184*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_184*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_184_MERGEFROM_1_OFFSET))(this, a1);
	}
};
