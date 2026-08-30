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

#define CLASS_1_075C34D03AFA1215_62_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E000A10)
#define CLASS_1_075C34D03AFA1215_62_CLONE_OFFSET UNITYSDK_OFFSET(0x1E000610)
#define CLASS_1_075C34D03AFA1215_62_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E000740)
#define CLASS_1_075C34D03AFA1215_62_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E000650)
#define CLASS_1_075C34D03AFA1215_62_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E000830)
#define CLASS_1_075C34D03AFA1215_62_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E000AD0)
#define CLASS_1_075C34D03AFA1215_62_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E000A80)
#define CLASS_1_075C34D03AFA1215_62_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E000640)
#define CLASS_1_075C34D03AFA1215_62_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E0004F0)
#define CLASS_1_075C34D03AFA1215_62_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E000520)
#define CLASS_1_075C34D03AFA1215_62_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E000930)
#define CLASS_1_075C34D03AFA1215_62_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E000990)
#define CLASS_1_075C34D03AFA1215_62__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E000C70)
#define CLASS_1_075C34D03AFA1215_62__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E000580)
#define CLASS_1_075C34D03AFA1215_62__CTOR_OFFSET UNITYSDK_OFFSET(0x1E000530)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_62_TypeDefinitionIndex = 30033;

class Class_1_075C34D03AFA1215_62 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FDPOEFGBOOA()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_62_TypeDefinitionIndex)->GetStaticField(0x5E540);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_62*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_62*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_62_TypeDefinitionIndex)->GetStaticField(0x5E548);
	}
	// static const ::System::Int32 IMMIFHODMFM = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ENMDCGPDKGL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_62* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_62*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_62*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_62*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_62* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_62*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_62* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_62*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_62* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_62*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_62_MERGEFROM_1_OFFSET))(this, a1);
	}
};
