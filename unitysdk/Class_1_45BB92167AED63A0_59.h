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

#define CLASS_1_45BB92167AED63A0_59_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DA761D0)
#define CLASS_1_45BB92167AED63A0_59_CLONE_OFFSET UNITYSDK_OFFSET(0x1DA75D40)
#define CLASS_1_45BB92167AED63A0_59_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DA75EA0)
#define CLASS_1_45BB92167AED63A0_59_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DA75DA0)
#define CLASS_1_45BB92167AED63A0_59_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DA75F90)
#define CLASS_1_45BB92167AED63A0_59_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DA76300)
#define CLASS_1_45BB92167AED63A0_59_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DA762B0)
#define CLASS_1_45BB92167AED63A0_59_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DA75D70)
#define CLASS_1_45BB92167AED63A0_59_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DA75D90)
#define CLASS_1_45BB92167AED63A0_59_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DA75C20)
#define CLASS_1_45BB92167AED63A0_59_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DA75D80)
#define CLASS_1_45BB92167AED63A0_59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DA75C50)
#define CLASS_1_45BB92167AED63A0_59_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DA76090)
#define CLASS_1_45BB92167AED63A0_59_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DA760F0)
#define CLASS_1_45BB92167AED63A0_59__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA764B0)
#define CLASS_1_45BB92167AED63A0_59__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DA75CB0)
#define CLASS_1_45BB92167AED63A0_59__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA75C60)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_59_TypeDefinitionIndex = 30035;

class Class_1_45BB92167AED63A0_59 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FDPOEFGBOOA()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_59_TypeDefinitionIndex)->GetStaticField(0x3E520);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_59*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_59*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_59_TypeDefinitionIndex)->GetStaticField(0x3E528);
	}
	// static const ::System::Int32 PLDKENJLKME = 0xC; // 0x0
	// static const ::System::Int32 IMMIFHODMFM = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ENMDCGPDKGL; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_59*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_59*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_59*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_59* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_59*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_59* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_59*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_59*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_59_MERGEFROM_1_OFFSET))(this, a1);
	}
};
