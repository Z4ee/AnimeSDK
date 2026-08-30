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

#define CLASS_1_FE781396C1DEB2BB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE0C670)
#define CLASS_1_FE781396C1DEB2BB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE0C0D0)
#define CLASS_1_FE781396C1DEB2BB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE0C190)
#define CLASS_1_FE781396C1DEB2BB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE0C160)
#define CLASS_1_FE781396C1DEB2BB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE0C2B0)
#define CLASS_1_FE781396C1DEB2BB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE0C820)
#define CLASS_1_FE781396C1DEB2BB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE0C7B0)
#define CLASS_1_FE781396C1DEB2BB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DE0C110)
#define CLASS_1_FE781396C1DEB2BB_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1DE0C150)
#define CLASS_1_FE781396C1DEB2BB_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DE0C100)
#define CLASS_1_FE781396C1DEB2BB_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DE0BF00)
#define CLASS_1_FE781396C1DEB2BB_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DE0C120)
#define CLASS_1_FE781396C1DEB2BB_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1DE0C140)
#define CLASS_1_FE781396C1DEB2BB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1DE0C130)
#define CLASS_1_FE781396C1DEB2BB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE0BF30)
#define CLASS_1_FE781396C1DEB2BB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE0C480)
#define CLASS_1_FE781396C1DEB2BB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE0C4E0)
#define CLASS_1_FE781396C1DEB2BB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0C950)
#define CLASS_1_FE781396C1DEB2BB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE0BFD0)
#define CLASS_1_FE781396C1DEB2BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE0BF40)

inline static constexpr unsigned int Class_1_FE781396C1DEB2BB_TypeDefinitionIndex = 29887;

class Class_1_FE781396C1DEB2BB : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EGNBKOELKLD()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE781396C1DEB2BB_TypeDefinitionIndex)->GetStaticField(0x26DA0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FALKBHPCHID()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE781396C1DEB2BB_TypeDefinitionIndex)->GetStaticField(0x26DA8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_FE781396C1DEB2BB*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FE781396C1DEB2BB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE781396C1DEB2BB_TypeDefinitionIndex)->GetStaticField(0x26DB0);
	}
	// static const ::System::Int32 OIHGFPHOBAK = 0xB; // 0x0
	// static const ::System::Int32 OEMNIDFIJEO = 0xA; // 0x0
	// static const ::System::Int32 KEPGBDBGCAL = 0x8; // 0x0
	// static const ::System::Int32 AOCEJHGLMDJ = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OFMGOBEMFEP; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ENOIJJKHJPL; // 0x20
	::System::UInt32 BHFEEGICLMK; // 0x28
	::System::Boolean EMCMEEEOPOC; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FE781396C1DEB2BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE781396C1DEB2BB*))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FE781396C1DEB2BB*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FE781396C1DEB2BB*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FE781396C1DEB2BB* Clone()
	{
		return ((::Class_1_FE781396C1DEB2BB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FE781396C1DEB2BB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FE781396C1DEB2BB*))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FE781396C1DEB2BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE781396C1DEB2BB*))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FE781396C1DEB2BB_MERGEFROM_1_OFFSET))(this, a1);
	}
};
