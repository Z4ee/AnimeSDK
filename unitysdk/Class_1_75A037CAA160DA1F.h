#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_75A037CAA160DA1F_Enum_3_FCBB2C507E9B21A3_5.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_15;
class Class_1_45BB92167AED63A0_13;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_75A037CAA160DA1F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A4E0070)
#define CLASS_1_75A037CAA160DA1F_CLONE_OFFSET UNITYSDK_OFFSET(0x1A4DF960)
#define CLASS_1_75A037CAA160DA1F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A4DFA30)
#define CLASS_1_75A037CAA160DA1F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A4DF9D0)
#define CLASS_1_75A037CAA160DA1F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A4DFC40)
#define CLASS_1_75A037CAA160DA1F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A4E0540)
#define CLASS_1_75A037CAA160DA1F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A4E01C0)
#define CLASS_1_75A037CAA160DA1F_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1A4DF9B0)
#define CLASS_1_75A037CAA160DA1F_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A4DF660)
#define CLASS_1_75A037CAA160DA1F_METHOD_1_358A144584A5DBFC_1_OFFSET UNITYSDK_OFFSET(0x1A4DF8E0)
#define CLASS_1_75A037CAA160DA1F_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1A4DF860)
#define CLASS_1_75A037CAA160DA1F_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A4DF9C0)
#define CLASS_1_75A037CAA160DA1F_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A4DF940)
#define CLASS_1_75A037CAA160DA1F_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A4DF8C0)
#define CLASS_1_75A037CAA160DA1F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A4DF6C0)
#define CLASS_1_75A037CAA160DA1F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A4DFF10)
#define CLASS_1_75A037CAA160DA1F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A4DFF70)
#define CLASS_1_75A037CAA160DA1F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4E08A0)
#define CLASS_1_75A037CAA160DA1F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4DF6E0)
#define CLASS_1_75A037CAA160DA1F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4DF6D0)

inline static constexpr unsigned int Class_1_75A037CAA160DA1F_TypeDefinitionIndex = 25172;

class Class_1_75A037CAA160DA1F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_75A037CAA160DA1F*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_75A037CAA160DA1F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75A037CAA160DA1F_TypeDefinitionIndex)->GetStaticField(0x8110);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::Object* Field_1_4; // 0x18
	::Class_1_75A037CAA160DA1F_Enum_3_FCBB2C507E9B21A3_5 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_75A037CAA160DA1F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75A037CAA160DA1F*))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_75A037CAA160DA1F*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_75A037CAA160DA1F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_75A037CAA160DA1F* Clone()
	{
		return ((::Class_1_75A037CAA160DA1F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_CLONE_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_15* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_075C34D03AFA1215_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_075C34D03AFA1215_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_15*))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_45BB92167AED63A0_13* Method_1_358A144584A5DBFC_1()
	{
		return ((::Class_1_45BB92167AED63A0_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_METHOD_1_358A144584A5DBFC_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_45BB92167AED63A0_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_13*))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_75A037CAA160DA1F_Enum_3_FCBB2C507E9B21A3_5 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_75A037CAA160DA1F_Enum_3_FCBB2C507E9B21A3_5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_75A037CAA160DA1F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_75A037CAA160DA1F*))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_75A037CAA160DA1F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75A037CAA160DA1F*))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_75A037CAA160DA1F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
