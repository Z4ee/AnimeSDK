#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6BD41257D23618B4_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19920780)
#define CLASS_1_6BD41257D23618B4_8_CLONE_OFFSET UNITYSDK_OFFSET(0x199204B0)
#define CLASS_1_6BD41257D23618B4_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x199205E0)
#define CLASS_1_6BD41257D23618B4_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x19920560)
#define CLASS_1_6BD41257D23618B4_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19920650)
#define CLASS_1_6BD41257D23618B4_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x199208F0)
#define CLASS_1_6BD41257D23618B4_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x199208A0)
#define CLASS_1_6BD41257D23618B4_8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19920540)
#define CLASS_1_6BD41257D23618B4_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19920500)
#define CLASS_1_6BD41257D23618B4_8_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19920420)
#define CLASS_1_6BD41257D23618B4_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19920550)
#define CLASS_1_6BD41257D23618B4_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19920510)
#define CLASS_1_6BD41257D23618B4_8_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19920530)
#define CLASS_1_6BD41257D23618B4_8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19920520)
#define CLASS_1_6BD41257D23618B4_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19920450)
#define CLASS_1_6BD41257D23618B4_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19920680)
#define CLASS_1_6BD41257D23618B4_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x199206E0)
#define CLASS_1_6BD41257D23618B4_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x19920990)
#define CLASS_1_6BD41257D23618B4_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19920470)
#define CLASS_1_6BD41257D23618B4_8__CTOR_OFFSET UNITYSDK_OFFSET(0x19920460)

inline static constexpr unsigned int Class_1_6BD41257D23618B4_8_TypeDefinitionIndex = 27943;

class Class_1_6BD41257D23618B4_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_6BD41257D23618B4_8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6BD41257D23618B4_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BD41257D23618B4_8_TypeDefinitionIndex)->GetStaticField(0x5B1F0);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18
	::System::Boolean Field_1_5; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6BD41257D23618B4_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6BD41257D23618B4_8*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6BD41257D23618B4_8*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6BD41257D23618B4_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6BD41257D23618B4_8* Clone()
	{
		return ((::Class_1_6BD41257D23618B4_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6BD41257D23618B4_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6BD41257D23618B4_8*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6BD41257D23618B4_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6BD41257D23618B4_8*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
