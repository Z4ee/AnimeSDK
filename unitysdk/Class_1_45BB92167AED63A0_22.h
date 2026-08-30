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

#define CLASS_1_45BB92167AED63A0_22_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD758B0)
#define CLASS_1_45BB92167AED63A0_22_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD75420)
#define CLASS_1_45BB92167AED63A0_22_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD75580)
#define CLASS_1_45BB92167AED63A0_22_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD75480)
#define CLASS_1_45BB92167AED63A0_22_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD75670)
#define CLASS_1_45BB92167AED63A0_22_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD759E0)
#define CLASS_1_45BB92167AED63A0_22_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD75990)
#define CLASS_1_45BB92167AED63A0_22_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DD75450)
#define CLASS_1_45BB92167AED63A0_22_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DD75470)
#define CLASS_1_45BB92167AED63A0_22_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DD75300)
#define CLASS_1_45BB92167AED63A0_22_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DD75460)
#define CLASS_1_45BB92167AED63A0_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD75330)
#define CLASS_1_45BB92167AED63A0_22_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD75770)
#define CLASS_1_45BB92167AED63A0_22_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD757D0)
#define CLASS_1_45BB92167AED63A0_22__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD75BA0)
#define CLASS_1_45BB92167AED63A0_22__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD75390)
#define CLASS_1_45BB92167AED63A0_22__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD75340)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_22_TypeDefinitionIndex = 26563;

class Class_1_45BB92167AED63A0_22 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_22*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_22*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_22_TypeDefinitionIndex)->GetStaticField(0x14990);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BNDEKJJNCFO()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_22_TypeDefinitionIndex)->GetStaticField(0x14998);
	}
	// static const ::System::Int32 EEMPBGGOLOO = 0xC; // 0x0
	// static const ::System::Int32 JJAOPKFLHBC = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BEAEFOFBGGC; // 0x18
	::System::UInt32 OJGKLENJPDA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_22*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_22*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_22*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_22* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_22* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_22*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_22*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_MERGEFROM_1_OFFSET))(this, a1);
	}
};
