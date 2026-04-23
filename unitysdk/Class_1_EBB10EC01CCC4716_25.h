#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EBB10EC01CCC4716_25_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19466510)
#define CLASS_1_EBB10EC01CCC4716_25_CLONE_OFFSET UNITYSDK_OFFSET(0x194660A0)
#define CLASS_1_EBB10EC01CCC4716_25_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19466280)
#define CLASS_1_EBB10EC01CCC4716_25_EQUALS_OFFSET UNITYSDK_OFFSET(0x194661E0)
#define CLASS_1_EBB10EC01CCC4716_25_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19466310)
#define CLASS_1_EBB10EC01CCC4716_25_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19466950)
#define CLASS_1_EBB10EC01CCC4716_25_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x194668E0)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19466140)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19466160)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x19466180)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x194661A0)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x194661C0)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19466100)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x19466130)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19466000)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19466150)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19466170)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x19466190)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x194661B0)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x194661D0)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19466110)
#define CLASS_1_EBB10EC01CCC4716_25_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x19466120)
#define CLASS_1_EBB10EC01CCC4716_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19466030)
#define CLASS_1_EBB10EC01CCC4716_25_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19466360)
#define CLASS_1_EBB10EC01CCC4716_25_WRITETO_OFFSET UNITYSDK_OFFSET(0x194663C0)
#define CLASS_1_EBB10EC01CCC4716_25__CCTOR_OFFSET UNITYSDK_OFFSET(0x19466A50)
#define CLASS_1_EBB10EC01CCC4716_25__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19466050)
#define CLASS_1_EBB10EC01CCC4716_25__CTOR_OFFSET UNITYSDK_OFFSET(0x19466040)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_25_TypeDefinitionIndex = 29303;

class Class_1_EBB10EC01CCC4716_25 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_25*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_25*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB10EC01CCC4716_25_TypeDefinitionIndex)->GetStaticField(0x17D50);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_14 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_9; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::UInt32 Field_1_13; // 0x20
	::System::UInt32 Field_1_7; // 0x24
	::System::UInt32 Field_1_15; // 0x28
	::System::UInt32 Field_1_11; // 0x2C
	::System::Int64 Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EBB10EC01CCC4716_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_25*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_25*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_25*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_25* Clone()
	{
		return ((::Class_1_EBB10EC01CCC4716_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EBB10EC01CCC4716_25* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_25*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EBB10EC01CCC4716_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_25*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_25_MERGEFROM_1_OFFSET))(this, a1);
	}
};
