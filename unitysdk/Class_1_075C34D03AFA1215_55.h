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

#define CLASS_1_075C34D03AFA1215_55_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE32230)
#define CLASS_1_075C34D03AFA1215_55_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE31DB0)
#define CLASS_1_075C34D03AFA1215_55_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE31F30)
#define CLASS_1_075C34D03AFA1215_55_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE31E10)
#define CLASS_1_075C34D03AFA1215_55_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE32020)
#define CLASS_1_075C34D03AFA1215_55_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE32320)
#define CLASS_1_075C34D03AFA1215_55_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE322D0)
#define CLASS_1_075C34D03AFA1215_55_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DE31C60)
#define CLASS_1_075C34D03AFA1215_55_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DE31E00)
#define CLASS_1_075C34D03AFA1215_55_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE31CC0)
#define CLASS_1_075C34D03AFA1215_55_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE32120)
#define CLASS_1_075C34D03AFA1215_55_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE32180)
#define CLASS_1_075C34D03AFA1215_55__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE324F0)
#define CLASS_1_075C34D03AFA1215_55__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE31D20)
#define CLASS_1_075C34D03AFA1215_55__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE31CD0)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_55_TypeDefinitionIndex = 29405;

class Class_1_075C34D03AFA1215_55 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_55*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_55*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_55_TypeDefinitionIndex)->GetStaticField(0x2B2D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MHJOEECKGOD()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_55_TypeDefinitionIndex)->GetStaticField(0x2B2D8);
	}
	// static const ::System::Int32 KMHKGBKJCDE = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EMHKECJGIMN; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_55*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_55*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_55*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_55* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_55*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_55* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_55*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_55*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_55_MERGEFROM_1_OFFSET))(this, a1);
	}
};
