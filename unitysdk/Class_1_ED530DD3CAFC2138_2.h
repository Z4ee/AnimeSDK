#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED530DD3CAFC2138_2_Enum_3_2E741879C8CDBAFC_17.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_ED530DD3CAFC2138_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C3CD580)
#define CLASS_1_ED530DD3CAFC2138_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1C3CD0B0)
#define CLASS_1_ED530DD3CAFC2138_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C3CD180)
#define CLASS_1_ED530DD3CAFC2138_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C3CD120)
#define CLASS_1_ED530DD3CAFC2138_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C3CD380)
#define CLASS_1_ED530DD3CAFC2138_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C3CD750)
#define CLASS_1_ED530DD3CAFC2138_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C3CD690)
#define CLASS_1_ED530DD3CAFC2138_2_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1C3CD100)
#define CLASS_1_ED530DD3CAFC2138_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C3CCEC0)
#define CLASS_1_ED530DD3CAFC2138_2_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x1C3CD000)
#define CLASS_1_ED530DD3CAFC2138_2_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1C3CD110)
#define CLASS_1_ED530DD3CAFC2138_2_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x1C3CD080)
#define CLASS_1_ED530DD3CAFC2138_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C3CCF20)
#define CLASS_1_ED530DD3CAFC2138_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C3CD420)
#define CLASS_1_ED530DD3CAFC2138_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C3CD480)
#define CLASS_1_ED530DD3CAFC2138_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3CD8D0)
#define CLASS_1_ED530DD3CAFC2138_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3CCF40)
#define CLASS_1_ED530DD3CAFC2138_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CCF30)

inline static constexpr unsigned int Class_1_ED530DD3CAFC2138_2_TypeDefinitionIndex = 31148;

class Class_1_ED530DD3CAFC2138_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_ED530DD3CAFC2138_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_ED530DD3CAFC2138_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED530DD3CAFC2138_2_TypeDefinitionIndex)->GetStaticField(0x21160);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::System::Object* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18
	::Class_1_ED530DD3CAFC2138_2_Enum_3_2E741879C8CDBAFC_17 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_ED530DD3CAFC2138_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED530DD3CAFC2138_2*))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_ED530DD3CAFC2138_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_ED530DD3CAFC2138_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_ED530DD3CAFC2138_2* Clone()
	{
		return ((::Class_1_ED530DD3CAFC2138_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::Class_1_ED530DD3CAFC2138_2_Enum_3_2E741879C8CDBAFC_17 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_ED530DD3CAFC2138_2_Enum_3_2E741879C8CDBAFC_17(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_ED530DD3CAFC2138_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_ED530DD3CAFC2138_2*))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_ED530DD3CAFC2138_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED530DD3CAFC2138_2*))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ED530DD3CAFC2138_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
