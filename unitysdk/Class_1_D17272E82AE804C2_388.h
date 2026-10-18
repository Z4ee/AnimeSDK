#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_388_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E750700)
#define CLASS_1_D17272E82AE804C2_388_CLONE_OFFSET UNITYSDK_OFFSET(0x1E750300)
#define CLASS_1_D17272E82AE804C2_388_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7504C0)
#define CLASS_1_D17272E82AE804C2_388_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7503B0)
#define CLASS_1_D17272E82AE804C2_388_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E750590)
#define CLASS_1_D17272E82AE804C2_388_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E750850)
#define CLASS_1_D17272E82AE804C2_388_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E750810)
#define CLASS_1_D17272E82AE804C2_388_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E750390)
#define CLASS_1_D17272E82AE804C2_388_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E750370)
#define CLASS_1_D17272E82AE804C2_388_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E750250)
#define CLASS_1_D17272E82AE804C2_388_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E7503A0)
#define CLASS_1_D17272E82AE804C2_388_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E750380)
#define CLASS_1_D17272E82AE804C2_388_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7502B0)
#define CLASS_1_D17272E82AE804C2_388_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7505C0)
#define CLASS_1_D17272E82AE804C2_388_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E750620)
#define CLASS_1_D17272E82AE804C2_388__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7509D0)
#define CLASS_1_D17272E82AE804C2_388__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7502D0)
#define CLASS_1_D17272E82AE804C2_388__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7502C0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_388_TypeDefinitionIndex = 28619;

class Class_1_D17272E82AE804C2_388 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_388*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_388*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_388_TypeDefinitionIndex)->GetStaticField(0x64A10);
	}
	// static const ::System::Int32 OPBKFKAEABK = 0x2; // 0x0
	// static const ::System::Int32 BHBEDNPIMEN = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 DIODHMIDKPL; // 0x18
	::System::UInt32 DDJCFFNPCNO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_388* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_388*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_388*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_388*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_388* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_388*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_388* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_388*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_388* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_388*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_388_MERGEFROM_1_OFFSET))(this, a1);
	}
};
