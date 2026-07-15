#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_45C618C48C184AE0_Enum_3_2E741879C8CDBAFC_9.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_352;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_45C618C48C184AE0_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CA20220)
#define CLASS_1_45C618C48C184AE0_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA1FD70)
#define CLASS_1_45C618C48C184AE0_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CA1FE40)
#define CLASS_1_45C618C48C184AE0_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA1FDE0)
#define CLASS_1_45C618C48C184AE0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA20050)
#define CLASS_1_45C618C48C184AE0_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CA20440)
#define CLASS_1_45C618C48C184AE0_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CA202C0)
#define CLASS_1_45C618C48C184AE0_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1CA1FDC0)
#define CLASS_1_45C618C48C184AE0_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CA1FB90)
#define CLASS_1_45C618C48C184AE0_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1CA1FCF0)
#define CLASS_1_45C618C48C184AE0_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1CA1FDD0)
#define CLASS_1_45C618C48C184AE0_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CA1FD50)
#define CLASS_1_45C618C48C184AE0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA1FBF0)
#define CLASS_1_45C618C48C184AE0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA200F0)
#define CLASS_1_45C618C48C184AE0_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CA20150)
#define CLASS_1_45C618C48C184AE0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA20690)
#define CLASS_1_45C618C48C184AE0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA1FC10)
#define CLASS_1_45C618C48C184AE0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA1FC00)

inline static constexpr unsigned int Class_1_45C618C48C184AE0_TypeDefinitionIndex = 27388;

class Class_1_45C618C48C184AE0 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45C618C48C184AE0*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45C618C48C184AE0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45C618C48C184AE0_TypeDefinitionIndex)->GetStaticField(0x32DB0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::System::Object* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18
	::Class_1_45C618C48C184AE0_Enum_3_2E741879C8CDBAFC_9 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45C618C48C184AE0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45C618C48C184AE0*))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45C618C48C184AE0*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45C618C48C184AE0*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45C618C48C184AE0* Clone()
	{
		return ((::Class_1_45C618C48C184AE0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_352* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_D17272E82AE804C2_352*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_352* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_352*))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_45C618C48C184AE0_Enum_3_2E741879C8CDBAFC_9 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_45C618C48C184AE0_Enum_3_2E741879C8CDBAFC_9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45C618C48C184AE0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45C618C48C184AE0*))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45C618C48C184AE0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45C618C48C184AE0*))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45C618C48C184AE0_MERGEFROM_1_OFFSET))(this, a1);
	}
};
