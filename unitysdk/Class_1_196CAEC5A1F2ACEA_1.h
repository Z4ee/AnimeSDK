#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_196CAEC5A1F2ACEA_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CA28810)
#define CLASS_1_196CAEC5A1F2ACEA_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA28260)
#define CLASS_1_196CAEC5A1F2ACEA_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CA28340)
#define CLASS_1_196CAEC5A1F2ACEA_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA28310)
#define CLASS_1_196CAEC5A1F2ACEA_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA28530)
#define CLASS_1_196CAEC5A1F2ACEA_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CA289A0)
#define CLASS_1_196CAEC5A1F2ACEA_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CA28940)
#define CLASS_1_196CAEC5A1F2ACEA_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CA282F0)
#define CLASS_1_196CAEC5A1F2ACEA_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CA282D0)
#define CLASS_1_196CAEC5A1F2ACEA_1_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1CA282B0)
#define CLASS_1_196CAEC5A1F2ACEA_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CA281D0)
#define CLASS_1_196CAEC5A1F2ACEA_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CA28300)
#define CLASS_1_196CAEC5A1F2ACEA_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CA282E0)
#define CLASS_1_196CAEC5A1F2ACEA_1_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1CA282C0)
#define CLASS_1_196CAEC5A1F2ACEA_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA28200)
#define CLASS_1_196CAEC5A1F2ACEA_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA28650)
#define CLASS_1_196CAEC5A1F2ACEA_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CA286B0)
#define CLASS_1_196CAEC5A1F2ACEA_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA28B40)
#define CLASS_1_196CAEC5A1F2ACEA_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA28220)
#define CLASS_1_196CAEC5A1F2ACEA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA28210)

inline static constexpr unsigned int Class_1_196CAEC5A1F2ACEA_1_TypeDefinitionIndex = 29259;

class Class_1_196CAEC5A1F2ACEA_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_196CAEC5A1F2ACEA_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_196CAEC5A1F2ACEA_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_196CAEC5A1F2ACEA_1_TypeDefinitionIndex)->GetStaticField(0x29700);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::Single Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_196CAEC5A1F2ACEA_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_196CAEC5A1F2ACEA_1*))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_196CAEC5A1F2ACEA_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_196CAEC5A1F2ACEA_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_196CAEC5A1F2ACEA_1* Clone()
	{
		return ((::Class_1_196CAEC5A1F2ACEA_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_CLONE_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_196CAEC5A1F2ACEA_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_196CAEC5A1F2ACEA_1*))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_196CAEC5A1F2ACEA_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_196CAEC5A1F2ACEA_1*))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
