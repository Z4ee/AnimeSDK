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

#define CLASS_1_075C34D03AFA1215_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5DD890)
#define CLASS_1_075C34D03AFA1215_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5DD410)
#define CLASS_1_075C34D03AFA1215_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5DD590)
#define CLASS_1_075C34D03AFA1215_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5DD470)
#define CLASS_1_075C34D03AFA1215_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5DD680)
#define CLASS_1_075C34D03AFA1215_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5DD980)
#define CLASS_1_075C34D03AFA1215_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5DD930)
#define CLASS_1_075C34D03AFA1215_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E5DD2C0)
#define CLASS_1_075C34D03AFA1215_3_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E5DD460)
#define CLASS_1_075C34D03AFA1215_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5DD320)
#define CLASS_1_075C34D03AFA1215_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5DD780)
#define CLASS_1_075C34D03AFA1215_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5DD7E0)
#define CLASS_1_075C34D03AFA1215_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DDB50)
#define CLASS_1_075C34D03AFA1215_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5DD380)
#define CLASS_1_075C34D03AFA1215_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DD330)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_3_TypeDefinitionIndex = 24890;

class Class_1_075C34D03AFA1215_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_3*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_3_TypeDefinitionIndex)->GetStaticField(0x55300);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JPAEBNKOHFA()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_3_TypeDefinitionIndex)->GetStaticField(0x55308);
	}
	// static const ::System::Int32 DGOKAKPOELJ = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_3*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_3* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_3*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_3*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
