#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DCE8592E6AAF77DA_Enum_3_FCBB2C507E9B21A3_29.h"
#include "unitysdk/System/Object.h"

class Class_1_34A67A60E0FAC469_1;
class Class_1_67E4070ABD73F7B2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_DCE8592E6AAF77DA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A7D7480)
#define CLASS_1_DCE8592E6AAF77DA_CLONE_OFFSET UNITYSDK_OFFSET(0x1A7D6EE0)
#define CLASS_1_DCE8592E6AAF77DA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A7D6FB0)
#define CLASS_1_DCE8592E6AAF77DA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7D6F50)
#define CLASS_1_DCE8592E6AAF77DA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7D71E0)
#define CLASS_1_DCE8592E6AAF77DA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A7D78A0)
#define CLASS_1_DCE8592E6AAF77DA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A7D75E0)
#define CLASS_1_DCE8592E6AAF77DA_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1A7D6F30)
#define CLASS_1_DCE8592E6AAF77DA_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A7D6C10)
#define CLASS_1_DCE8592E6AAF77DA_METHOD_1_358A144584A5DBFC_1_OFFSET UNITYSDK_OFFSET(0x1A7D6E60)
#define CLASS_1_DCE8592E6AAF77DA_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1A7D6DE0)
#define CLASS_1_DCE8592E6AAF77DA_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A7D6F40)
#define CLASS_1_DCE8592E6AAF77DA_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A7D6EC0)
#define CLASS_1_DCE8592E6AAF77DA_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A7D6E40)
#define CLASS_1_DCE8592E6AAF77DA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7D6C70)
#define CLASS_1_DCE8592E6AAF77DA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7D7300)
#define CLASS_1_DCE8592E6AAF77DA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A7D7360)
#define CLASS_1_DCE8592E6AAF77DA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7D7B90)
#define CLASS_1_DCE8592E6AAF77DA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7D6C90)
#define CLASS_1_DCE8592E6AAF77DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D6C80)

inline static constexpr unsigned int Class_1_DCE8592E6AAF77DA_TypeDefinitionIndex = 30251;

class Class_1_DCE8592E6AAF77DA : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_DCE8592E6AAF77DA*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_DCE8592E6AAF77DA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DCE8592E6AAF77DA_TypeDefinitionIndex)->GetStaticField(0x4CE30);
	}
	// static const ::System::Int32 Field_1_1 = 0x31E; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x722; // 0x0
	::System::Object* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::Class_1_DCE8592E6AAF77DA_Enum_3_FCBB2C507E9B21A3_29 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_DCE8592E6AAF77DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE8592E6AAF77DA*))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_DCE8592E6AAF77DA*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_DCE8592E6AAF77DA*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_DCE8592E6AAF77DA* Clone()
	{
		return ((::Class_1_DCE8592E6AAF77DA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_CLONE_OFFSET))(this);
	}

	::Class_1_34A67A60E0FAC469_1* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_34A67A60E0FAC469_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_34A67A60E0FAC469_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34A67A60E0FAC469_1*))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_67E4070ABD73F7B2* Method_1_358A144584A5DBFC_1()
	{
		return ((::Class_1_67E4070ABD73F7B2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_METHOD_1_358A144584A5DBFC_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_67E4070ABD73F7B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_67E4070ABD73F7B2*))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_DCE8592E6AAF77DA_Enum_3_FCBB2C507E9B21A3_29 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_DCE8592E6AAF77DA_Enum_3_FCBB2C507E9B21A3_29(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_DCE8592E6AAF77DA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DCE8592E6AAF77DA*))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_DCE8592E6AAF77DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE8592E6AAF77DA*))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
