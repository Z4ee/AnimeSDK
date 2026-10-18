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

#define CLASS_1_075C34D03AFA1215_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E954440)
#define CLASS_1_075C34D03AFA1215_23_CLONE_OFFSET UNITYSDK_OFFSET(0x1E954040)
#define CLASS_1_075C34D03AFA1215_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E954170)
#define CLASS_1_075C34D03AFA1215_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E954080)
#define CLASS_1_075C34D03AFA1215_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E954260)
#define CLASS_1_075C34D03AFA1215_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E954500)
#define CLASS_1_075C34D03AFA1215_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9544B0)
#define CLASS_1_075C34D03AFA1215_23_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E954070)
#define CLASS_1_075C34D03AFA1215_23_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E953F20)
#define CLASS_1_075C34D03AFA1215_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E953F50)
#define CLASS_1_075C34D03AFA1215_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E954360)
#define CLASS_1_075C34D03AFA1215_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9543C0)
#define CLASS_1_075C34D03AFA1215_23__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9546A0)
#define CLASS_1_075C34D03AFA1215_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E953FB0)
#define CLASS_1_075C34D03AFA1215_23__CTOR_OFFSET UNITYSDK_OFFSET(0x1E953F60)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_23_TypeDefinitionIndex = 27401;

class Class_1_075C34D03AFA1215_23 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_ACHHIPPPEEI()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_23_TypeDefinitionIndex)->GetStaticField(0x3F390);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_23*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_23*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_23_TypeDefinitionIndex)->GetStaticField(0x3F398);
	}
	// static const ::System::Int32 LGEBDNALEIL = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EFJNLBJKJKE; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_23*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_23*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_23*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_23* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_23*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_23*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
