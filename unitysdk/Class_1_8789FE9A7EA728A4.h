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
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_8789FE9A7EA728A4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFCD300)
#define CLASS_1_8789FE9A7EA728A4_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFCCCB0)
#define CLASS_1_8789FE9A7EA728A4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFCCE60)
#define CLASS_1_8789FE9A7EA728A4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFCCD30)
#define CLASS_1_8789FE9A7EA728A4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFCD010)
#define CLASS_1_8789FE9A7EA728A4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFCD4D0)
#define CLASS_1_8789FE9A7EA728A4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFCD420)
#define CLASS_1_8789FE9A7EA728A4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DFCCD10)
#define CLASS_1_8789FE9A7EA728A4_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DFCCCE0)
#define CLASS_1_8789FE9A7EA728A4_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DFCCB60)
#define CLASS_1_8789FE9A7EA728A4_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1DFCCD00)
#define CLASS_1_8789FE9A7EA728A4_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1DFCCCF0)
#define CLASS_1_8789FE9A7EA728A4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DFCCD20)
#define CLASS_1_8789FE9A7EA728A4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFCCB90)
#define CLASS_1_8789FE9A7EA728A4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFCD170)
#define CLASS_1_8789FE9A7EA728A4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFCD1D0)
#define CLASS_1_8789FE9A7EA728A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFCD600)
#define CLASS_1_8789FE9A7EA728A4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFCCBF0)
#define CLASS_1_8789FE9A7EA728A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCCBA0)

inline static constexpr unsigned int Class_1_8789FE9A7EA728A4_TypeDefinitionIndex = 27371;

class Class_1_8789FE9A7EA728A4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_8789FE9A7EA728A4*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8789FE9A7EA728A4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8789FE9A7EA728A4_TypeDefinitionIndex)->GetStaticField(0x568E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_APNOCHBAAEF()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8789FE9A7EA728A4_TypeDefinitionIndex)->GetStaticField(0x568E8);
	}
	// static const ::System::Int32 CIBDNMCBMLC = 0x3; // 0x0
	// static const ::System::Int32 EBMIJAAKMMH = 0xD; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Proto::ItemList* JDAFJANAEBG; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CCDAAEAOHJJ; // 0x20
	::System::UInt32 NAEACGPKNNH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8789FE9A7EA728A4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8789FE9A7EA728A4*))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8789FE9A7EA728A4*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8789FE9A7EA728A4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8789FE9A7EA728A4* Clone()
	{
		return ((::Class_1_8789FE9A7EA728A4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8789FE9A7EA728A4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8789FE9A7EA728A4*))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8789FE9A7EA728A4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8789FE9A7EA728A4*))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8789FE9A7EA728A4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
