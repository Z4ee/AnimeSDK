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

#define CLASS_1_075C34D03AFA1215_24_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E488F50)
#define CLASS_1_075C34D03AFA1215_24_CLONE_OFFSET UNITYSDK_OFFSET(0x1E488AD0)
#define CLASS_1_075C34D03AFA1215_24_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E488C50)
#define CLASS_1_075C34D03AFA1215_24_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E488B30)
#define CLASS_1_075C34D03AFA1215_24_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E488D40)
#define CLASS_1_075C34D03AFA1215_24_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E489040)
#define CLASS_1_075C34D03AFA1215_24_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E488FF0)
#define CLASS_1_075C34D03AFA1215_24_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E488980)
#define CLASS_1_075C34D03AFA1215_24_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E488B20)
#define CLASS_1_075C34D03AFA1215_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4889E0)
#define CLASS_1_075C34D03AFA1215_24_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E488E40)
#define CLASS_1_075C34D03AFA1215_24_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E488EA0)
#define CLASS_1_075C34D03AFA1215_24__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E489210)
#define CLASS_1_075C34D03AFA1215_24__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E488A40)
#define CLASS_1_075C34D03AFA1215_24__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4889F0)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_24_TypeDefinitionIndex = 26998;

class Class_1_075C34D03AFA1215_24 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_24*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_24*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_24_TypeDefinitionIndex)->GetStaticField(0x14520);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BAKOLFINKIN()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_24_TypeDefinitionIndex)->GetStaticField(0x14528);
	}
	// static const ::System::Int32 APCIMHDNEJF = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KEIFLLJDAOH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_24*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_24*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_24*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_24* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_24*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_24*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_24_MERGEFROM_1_OFFSET))(this, a1);
	}
};
