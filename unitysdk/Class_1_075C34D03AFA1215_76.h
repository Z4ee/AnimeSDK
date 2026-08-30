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

#define CLASS_1_075C34D03AFA1215_76_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D88F700)
#define CLASS_1_075C34D03AFA1215_76_CLONE_OFFSET UNITYSDK_OFFSET(0x1D88F300)
#define CLASS_1_075C34D03AFA1215_76_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D88F430)
#define CLASS_1_075C34D03AFA1215_76_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D88F340)
#define CLASS_1_075C34D03AFA1215_76_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D88F520)
#define CLASS_1_075C34D03AFA1215_76_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D88F7C0)
#define CLASS_1_075C34D03AFA1215_76_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D88F770)
#define CLASS_1_075C34D03AFA1215_76_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1D88F330)
#define CLASS_1_075C34D03AFA1215_76_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D88F1E0)
#define CLASS_1_075C34D03AFA1215_76_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D88F210)
#define CLASS_1_075C34D03AFA1215_76_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D88F620)
#define CLASS_1_075C34D03AFA1215_76_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D88F680)
#define CLASS_1_075C34D03AFA1215_76__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D88F960)
#define CLASS_1_075C34D03AFA1215_76__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D88F270)
#define CLASS_1_075C34D03AFA1215_76__CTOR_OFFSET UNITYSDK_OFFSET(0x1D88F220)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_76_TypeDefinitionIndex = 30844;

class Class_1_075C34D03AFA1215_76 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_76*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_76*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_76_TypeDefinitionIndex)->GetStaticField(0x3FBD0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KOBKPJHOFJM()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_76_TypeDefinitionIndex)->GetStaticField(0x3FBD8);
	}
	// static const ::System::Int32 EKMLLJKGIDE = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OOHIHEEINHP; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_76* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_76*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_76*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_76*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_76* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_76*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_76* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_76*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_76* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_76*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_76_MERGEFROM_1_OFFSET))(this, a1);
	}
};
