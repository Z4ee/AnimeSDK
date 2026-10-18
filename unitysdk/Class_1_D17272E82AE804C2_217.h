#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_217_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E45F150)
#define CLASS_1_D17272E82AE804C2_217_CLONE_OFFSET UNITYSDK_OFFSET(0x1E45EDA0)
#define CLASS_1_D17272E82AE804C2_217_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E45EED0)
#define CLASS_1_D17272E82AE804C2_217_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E45EE00)
#define CLASS_1_D17272E82AE804C2_217_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E45F040)
#define CLASS_1_D17272E82AE804C2_217_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E45F210)
#define CLASS_1_D17272E82AE804C2_217_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E45F1E0)
#define CLASS_1_D17272E82AE804C2_217_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E45EDE0)
#define CLASS_1_D17272E82AE804C2_217_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E45ED20)
#define CLASS_1_D17272E82AE804C2_217_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E45EDF0)
#define CLASS_1_D17272E82AE804C2_217_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E45ED50)
#define CLASS_1_D17272E82AE804C2_217_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E45F070)
#define CLASS_1_D17272E82AE804C2_217_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E45F0D0)
#define CLASS_1_D17272E82AE804C2_217__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45F370)
#define CLASS_1_D17272E82AE804C2_217__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E45ED70)
#define CLASS_1_D17272E82AE804C2_217__CTOR_OFFSET UNITYSDK_OFFSET(0x1E45ED60)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_217_TypeDefinitionIndex = 27108;

class Class_1_D17272E82AE804C2_217 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_217*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_217*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_217_TypeDefinitionIndex)->GetStaticField(0x12C40);
	}
	// static const ::System::Int32 PLDKENJLKME = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 NAEACGPKNNH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_217*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_217*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_217*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_217* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_217*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_217* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_217*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_217*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_217_MERGEFROM_1_OFFSET))(this, a1);
	}
};
