#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_76E9E7372239DF6D_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C6427D0)
#define CLASS_1_76E9E7372239DF6D_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1C642200)
#define CLASS_1_76E9E7372239DF6D_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C6423B0)
#define CLASS_1_76E9E7372239DF6D_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C642320)
#define CLASS_1_76E9E7372239DF6D_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C6424D0)
#define CLASS_1_76E9E7372239DF6D_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C642990)
#define CLASS_1_76E9E7372239DF6D_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C642930)
#define CLASS_1_76E9E7372239DF6D_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C642300)
#define CLASS_1_76E9E7372239DF6D_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C642260)
#define CLASS_1_76E9E7372239DF6D_1_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1C642290)
#define CLASS_1_76E9E7372239DF6D_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1C642280)
#define CLASS_1_76E9E7372239DF6D_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C642160)
#define CLASS_1_76E9E7372239DF6D_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C642310)
#define CLASS_1_76E9E7372239DF6D_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C642270)
#define CLASS_1_76E9E7372239DF6D_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C6422F0)
#define CLASS_1_76E9E7372239DF6D_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C6422E0)
#define CLASS_1_76E9E7372239DF6D_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C642190)
#define CLASS_1_76E9E7372239DF6D_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C642590)
#define CLASS_1_76E9E7372239DF6D_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C6425F0)
#define CLASS_1_76E9E7372239DF6D_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C642A70)
#define CLASS_1_76E9E7372239DF6D_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6421B0)
#define CLASS_1_76E9E7372239DF6D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6421A0)

inline static constexpr unsigned int Class_1_76E9E7372239DF6D_1_TypeDefinitionIndex = 32728;

class Class_1_76E9E7372239DF6D_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_76E9E7372239DF6D_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_76E9E7372239DF6D_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76E9E7372239DF6D_1_TypeDefinitionIndex)->GetStaticField(0x5A610);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	::System::String* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::System::Boolean Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x24
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_76E9E7372239DF6D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_76E9E7372239DF6D_1*))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_76E9E7372239DF6D_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_76E9E7372239DF6D_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_76E9E7372239DF6D_1* Clone()
	{
		return ((::Class_1_76E9E7372239DF6D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_76E9E7372239DF6D_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_76E9E7372239DF6D_1*))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_76E9E7372239DF6D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_76E9E7372239DF6D_1*))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_76E9E7372239DF6D_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
