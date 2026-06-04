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

#define CLASS_1_075C34D03AFA1215_97_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AA6AEB0)
#define CLASS_1_075C34D03AFA1215_97_CLONE_OFFSET UNITYSDK_OFFSET(0x1AA6AB60)
#define CLASS_1_075C34D03AFA1215_97_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AA6AC40)
#define CLASS_1_075C34D03AFA1215_97_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA6ABA0)
#define CLASS_1_075C34D03AFA1215_97_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AA6ACD0)
#define CLASS_1_075C34D03AFA1215_97_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AA6AF70)
#define CLASS_1_075C34D03AFA1215_97_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AA6AF20)
#define CLASS_1_075C34D03AFA1215_97_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1AA6AB90)
#define CLASS_1_075C34D03AFA1215_97_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AA6AA40)
#define CLASS_1_075C34D03AFA1215_97_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA6AA70)
#define CLASS_1_075C34D03AFA1215_97_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AA6ADD0)
#define CLASS_1_075C34D03AFA1215_97_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AA6AE30)
#define CLASS_1_075C34D03AFA1215_97__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA6B110)
#define CLASS_1_075C34D03AFA1215_97__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA6AAD0)
#define CLASS_1_075C34D03AFA1215_97__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA6AA80)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_97_TypeDefinitionIndex = 31436;

class Class_1_075C34D03AFA1215_97 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_97_TypeDefinitionIndex)->GetStaticField(0x24140);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_97*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_97*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_97_TypeDefinitionIndex)->GetStaticField(0x24148);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_97* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_97*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_97*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_97*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_97* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_97*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_97* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_97*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_97* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_97*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_97_MERGEFROM_1_OFFSET))(this, a1);
	}
};
