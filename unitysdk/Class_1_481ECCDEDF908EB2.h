#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_18;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_481ECCDEDF908EB2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C40D80)
#define CLASS_1_481ECCDEDF908EB2_CLONE_OFFSET UNITYSDK_OFFSET(0x19C40790)
#define CLASS_1_481ECCDEDF908EB2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C40920)
#define CLASS_1_481ECCDEDF908EB2_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C408C0)
#define CLASS_1_481ECCDEDF908EB2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C40A50)
#define CLASS_1_481ECCDEDF908EB2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C40FA0)
#define CLASS_1_481ECCDEDF908EB2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C40ED0)
#define CLASS_1_481ECCDEDF908EB2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19C40570)
#define CLASS_1_481ECCDEDF908EB2_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x19C40810)
#define CLASS_1_481ECCDEDF908EB2_METHOD_1_AA645B8654F862A0_OFFSET UNITYSDK_OFFSET(0x19C40800)
#define CLASS_1_481ECCDEDF908EB2_METHOD_1_C271468BB9D81456_OFFSET UNITYSDK_OFFSET(0x19C40820)
#define CLASS_1_481ECCDEDF908EB2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19C407F0)
#define CLASS_1_481ECCDEDF908EB2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19C407E0)
#define CLASS_1_481ECCDEDF908EB2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C405D0)
#define CLASS_1_481ECCDEDF908EB2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C40BE0)
#define CLASS_1_481ECCDEDF908EB2_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C40C40)
#define CLASS_1_481ECCDEDF908EB2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C41190)
#define CLASS_1_481ECCDEDF908EB2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C40670)
#define CLASS_1_481ECCDEDF908EB2__CTOR_OFFSET UNITYSDK_OFFSET(0x19C405E0)

inline static constexpr unsigned int Class_1_481ECCDEDF908EB2_TypeDefinitionIndex = 24167;

class Class_1_481ECCDEDF908EB2 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::Class_1_D17272E82AE804C2_18*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::Class_1_D17272E82AE804C2_18*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_481ECCDEDF908EB2_TypeDefinitionIndex)->GetStaticField(0x5BC10);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_481ECCDEDF908EB2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_481ECCDEDF908EB2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_481ECCDEDF908EB2_TypeDefinitionIndex)->GetStaticField(0x5BC18);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	::Google::Protobuf::ByteString* Field_1_8; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::Class_1_D17272E82AE804C2_18*>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_481ECCDEDF908EB2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_481ECCDEDF908EB2*))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_481ECCDEDF908EB2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_481ECCDEDF908EB2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_481ECCDEDF908EB2* Clone()
	{
		return ((::Class_1_481ECCDEDF908EB2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::Class_1_D17272E82AE804C2_18*>* Method_1_AA645B8654F862A0()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::Class_1_D17272E82AE804C2_18*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_METHOD_1_AA645B8654F862A0_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_C271468BB9D81456(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_METHOD_1_C271468BB9D81456_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_481ECCDEDF908EB2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_481ECCDEDF908EB2*))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_481ECCDEDF908EB2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_481ECCDEDF908EB2*))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_481ECCDEDF908EB2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
