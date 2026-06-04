#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E9AC8675DA072FB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E30585F0EAEFDF1E_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A8D9AB0)
#define CLASS_1_E30585F0EAEFDF1E_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1A8D9540)
#define CLASS_1_E30585F0EAEFDF1E_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A8D9720)
#define CLASS_1_E30585F0EAEFDF1E_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A8D9600)
#define CLASS_1_E30585F0EAEFDF1E_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A8D9800)
#define CLASS_1_E30585F0EAEFDF1E_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A8D9D20)
#define CLASS_1_E30585F0EAEFDF1E_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A8D9BF0)
#define CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A8D9590)
#define CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A8D95B0)
#define CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A8D93A0)
#define CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A8D95D0)
#define CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A8D95A0)
#define CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A8D95C0)
#define CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A8D95F0)
#define CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A8D95E0)
#define CLASS_1_E30585F0EAEFDF1E_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A8D9400)
#define CLASS_1_E30585F0EAEFDF1E_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A8D9920)
#define CLASS_1_E30585F0EAEFDF1E_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A8D9980)
#define CLASS_1_E30585F0EAEFDF1E_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8D9EA0)
#define CLASS_1_E30585F0EAEFDF1E_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A8D9460)
#define CLASS_1_E30585F0EAEFDF1E_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D9410)

inline static constexpr unsigned int Class_1_E30585F0EAEFDF1E_3_TypeDefinitionIndex = 26315;

class Class_1_E30585F0EAEFDF1E_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E30585F0EAEFDF1E_3_TypeDefinitionIndex)->GetStaticField(0x1A500);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_E30585F0EAEFDF1E_3*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E30585F0EAEFDF1E_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E30585F0EAEFDF1E_3_TypeDefinitionIndex)->GetStaticField(0x1A508);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	::Class_1_7E9AC8675DA072FB* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x28
	::System::Boolean Field_1_10; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E30585F0EAEFDF1E_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E30585F0EAEFDF1E_3*))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E30585F0EAEFDF1E_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E30585F0EAEFDF1E_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E30585F0EAEFDF1E_3* Clone()
	{
		return ((::Class_1_E30585F0EAEFDF1E_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_7E9AC8675DA072FB* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7E9AC8675DA072FB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7E9AC8675DA072FB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E9AC8675DA072FB*))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E30585F0EAEFDF1E_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E30585F0EAEFDF1E_3*))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E30585F0EAEFDF1E_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E30585F0EAEFDF1E_3*))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
