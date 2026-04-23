#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_1001_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19634000)
#define CLASS_1_D17272E82AE804C2_1001_CLONE_OFFSET UNITYSDK_OFFSET(0x19633D90)
#define CLASS_1_D17272E82AE804C2_1001_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19633EC0)
#define CLASS_1_D17272E82AE804C2_1001_EQUALS_OFFSET UNITYSDK_OFFSET(0x19633E20)
#define CLASS_1_D17272E82AE804C2_1001_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19633F10)
#define CLASS_1_D17272E82AE804C2_1001_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196340C0)
#define CLASS_1_D17272E82AE804C2_1001_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19634090)
#define CLASS_1_D17272E82AE804C2_1001_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19633E00)
#define CLASS_1_D17272E82AE804C2_1001_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19633CE0)
#define CLASS_1_D17272E82AE804C2_1001_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19633E10)
#define CLASS_1_D17272E82AE804C2_1001_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19633D40)
#define CLASS_1_D17272E82AE804C2_1001_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19633F40)
#define CLASS_1_D17272E82AE804C2_1001_WRITETO_OFFSET UNITYSDK_OFFSET(0x19633FA0)
#define CLASS_1_D17272E82AE804C2_1001__CCTOR_OFFSET UNITYSDK_OFFSET(0x19634130)
#define CLASS_1_D17272E82AE804C2_1001__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19633D60)
#define CLASS_1_D17272E82AE804C2_1001__CTOR_OFFSET UNITYSDK_OFFSET(0x19633D50)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_1001_TypeDefinitionIndex = 33062;

class Class_1_D17272E82AE804C2_1001 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1001*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1001*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_1001_TypeDefinitionIndex)->GetStaticField(0x600E0);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_1001* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1001*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1001*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1001*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_1001* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_1001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_1001* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_1001*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_1001* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1001*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1001_MERGEFROM_1_OFFSET))(this, a1);
	}
};
