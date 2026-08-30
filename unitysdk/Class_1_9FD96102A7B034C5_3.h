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
namespace Proto { class PileItem; }
namespace System { class String; }

#define CLASS_1_9FD96102A7B034C5_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6968F0)
#define CLASS_1_9FD96102A7B034C5_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1E696440)
#define CLASS_1_9FD96102A7B034C5_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6965F0)
#define CLASS_1_9FD96102A7B034C5_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6964A0)
#define CLASS_1_9FD96102A7B034C5_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E696710)
#define CLASS_1_9FD96102A7B034C5_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E696AC0)
#define CLASS_1_9FD96102A7B034C5_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E696A20)
#define CLASS_1_9FD96102A7B034C5_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E696480)
#define CLASS_1_9FD96102A7B034C5_3_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x1E696470)
#define CLASS_1_9FD96102A7B034C5_3_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E696330)
#define CLASS_1_9FD96102A7B034C5_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E696490)
#define CLASS_1_9FD96102A7B034C5_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E696360)
#define CLASS_1_9FD96102A7B034C5_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E696780)
#define CLASS_1_9FD96102A7B034C5_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6967E0)
#define CLASS_1_9FD96102A7B034C5_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E696C80)
#define CLASS_1_9FD96102A7B034C5_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6963B0)
#define CLASS_1_9FD96102A7B034C5_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1E696370)

inline static constexpr unsigned int Class_1_9FD96102A7B034C5_3_TypeDefinitionIndex = 29621;

class Class_1_9FD96102A7B034C5_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9FD96102A7B034C5_3*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9FD96102A7B034C5_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9FD96102A7B034C5_3_TypeDefinitionIndex)->GetStaticField(0x21990);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_EDEMPAMDAFD()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9FD96102A7B034C5_3_TypeDefinitionIndex)->GetStaticField(0x21998);
	}
	// static const ::System::Int32 DFABHHAPAEA = 0xB; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* MIEINLKPIMJ; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9FD96102A7B034C5_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9FD96102A7B034C5_3*))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9FD96102A7B034C5_3*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9FD96102A7B034C5_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9FD96102A7B034C5_3* Clone()
	{
		return ((::Class_1_9FD96102A7B034C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9FD96102A7B034C5_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9FD96102A7B034C5_3*))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9FD96102A7B034C5_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9FD96102A7B034C5_3*))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
