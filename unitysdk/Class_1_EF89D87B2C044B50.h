#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EF89D87B2C044B50_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB8FA10)
#define CLASS_1_EF89D87B2C044B50_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB8F490)
#define CLASS_1_EF89D87B2C044B50_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB8F550)
#define CLASS_1_EF89D87B2C044B50_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB8F520)
#define CLASS_1_EF89D87B2C044B50_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB8F670)
#define CLASS_1_EF89D87B2C044B50_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB8FC90)
#define CLASS_1_EF89D87B2C044B50_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB8FC20)
#define CLASS_1_EF89D87B2C044B50_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EB8F500)
#define CLASS_1_EF89D87B2C044B50_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1EB8F4E0)
#define CLASS_1_EF89D87B2C044B50_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1EB8F4F0)
#define CLASS_1_EF89D87B2C044B50_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1EB8F4C0)
#define CLASS_1_EF89D87B2C044B50_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EB8F2C0)
#define CLASS_1_EF89D87B2C044B50_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EB8F510)
#define CLASS_1_EF89D87B2C044B50_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1EB8F4D0)
#define CLASS_1_EF89D87B2C044B50_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB8F2F0)
#define CLASS_1_EF89D87B2C044B50_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB8F850)
#define CLASS_1_EF89D87B2C044B50_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB8F8B0)
#define CLASS_1_EF89D87B2C044B50__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB8FDC0)
#define CLASS_1_EF89D87B2C044B50__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB8F390)
#define CLASS_1_EF89D87B2C044B50__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8F300)

inline static constexpr unsigned int Class_1_EF89D87B2C044B50_TypeDefinitionIndex = 30889;

class Class_1_EF89D87B2C044B50 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KJACEJGLEIO()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF89D87B2C044B50_TypeDefinitionIndex)->GetStaticField(0xCFA0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CFHKLGOEKIG()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF89D87B2C044B50_TypeDefinitionIndex)->GetStaticField(0xCFA8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_EF89D87B2C044B50*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EF89D87B2C044B50*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF89D87B2C044B50_TypeDefinitionIndex)->GetStaticField(0xCFB0);
	}
	// static const ::System::Int32 EFKKFDOKHEB = 0x5; // 0x0
	// static const ::System::Int32 MDLBBHCINAF = 0xA; // 0x0
	// static const ::System::Int32 OOECODJPKHE = 0x1; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMNFHIAGFPN; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFJLJAACKLG; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
	::System::Int64 KLFJAFCJFNF; // 0x28
	::System::UInt32 NAEACGPKNNH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EF89D87B2C044B50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF89D87B2C044B50*))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EF89D87B2C044B50*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EF89D87B2C044B50*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EF89D87B2C044B50* Clone()
	{
		return ((::Class_1_EF89D87B2C044B50*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EF89D87B2C044B50* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EF89D87B2C044B50*))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EF89D87B2C044B50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF89D87B2C044B50*))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EF89D87B2C044B50_MERGEFROM_1_OFFSET))(this, a1);
	}
};
