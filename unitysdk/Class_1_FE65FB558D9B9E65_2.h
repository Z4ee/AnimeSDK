#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FE65FB558D9B9E65_2_Enum_3_2E741879C8CDBAFC_20.h"
#include "unitysdk/System/Object.h"

class Class_1_5F7C2EDC42F3AA1C;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FE65FB558D9B9E65_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A5B9850)
#define CLASS_1_FE65FB558D9B9E65_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1A5B9490)
#define CLASS_1_FE65FB558D9B9E65_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A5B9560)
#define CLASS_1_FE65FB558D9B9E65_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A5B9500)
#define CLASS_1_FE65FB558D9B9E65_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A5B96D0)
#define CLASS_1_FE65FB558D9B9E65_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A5B9A90)
#define CLASS_1_FE65FB558D9B9E65_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A5B98F0)
#define CLASS_1_FE65FB558D9B9E65_2_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1A5B94E0)
#define CLASS_1_FE65FB558D9B9E65_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A5B92C0)
#define CLASS_1_FE65FB558D9B9E65_2_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1A5B9410)
#define CLASS_1_FE65FB558D9B9E65_2_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A5B94F0)
#define CLASS_1_FE65FB558D9B9E65_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A5B9470)
#define CLASS_1_FE65FB558D9B9E65_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A5B9320)
#define CLASS_1_FE65FB558D9B9E65_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A5B9750)
#define CLASS_1_FE65FB558D9B9E65_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A5B97B0)
#define CLASS_1_FE65FB558D9B9E65_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5B9CC0)
#define CLASS_1_FE65FB558D9B9E65_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5B9340)
#define CLASS_1_FE65FB558D9B9E65_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B9330)

inline static constexpr unsigned int Class_1_FE65FB558D9B9E65_2_TypeDefinitionIndex = 31092;

class Class_1_FE65FB558D9B9E65_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FE65FB558D9B9E65_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FE65FB558D9B9E65_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE65FB558D9B9E65_2_TypeDefinitionIndex)->GetStaticField(0x17300);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::Object* Field_1_3; // 0x18
	::Class_1_FE65FB558D9B9E65_2_Enum_3_2E741879C8CDBAFC_20 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FE65FB558D9B9E65_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE65FB558D9B9E65_2*))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FE65FB558D9B9E65_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FE65FB558D9B9E65_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FE65FB558D9B9E65_2* Clone()
	{
		return ((::Class_1_FE65FB558D9B9E65_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_CLONE_OFFSET))(this);
	}

	::Class_1_5F7C2EDC42F3AA1C* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_5F7C2EDC42F3AA1C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5F7C2EDC42F3AA1C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F7C2EDC42F3AA1C*))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_FE65FB558D9B9E65_2_Enum_3_2E741879C8CDBAFC_20 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_FE65FB558D9B9E65_2_Enum_3_2E741879C8CDBAFC_20(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FE65FB558D9B9E65_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FE65FB558D9B9E65_2*))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FE65FB558D9B9E65_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE65FB558D9B9E65_2*))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
