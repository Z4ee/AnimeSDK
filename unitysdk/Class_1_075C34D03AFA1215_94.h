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

#define CLASS_1_075C34D03AFA1215_94_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC9E790)
#define CLASS_1_075C34D03AFA1215_94_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC9E310)
#define CLASS_1_075C34D03AFA1215_94_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC9E490)
#define CLASS_1_075C34D03AFA1215_94_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC9E370)
#define CLASS_1_075C34D03AFA1215_94_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC9E580)
#define CLASS_1_075C34D03AFA1215_94_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC9E880)
#define CLASS_1_075C34D03AFA1215_94_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC9E830)
#define CLASS_1_075C34D03AFA1215_94_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CC9E1C0)
#define CLASS_1_075C34D03AFA1215_94_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CC9E360)
#define CLASS_1_075C34D03AFA1215_94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC9E220)
#define CLASS_1_075C34D03AFA1215_94_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC9E680)
#define CLASS_1_075C34D03AFA1215_94_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC9E6E0)
#define CLASS_1_075C34D03AFA1215_94__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC9EA50)
#define CLASS_1_075C34D03AFA1215_94__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC9E280)
#define CLASS_1_075C34D03AFA1215_94__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC9E230)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_94_TypeDefinitionIndex = 31949;

class Class_1_075C34D03AFA1215_94 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_94*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_94*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_94_TypeDefinitionIndex)->GetStaticField(0x5E8E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_94_TypeDefinitionIndex)->GetStaticField(0x5E8E8);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_94*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_94*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_94*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_94* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_94* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_94*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_94*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_MERGEFROM_1_OFFSET))(this, a1);
	}
};
