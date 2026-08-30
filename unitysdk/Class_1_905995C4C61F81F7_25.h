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

#define CLASS_1_905995C4C61F81F7_25_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EC7D4B0)
#define CLASS_1_905995C4C61F81F7_25_CLONE_OFFSET UNITYSDK_OFFSET(0x1EC7CE70)
#define CLASS_1_905995C4C61F81F7_25_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EC7D0F0)
#define CLASS_1_905995C4C61F81F7_25_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EC7CF60)
#define CLASS_1_905995C4C61F81F7_25_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EC7D280)
#define CLASS_1_905995C4C61F81F7_25_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EC7D6B0)
#define CLASS_1_905995C4C61F81F7_25_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EC7D610)
#define CLASS_1_905995C4C61F81F7_25_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1EC7CF40)
#define CLASS_1_905995C4C61F81F7_25_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EC7CF20)
#define CLASS_1_905995C4C61F81F7_25_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EC7CDA0)
#define CLASS_1_905995C4C61F81F7_25_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1EC7CF10)
#define CLASS_1_905995C4C61F81F7_25_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1EC7CF00)
#define CLASS_1_905995C4C61F81F7_25_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1EC7CF50)
#define CLASS_1_905995C4C61F81F7_25_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EC7CF30)
#define CLASS_1_905995C4C61F81F7_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EC7CDD0)
#define CLASS_1_905995C4C61F81F7_25_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EC7D310)
#define CLASS_1_905995C4C61F81F7_25_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EC7D370)
#define CLASS_1_905995C4C61F81F7_25__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC7D890)
#define CLASS_1_905995C4C61F81F7_25__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC7CDF0)
#define CLASS_1_905995C4C61F81F7_25__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC7CDE0)

inline static constexpr unsigned int Class_1_905995C4C61F81F7_25_TypeDefinitionIndex = 34243;

class Class_1_905995C4C61F81F7_25 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_25*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_25*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_905995C4C61F81F7_25_TypeDefinitionIndex)->GetStaticField(0x3F7B0);
	}
	// static const ::System::Int32 EBMIJAAKMMH = 0x7; // 0x0
	// static const ::System::Int32 CNLGPDPICBH = 0xD; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Proto::ItemList* JDAFJANAEBG; // 0x18
	::System::UInt32 DLAENJMCANJ; // 0x20
	::System::UInt32 NAEACGPKNNH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_905995C4C61F81F7_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_25*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_25*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_25*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_905995C4C61F81F7_25* Clone()
	{
		return ((::Class_1_905995C4C61F81F7_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_905995C4C61F81F7_25* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_905995C4C61F81F7_25*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_905995C4C61F81F7_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_25*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_25_MERGEFROM_1_OFFSET))(this, a1);
	}
};
