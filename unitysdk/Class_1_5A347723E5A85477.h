#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C74059A83466814F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5A347723E5A85477_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A431D60)
#define CLASS_1_5A347723E5A85477_CLONE_OFFSET UNITYSDK_OFFSET(0x1A4318E0)
#define CLASS_1_5A347723E5A85477_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A431B20)
#define CLASS_1_5A347723E5A85477_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A431A20)
#define CLASS_1_5A347723E5A85477_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A431BE0)
#define CLASS_1_5A347723E5A85477_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A431F70)
#define CLASS_1_5A347723E5A85477_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A431EC0)
#define CLASS_1_5A347723E5A85477_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A4319E0)
#define CLASS_1_5A347723E5A85477_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A4319C0)
#define CLASS_1_5A347723E5A85477_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A4319A0)
#define CLASS_1_5A347723E5A85477_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A4317E0)
#define CLASS_1_5A347723E5A85477_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A4319F0)
#define CLASS_1_5A347723E5A85477_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A4319D0)
#define CLASS_1_5A347723E5A85477_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A4319B0)
#define CLASS_1_5A347723E5A85477_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A431A10)
#define CLASS_1_5A347723E5A85477_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A431A00)
#define CLASS_1_5A347723E5A85477_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A431840)
#define CLASS_1_5A347723E5A85477_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A431C30)
#define CLASS_1_5A347723E5A85477_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A431C90)
#define CLASS_1_5A347723E5A85477__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A432060)
#define CLASS_1_5A347723E5A85477__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A431860)
#define CLASS_1_5A347723E5A85477__CTOR_OFFSET UNITYSDK_OFFSET(0x1A431850)

inline static constexpr unsigned int Class_1_5A347723E5A85477_TypeDefinitionIndex = 26256;

class Class_1_5A347723E5A85477 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5A347723E5A85477*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5A347723E5A85477*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A347723E5A85477_TypeDefinitionIndex)->GetStaticField(0x11C40);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	::Class_1_C74059A83466814F* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::System::Boolean Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x24
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5A347723E5A85477* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A347723E5A85477*))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5A347723E5A85477*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5A347723E5A85477*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5A347723E5A85477* Clone()
	{
		return ((::Class_1_5A347723E5A85477*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_CLONE_OFFSET))(this);
	}

	::Class_1_C74059A83466814F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C74059A83466814F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C74059A83466814F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5A347723E5A85477* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5A347723E5A85477*))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5A347723E5A85477* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A347723E5A85477*))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5A347723E5A85477_MERGEFROM_1_OFFSET))(this, a1);
	}
};
