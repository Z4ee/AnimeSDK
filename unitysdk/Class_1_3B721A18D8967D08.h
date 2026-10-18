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

#define CLASS_1_3B721A18D8967D08_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA165A0)
#define CLASS_1_3B721A18D8967D08_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA15F40)
#define CLASS_1_3B721A18D8967D08_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA160E0)
#define CLASS_1_3B721A18D8967D08_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA16040)
#define CLASS_1_3B721A18D8967D08_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA16190)
#define CLASS_1_3B721A18D8967D08_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA168F0)
#define CLASS_1_3B721A18D8967D08_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA16870)
#define CLASS_1_3B721A18D8967D08_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EA15F90)
#define CLASS_1_3B721A18D8967D08_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1EA15FF0)
#define CLASS_1_3B721A18D8967D08_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1EA15FE0)
#define CLASS_1_3B721A18D8967D08_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x1EA15FD0)
#define CLASS_1_3B721A18D8967D08_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1EA15F80)
#define CLASS_1_3B721A18D8967D08_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1EA15FB0)
#define CLASS_1_3B721A18D8967D08_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EA15DF0)
#define CLASS_1_3B721A18D8967D08_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EA15FA0)
#define CLASS_1_3B721A18D8967D08_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x1EA15FC0)
#define CLASS_1_3B721A18D8967D08_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1EA15F70)
#define CLASS_1_3B721A18D8967D08_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA15E20)
#define CLASS_1_3B721A18D8967D08_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA16340)
#define CLASS_1_3B721A18D8967D08_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA163A0)
#define CLASS_1_3B721A18D8967D08__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA16A30)
#define CLASS_1_3B721A18D8967D08__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA15E90)
#define CLASS_1_3B721A18D8967D08__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA15E30)

inline static constexpr unsigned int Class_1_3B721A18D8967D08_TypeDefinitionIndex = 26604;

class Class_1_3B721A18D8967D08 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_3B721A18D8967D08*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3B721A18D8967D08*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B721A18D8967D08_TypeDefinitionIndex)->GetStaticField(0x36E70);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LEONFGNGLLB()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B721A18D8967D08_TypeDefinitionIndex)->GetStaticField(0x36E78);
	}
	// static const ::System::Int32 FIEMKPOELCD = 0x7; // 0x0
	// static const ::System::Int32 HLGEDBNIHII = 0x1; // 0x0
	// static const ::System::Int32 AJOBLGKNBDC = 0x3; // 0x0
	// static const ::System::Int32 INPMBLCHNGN = 0xE; // 0x0
	// static const ::System::Int32 OCLMCCBNGOD = 0xB; // 0x0
	::System::String* LEPNCGJLGIP; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MNFKHFLIAMB; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
	::System::Int64 GFNEFHEHFOC; // 0x28
	::System::Int64 MFHNPAODGGN; // 0x30
	::System::UInt32 AENFHPAGFOI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3B721A18D8967D08* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B721A18D8967D08*))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3B721A18D8967D08*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3B721A18D8967D08*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3B721A18D8967D08* Clone()
	{
		return ((::Class_1_3B721A18D8967D08*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3B721A18D8967D08* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3B721A18D8967D08*))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3B721A18D8967D08* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B721A18D8967D08*))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3B721A18D8967D08_MERGEFROM_1_OFFSET))(this, a1);
	}
};
