#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_16;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8A9C470B2D560430_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1812D2C0)
#define CLASS_1_8A9C470B2D560430_CLONE_OFFSET UNITYSDK_OFFSET(0x1812CCD0)
#define CLASS_1_8A9C470B2D560430_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1812CE60)
#define CLASS_1_8A9C470B2D560430_EQUALS_OFFSET UNITYSDK_OFFSET(0x1812CE00)
#define CLASS_1_8A9C470B2D560430_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1812CF90)
#define CLASS_1_8A9C470B2D560430_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1812D4E0)
#define CLASS_1_8A9C470B2D560430_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1812D410)
#define CLASS_1_8A9C470B2D560430_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1812CD50)
#define CLASS_1_8A9C470B2D560430_METHOD_1_AA645B8654F862A0_OFFSET UNITYSDK_OFFSET(0x1812CD40)
#define CLASS_1_8A9C470B2D560430_METHOD_1_C271468BB9D81456_OFFSET UNITYSDK_OFFSET(0x1812CD60)
#define CLASS_1_8A9C470B2D560430_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1812CD30)
#define CLASS_1_8A9C470B2D560430_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1812CD20)
#define CLASS_1_8A9C470B2D560430_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1812CB10)
#define CLASS_1_8A9C470B2D560430_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1812D120)
#define CLASS_1_8A9C470B2D560430_WRITETO_OFFSET UNITYSDK_OFFSET(0x1812D180)
#define CLASS_1_8A9C470B2D560430__CCTOR_OFFSET UNITYSDK_OFFSET(0x1812D6D0)
#define CLASS_1_8A9C470B2D560430__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1812CBB0)
#define CLASS_1_8A9C470B2D560430__CTOR_OFFSET UNITYSDK_OFFSET(0x1812CB20)

inline static constexpr unsigned int Class_1_8A9C470B2D560430_TypeDefinitionIndex = 23045;

class Class_1_8A9C470B2D560430 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::Class_1_FA4F4A67B1C04320_16*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::Class_1_FA4F4A67B1C04320_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A9C470B2D560430_TypeDefinitionIndex)->GetStaticField(0x40740);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::ByteString* Field_1_7; // 0x18
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::Class_1_FA4F4A67B1C04320_16*>* Field_1_5; // 0x20
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8A9C470B2D560430* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A9C470B2D560430*))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8A9C470B2D560430* Clone()
	{
		return ((::Class_1_8A9C470B2D560430*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::Class_1_FA4F4A67B1C04320_16*>* Method_1_AA645B8654F862A0()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::Class_1_FA4F4A67B1C04320_16*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_METHOD_1_AA645B8654F862A0_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_C271468BB9D81456(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_METHOD_1_C271468BB9D81456_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8A9C470B2D560430* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A9C470B2D560430*))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8A9C470B2D560430* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A9C470B2D560430*))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8A9C470B2D560430_MERGEFROM_1_OFFSET))(this, a1);
	}
};
