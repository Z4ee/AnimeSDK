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

#define CLASS_1_A6623677AE360DE9_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8FF220)
#define CLASS_1_A6623677AE360DE9_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8FED10)
#define CLASS_1_A6623677AE360DE9_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8FEE20)
#define CLASS_1_A6623677AE360DE9_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8FED90)
#define CLASS_1_A6623677AE360DE9_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8FEF30)
#define CLASS_1_A6623677AE360DE9_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8FF300)
#define CLASS_1_A6623677AE360DE9_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8FF2A0)
#define CLASS_1_A6623677AE360DE9_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E8FED40)
#define CLASS_1_A6623677AE360DE9_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E8FEBE0)
#define CLASS_1_A6623677AE360DE9_1_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1E8FED80)
#define CLASS_1_A6623677AE360DE9_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E8FED60)
#define CLASS_1_A6623677AE360DE9_1_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1E8FED70)
#define CLASS_1_A6623677AE360DE9_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E8FED50)
#define CLASS_1_A6623677AE360DE9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8FEC10)
#define CLASS_1_A6623677AE360DE9_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8FF030)
#define CLASS_1_A6623677AE360DE9_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8FF090)
#define CLASS_1_A6623677AE360DE9_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8FF3D0)
#define CLASS_1_A6623677AE360DE9_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8FEC70)
#define CLASS_1_A6623677AE360DE9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FEC20)

inline static constexpr unsigned int Class_1_A6623677AE360DE9_1_TypeDefinitionIndex = 29623;

class Class_1_A6623677AE360DE9_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IBOBFDAMEHC()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6623677AE360DE9_1_TypeDefinitionIndex)->GetStaticField(0x1ED0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_A6623677AE360DE9_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A6623677AE360DE9_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6623677AE360DE9_1_TypeDefinitionIndex)->GetStaticField(0x1ED8);
	}
	// static const ::System::Int32 AJPEEDNHODK = 0xB; // 0x0
	// static const ::System::Int32 DGBMBFCBOMK = 0x9; // 0x0
	// static const ::System::Int32 HBDALMDHLKJ = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJGFMICPCLP; // 0x18
	::System::Boolean AIGHAPALCNE; // 0x20
	::System::Boolean DKDLLJDGCCB; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A6623677AE360DE9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6623677AE360DE9_1*))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A6623677AE360DE9_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A6623677AE360DE9_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A6623677AE360DE9_1* Clone()
	{
		return ((::Class_1_A6623677AE360DE9_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A6623677AE360DE9_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A6623677AE360DE9_1*))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A6623677AE360DE9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6623677AE360DE9_1*))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
