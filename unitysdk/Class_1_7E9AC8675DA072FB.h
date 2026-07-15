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

#define CLASS_1_7E9AC8675DA072FB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CFC79F0)
#define CLASS_1_7E9AC8675DA072FB_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFC74C0)
#define CLASS_1_7E9AC8675DA072FB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CFC7610)
#define CLASS_1_7E9AC8675DA072FB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CFC7580)
#define CLASS_1_7E9AC8675DA072FB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CFC7690)
#define CLASS_1_7E9AC8675DA072FB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CFC7CC0)
#define CLASS_1_7E9AC8675DA072FB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CFC7C50)
#define CLASS_1_7E9AC8675DA072FB_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CFC7510)
#define CLASS_1_7E9AC8675DA072FB_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1CFC7530)
#define CLASS_1_7E9AC8675DA072FB_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1CFC7560)
#define CLASS_1_7E9AC8675DA072FB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CFC74F0)
#define CLASS_1_7E9AC8675DA072FB_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CFC7550)
#define CLASS_1_7E9AC8675DA072FB_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CFC7390)
#define CLASS_1_7E9AC8675DA072FB_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CFC7520)
#define CLASS_1_7E9AC8675DA072FB_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1CFC7540)
#define CLASS_1_7E9AC8675DA072FB_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1CFC7570)
#define CLASS_1_7E9AC8675DA072FB_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CFC7500)
#define CLASS_1_7E9AC8675DA072FB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CFC73C0)
#define CLASS_1_7E9AC8675DA072FB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CFC77B0)
#define CLASS_1_7E9AC8675DA072FB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CFC7810)
#define CLASS_1_7E9AC8675DA072FB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFC7DD0)
#define CLASS_1_7E9AC8675DA072FB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CFC7420)
#define CLASS_1_7E9AC8675DA072FB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC73D0)

inline static constexpr unsigned int Class_1_7E9AC8675DA072FB_TypeDefinitionIndex = 26754;

class Class_1_7E9AC8675DA072FB : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E9AC8675DA072FB_TypeDefinitionIndex)->GetStaticField(0x486D0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_7E9AC8675DA072FB*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7E9AC8675DA072FB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E9AC8675DA072FB_TypeDefinitionIndex)->GetStaticField(0x486D8);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x24
	::System::UInt32 Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7E9AC8675DA072FB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E9AC8675DA072FB*))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7E9AC8675DA072FB*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7E9AC8675DA072FB*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7E9AC8675DA072FB* Clone()
	{
		return ((::Class_1_7E9AC8675DA072FB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7E9AC8675DA072FB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7E9AC8675DA072FB*))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7E9AC8675DA072FB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E9AC8675DA072FB*))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB_MERGEFROM_1_OFFSET))(this, a1);
	}
};
