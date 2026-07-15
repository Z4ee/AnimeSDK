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

#define CLASS_1_7F6A638FBAAEC90B_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C502400)
#define CLASS_1_7F6A638FBAAEC90B_12_CLONE_OFFSET UNITYSDK_OFFSET(0x1C501E70)
#define CLASS_1_7F6A638FBAAEC90B_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C501F30)
#define CLASS_1_7F6A638FBAAEC90B_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C501F00)
#define CLASS_1_7F6A638FBAAEC90B_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C502050)
#define CLASS_1_7F6A638FBAAEC90B_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C502630)
#define CLASS_1_7F6A638FBAAEC90B_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C5025C0)
#define CLASS_1_7F6A638FBAAEC90B_12_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C501EE0)
#define CLASS_1_7F6A638FBAAEC90B_12_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C501EB0)
#define CLASS_1_7F6A638FBAAEC90B_12_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1C501ED0)
#define CLASS_1_7F6A638FBAAEC90B_12_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C501EA0)
#define CLASS_1_7F6A638FBAAEC90B_12_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C501CB0)
#define CLASS_1_7F6A638FBAAEC90B_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C501EF0)
#define CLASS_1_7F6A638FBAAEC90B_12_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C501EC0)
#define CLASS_1_7F6A638FBAAEC90B_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C501CE0)
#define CLASS_1_7F6A638FBAAEC90B_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C502220)
#define CLASS_1_7F6A638FBAAEC90B_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C502280)
#define CLASS_1_7F6A638FBAAEC90B_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C502760)
#define CLASS_1_7F6A638FBAAEC90B_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C501D80)
#define CLASS_1_7F6A638FBAAEC90B_12__CTOR_OFFSET UNITYSDK_OFFSET(0x1C501CF0)

inline static constexpr unsigned int Class_1_7F6A638FBAAEC90B_12_TypeDefinitionIndex = 27849;

class Class_1_7F6A638FBAAEC90B_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B_12*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F6A638FBAAEC90B_12_TypeDefinitionIndex)->GetStaticField(0x5500);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F6A638FBAAEC90B_12_TypeDefinitionIndex)->GetStaticField(0x5508);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F6A638FBAAEC90B_12_TypeDefinitionIndex)->GetStaticField(0x5510);
	}
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7F6A638FBAAEC90B_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_12*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B_12*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B_12*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7F6A638FBAAEC90B_12* Clone()
	{
		return ((::Class_1_7F6A638FBAAEC90B_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7F6A638FBAAEC90B_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_12*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7F6A638FBAAEC90B_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_12*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
