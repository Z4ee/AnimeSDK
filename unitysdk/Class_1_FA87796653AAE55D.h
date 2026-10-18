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

#define CLASS_1_FA87796653AAE55D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E37CE60)
#define CLASS_1_FA87796653AAE55D_CLONE_OFFSET UNITYSDK_OFFSET(0x1E37CA20)
#define CLASS_1_FA87796653AAE55D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E37CB50)
#define CLASS_1_FA87796653AAE55D_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E37CA60)
#define CLASS_1_FA87796653AAE55D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E37CC40)
#define CLASS_1_FA87796653AAE55D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E37CF20)
#define CLASS_1_FA87796653AAE55D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E37CED0)
#define CLASS_1_FA87796653AAE55D_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E37C900)
#define CLASS_1_FA87796653AAE55D_METHOD_1_9910C76C967AA69B_OFFSET UNITYSDK_OFFSET(0x1E37CA50)
#define CLASS_1_FA87796653AAE55D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E37C930)
#define CLASS_1_FA87796653AAE55D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E37CD80)
#define CLASS_1_FA87796653AAE55D_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E37CDE0)
#define CLASS_1_FA87796653AAE55D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37D0C0)
#define CLASS_1_FA87796653AAE55D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E37C990)
#define CLASS_1_FA87796653AAE55D__CTOR_OFFSET UNITYSDK_OFFSET(0x1E37C940)

inline static constexpr unsigned int Class_1_FA87796653AAE55D_TypeDefinitionIndex = 31535;

class Class_1_FA87796653AAE55D : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FA87796653AAE55D*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FA87796653AAE55D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA87796653AAE55D_TypeDefinitionIndex)->GetStaticField(0x5E470);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt64>** StaticGet_FONDDDOIJHI()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA87796653AAE55D_TypeDefinitionIndex)->GetStaticField(0x5E478);
	}
	// static const ::System::Int32 BBFNEKKAAKJ = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* PPCENIMDIMG; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA87796653AAE55D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA87796653AAE55D*))((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FA87796653AAE55D*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FA87796653AAE55D*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA87796653AAE55D* Clone()
	{
		return ((::Class_1_FA87796653AAE55D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* Method_1_9910C76C967AA69B()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D_METHOD_1_9910C76C967AA69B_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA87796653AAE55D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA87796653AAE55D*))((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA87796653AAE55D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA87796653AAE55D*))((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA87796653AAE55D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
