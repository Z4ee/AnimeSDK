#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ECB0576E84484CA9_1_Enum_3_2E741879C8CDBAFC_14.h"
#include "unitysdk/System/Object.h"

class Class_1_4A02F22BC9731FA7_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_ECB0576E84484CA9_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1983E630)
#define CLASS_1_ECB0576E84484CA9_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1983E2D0)
#define CLASS_1_ECB0576E84484CA9_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1983E370)
#define CLASS_1_ECB0576E84484CA9_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1983E340)
#define CLASS_1_ECB0576E84484CA9_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1983E4B0)
#define CLASS_1_ECB0576E84484CA9_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1983E830)
#define CLASS_1_ECB0576E84484CA9_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1983E730)
#define CLASS_1_ECB0576E84484CA9_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1983E300)
#define CLASS_1_ECB0576E84484CA9_1_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1983E320)
#define CLASS_1_ECB0576E84484CA9_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1983E190)
#define CLASS_1_ECB0576E84484CA9_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1983E310)
#define CLASS_1_ECB0576E84484CA9_1_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1983E330)
#define CLASS_1_ECB0576E84484CA9_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1983E2B0)
#define CLASS_1_ECB0576E84484CA9_1_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x1983E270)
#define CLASS_1_ECB0576E84484CA9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1983E1C0)
#define CLASS_1_ECB0576E84484CA9_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1983E520)
#define CLASS_1_ECB0576E84484CA9_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1983E580)
#define CLASS_1_ECB0576E84484CA9_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1983E920)
#define CLASS_1_ECB0576E84484CA9_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1983E1E0)
#define CLASS_1_ECB0576E84484CA9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1983E1D0)

inline static constexpr unsigned int Class_1_ECB0576E84484CA9_1_TypeDefinitionIndex = 29103;

class Class_1_ECB0576E84484CA9_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_ECB0576E84484CA9_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_ECB0576E84484CA9_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECB0576E84484CA9_1_TypeDefinitionIndex)->GetStaticField(0x452C0);
	}
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6FC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Object* Field_1_5; // 0x18
	::System::UInt32 Field_1_3; // 0x20
	::Class_1_ECB0576E84484CA9_1_Enum_3_2E741879C8CDBAFC_14 Field_1_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_ECB0576E84484CA9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECB0576E84484CA9_1*))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_ECB0576E84484CA9_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_ECB0576E84484CA9_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_ECB0576E84484CA9_1* Clone()
	{
		return ((::Class_1_ECB0576E84484CA9_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_4A02F22BC9731FA7_1* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_4A02F22BC9731FA7_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_METHOD_1_C4BFBB1BE6C0430A_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4A02F22BC9731FA7_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A02F22BC9731FA7_1*))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_ECB0576E84484CA9_1_Enum_3_2E741879C8CDBAFC_14 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_ECB0576E84484CA9_1_Enum_3_2E741879C8CDBAFC_14(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_ECB0576E84484CA9_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_ECB0576E84484CA9_1*))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_ECB0576E84484CA9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECB0576E84484CA9_1*))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
