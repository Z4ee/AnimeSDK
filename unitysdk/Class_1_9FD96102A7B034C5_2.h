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

#define CLASS_1_9FD96102A7B034C5_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E496780)
#define CLASS_1_9FD96102A7B034C5_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4962C0)
#define CLASS_1_9FD96102A7B034C5_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E496470)
#define CLASS_1_9FD96102A7B034C5_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E496320)
#define CLASS_1_9FD96102A7B034C5_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4965A0)
#define CLASS_1_9FD96102A7B034C5_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E496930)
#define CLASS_1_9FD96102A7B034C5_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E496890)
#define CLASS_1_9FD96102A7B034C5_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E4962F0)
#define CLASS_1_9FD96102A7B034C5_2_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x1E496310)
#define CLASS_1_9FD96102A7B034C5_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E4961B0)
#define CLASS_1_9FD96102A7B034C5_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E496300)
#define CLASS_1_9FD96102A7B034C5_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4961E0)
#define CLASS_1_9FD96102A7B034C5_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E496610)
#define CLASS_1_9FD96102A7B034C5_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E496670)
#define CLASS_1_9FD96102A7B034C5_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E496AF0)
#define CLASS_1_9FD96102A7B034C5_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E496230)
#define CLASS_1_9FD96102A7B034C5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4961F0)

inline static constexpr unsigned int Class_1_9FD96102A7B034C5_2_TypeDefinitionIndex = 30134;

class Class_1_9FD96102A7B034C5_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9FD96102A7B034C5_2*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9FD96102A7B034C5_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9FD96102A7B034C5_2_TypeDefinitionIndex)->GetStaticField(0x19260);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_EDEMPAMDAFD()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9FD96102A7B034C5_2_TypeDefinitionIndex)->GetStaticField(0x19268);
	}
	// static const ::System::Int32 PLDKENJLKME = 0xC; // 0x0
	// static const ::System::Int32 DFABHHAPAEA = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* MIEINLKPIMJ; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9FD96102A7B034C5_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9FD96102A7B034C5_2*))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9FD96102A7B034C5_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9FD96102A7B034C5_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9FD96102A7B034C5_2* Clone()
	{
		return ((::Class_1_9FD96102A7B034C5_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9FD96102A7B034C5_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9FD96102A7B034C5_2*))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9FD96102A7B034C5_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9FD96102A7B034C5_2*))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9FD96102A7B034C5_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
