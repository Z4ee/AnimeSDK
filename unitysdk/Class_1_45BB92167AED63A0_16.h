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

#define CLASS_1_45BB92167AED63A0_16_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF42600)
#define CLASS_1_45BB92167AED63A0_16_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF42170)
#define CLASS_1_45BB92167AED63A0_16_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF422D0)
#define CLASS_1_45BB92167AED63A0_16_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF421D0)
#define CLASS_1_45BB92167AED63A0_16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF423C0)
#define CLASS_1_45BB92167AED63A0_16_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF42740)
#define CLASS_1_45BB92167AED63A0_16_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF426F0)
#define CLASS_1_45BB92167AED63A0_16_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DF421B0)
#define CLASS_1_45BB92167AED63A0_16_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DF421A0)
#define CLASS_1_45BB92167AED63A0_16_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DF42050)
#define CLASS_1_45BB92167AED63A0_16_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DF421C0)
#define CLASS_1_45BB92167AED63A0_16_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF42080)
#define CLASS_1_45BB92167AED63A0_16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF424C0)
#define CLASS_1_45BB92167AED63A0_16_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF42520)
#define CLASS_1_45BB92167AED63A0_16__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF42900)
#define CLASS_1_45BB92167AED63A0_16__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF420E0)
#define CLASS_1_45BB92167AED63A0_16__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF42090)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_16_TypeDefinitionIndex = 26902;

class Class_1_45BB92167AED63A0_16 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MIJDCFMPOMH()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_16_TypeDefinitionIndex)->GetStaticField(0x35980);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_16*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_16_TypeDefinitionIndex)->GetStaticField(0x35988);
	}
	// static const ::System::Int32 BCODOEKBJIJ = 0x7; // 0x0
	// static const ::System::Int32 GADBEOGJMCH = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FNBDKCIPGMA; // 0x18
	::System::UInt32 GIJAABDJGDA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_16*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_16*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_16*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_16* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_16* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_16*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_16*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_16_MERGEFROM_1_OFFSET))(this, a1);
	}
};
