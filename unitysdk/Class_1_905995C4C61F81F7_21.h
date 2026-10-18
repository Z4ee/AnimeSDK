#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_905995C4C61F81F7_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5FB920)
#define CLASS_1_905995C4C61F81F7_21_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5FB2F0)
#define CLASS_1_905995C4C61F81F7_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5FB560)
#define CLASS_1_905995C4C61F81F7_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5FB3D0)
#define CLASS_1_905995C4C61F81F7_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5FB6F0)
#define CLASS_1_905995C4C61F81F7_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5FBB00)
#define CLASS_1_905995C4C61F81F7_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5FBA60)
#define CLASS_1_905995C4C61F81F7_21_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E5FB390)
#define CLASS_1_905995C4C61F81F7_21_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E5FB370)
#define CLASS_1_905995C4C61F81F7_21_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E5FB230)
#define CLASS_1_905995C4C61F81F7_21_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1E5FB3C0)
#define CLASS_1_905995C4C61F81F7_21_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1E5FB3B0)
#define CLASS_1_905995C4C61F81F7_21_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E5FB3A0)
#define CLASS_1_905995C4C61F81F7_21_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E5FB380)
#define CLASS_1_905995C4C61F81F7_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5FB260)
#define CLASS_1_905995C4C61F81F7_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5FB780)
#define CLASS_1_905995C4C61F81F7_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5FB7E0)
#define CLASS_1_905995C4C61F81F7_21__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5FBCE0)
#define CLASS_1_905995C4C61F81F7_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5FB280)
#define CLASS_1_905995C4C61F81F7_21__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FB270)

inline static constexpr unsigned int Class_1_905995C4C61F81F7_21_TypeDefinitionIndex = 34264;

class Class_1_905995C4C61F81F7_21 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_21*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_905995C4C61F81F7_21_TypeDefinitionIndex)->GetStaticField(0x51ED0);
	}
	// static const ::System::Int32 AAKLFHKNIHP = 0xB; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0x3; // 0x0
	// static const ::System::Int32 EBMIJAAKMMH = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Proto::ItemList* JDAFJANAEBG; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20
	::System::UInt32 GBCDKKIIKCE; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_905995C4C61F81F7_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_21*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_21*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_21*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_905995C4C61F81F7_21* Clone()
	{
		return ((::Class_1_905995C4C61F81F7_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_905995C4C61F81F7_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_905995C4C61F81F7_21*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_905995C4C61F81F7_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_21*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
