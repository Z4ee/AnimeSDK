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

#define CLASS_1_075C34D03AFA1215_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2980E0)
#define CLASS_1_075C34D03AFA1215_21_CLONE_OFFSET UNITYSDK_OFFSET(0x1E297CE0)
#define CLASS_1_075C34D03AFA1215_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E297E10)
#define CLASS_1_075C34D03AFA1215_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E297D20)
#define CLASS_1_075C34D03AFA1215_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E297F00)
#define CLASS_1_075C34D03AFA1215_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2981A0)
#define CLASS_1_075C34D03AFA1215_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E298150)
#define CLASS_1_075C34D03AFA1215_21_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E297D10)
#define CLASS_1_075C34D03AFA1215_21_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E297BC0)
#define CLASS_1_075C34D03AFA1215_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E297BF0)
#define CLASS_1_075C34D03AFA1215_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E298000)
#define CLASS_1_075C34D03AFA1215_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E298060)
#define CLASS_1_075C34D03AFA1215_21__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E298340)
#define CLASS_1_075C34D03AFA1215_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E297C50)
#define CLASS_1_075C34D03AFA1215_21__CTOR_OFFSET UNITYSDK_OFFSET(0x1E297C00)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_21_TypeDefinitionIndex = 26817;

class Class_1_075C34D03AFA1215_21 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LIFAFKEPHIB()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_21_TypeDefinitionIndex)->GetStaticField(0x54D00);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_21*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_21_TypeDefinitionIndex)->GetStaticField(0x54D08);
	}
	// static const ::System::Int32 PBEGNMKHBOA = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBCCLPMCMKP; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_21*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_21*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_21*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_21* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_21*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_21*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
