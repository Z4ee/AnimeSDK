#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_45CE24AEB919BC5F_Enum_3_2E741879C8CDBAFC_18.h"
#include "unitysdk/System/Object.h"

class Class_1_C80CD3A7F22118CD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_45CE24AEB919BC5F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CBEAC90)
#define CLASS_1_45CE24AEB919BC5F_CLONE_OFFSET UNITYSDK_OFFSET(0x1CBEA790)
#define CLASS_1_45CE24AEB919BC5F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CBEA860)
#define CLASS_1_45CE24AEB919BC5F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CBEA800)
#define CLASS_1_45CE24AEB919BC5F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CBEAA70)
#define CLASS_1_45CE24AEB919BC5F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CBEAED0)
#define CLASS_1_45CE24AEB919BC5F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CBEAD30)
#define CLASS_1_45CE24AEB919BC5F_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1CBEA7E0)
#define CLASS_1_45CE24AEB919BC5F_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CBEA5D0)
#define CLASS_1_45CE24AEB919BC5F_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1CBEA720)
#define CLASS_1_45CE24AEB919BC5F_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1CBEA7F0)
#define CLASS_1_45CE24AEB919BC5F_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CBEA780)
#define CLASS_1_45CE24AEB919BC5F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CBEA630)
#define CLASS_1_45CE24AEB919BC5F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CBEAB60)
#define CLASS_1_45CE24AEB919BC5F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CBEABC0)
#define CLASS_1_45CE24AEB919BC5F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBEB100)
#define CLASS_1_45CE24AEB919BC5F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBEA650)
#define CLASS_1_45CE24AEB919BC5F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBEA640)

inline static constexpr unsigned int Class_1_45CE24AEB919BC5F_TypeDefinitionIndex = 31544;

class Class_1_45CE24AEB919BC5F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45CE24AEB919BC5F*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45CE24AEB919BC5F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45CE24AEB919BC5F_TypeDefinitionIndex)->GetStaticField(0x264C0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::System::Object* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18
	::Class_1_45CE24AEB919BC5F_Enum_3_2E741879C8CDBAFC_18 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45CE24AEB919BC5F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45CE24AEB919BC5F*))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45CE24AEB919BC5F*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45CE24AEB919BC5F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45CE24AEB919BC5F* Clone()
	{
		return ((::Class_1_45CE24AEB919BC5F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_CLONE_OFFSET))(this);
	}

	::Class_1_C80CD3A7F22118CD* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_C80CD3A7F22118CD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C80CD3A7F22118CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C80CD3A7F22118CD*))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_45CE24AEB919BC5F_Enum_3_2E741879C8CDBAFC_18 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_45CE24AEB919BC5F_Enum_3_2E741879C8CDBAFC_18(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45CE24AEB919BC5F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45CE24AEB919BC5F*))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45CE24AEB919BC5F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45CE24AEB919BC5F*))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45CE24AEB919BC5F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
