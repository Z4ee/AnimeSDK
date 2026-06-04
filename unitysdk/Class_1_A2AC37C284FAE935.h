#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2E64892306548DEA_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A2AC37C284FAE935_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A777860)
#define CLASS_1_A2AC37C284FAE935_CLONE_OFFSET UNITYSDK_OFFSET(0x1A777480)
#define CLASS_1_A2AC37C284FAE935_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A777540)
#define CLASS_1_A2AC37C284FAE935_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A777510)
#define CLASS_1_A2AC37C284FAE935_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A777630)
#define CLASS_1_A2AC37C284FAE935_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A777AD0)
#define CLASS_1_A2AC37C284FAE935_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A777A30)
#define CLASS_1_A2AC37C284FAE935_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A7774E0)
#define CLASS_1_A2AC37C284FAE935_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A7774B0)
#define CLASS_1_A2AC37C284FAE935_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x1A777500)
#define CLASS_1_A2AC37C284FAE935_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A777310)
#define CLASS_1_A2AC37C284FAE935_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A7774F0)
#define CLASS_1_A2AC37C284FAE935_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A7774C0)
#define CLASS_1_A2AC37C284FAE935_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x1A7774D0)
#define CLASS_1_A2AC37C284FAE935_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A777340)
#define CLASS_1_A2AC37C284FAE935_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7776C0)
#define CLASS_1_A2AC37C284FAE935_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A777720)
#define CLASS_1_A2AC37C284FAE935__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A777C10)
#define CLASS_1_A2AC37C284FAE935__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7773A0)
#define CLASS_1_A2AC37C284FAE935__CTOR_OFFSET UNITYSDK_OFFSET(0x1A777350)

inline static constexpr unsigned int Class_1_A2AC37C284FAE935_TypeDefinitionIndex = 33139;

class Class_1_A2AC37C284FAE935 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2AC37C284FAE935_TypeDefinitionIndex)->GetStaticField(0x45EC0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_A2AC37C284FAE935*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A2AC37C284FAE935*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2AC37C284FAE935_TypeDefinitionIndex)->GetStaticField(0x45EC8);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_2E64892306548DEA_2*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_2E64892306548DEA_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2AC37C284FAE935_TypeDefinitionIndex)->GetStaticField(0x45ED0);
	}
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_2E64892306548DEA_2*>* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A2AC37C284FAE935* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2AC37C284FAE935*))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A2AC37C284FAE935*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A2AC37C284FAE935*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A2AC37C284FAE935* Clone()
	{
		return ((::Class_1_A2AC37C284FAE935*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_2E64892306548DEA_2*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_2E64892306548DEA_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A2AC37C284FAE935* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A2AC37C284FAE935*))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A2AC37C284FAE935* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2AC37C284FAE935*))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935_MERGEFROM_1_OFFSET))(this, a1);
	}
};
