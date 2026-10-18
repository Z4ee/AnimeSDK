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

#define CLASS_1_A6623677AE360DE9_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8ADF50)
#define CLASS_1_A6623677AE360DE9_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8ADA40)
#define CLASS_1_A6623677AE360DE9_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8ADB50)
#define CLASS_1_A6623677AE360DE9_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8ADAC0)
#define CLASS_1_A6623677AE360DE9_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8ADC60)
#define CLASS_1_A6623677AE360DE9_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8AE030)
#define CLASS_1_A6623677AE360DE9_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8ADFD0)
#define CLASS_1_A6623677AE360DE9_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E8ADA70)
#define CLASS_1_A6623677AE360DE9_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E8AD910)
#define CLASS_1_A6623677AE360DE9_1_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1E8ADAB0)
#define CLASS_1_A6623677AE360DE9_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E8ADA90)
#define CLASS_1_A6623677AE360DE9_1_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1E8ADAA0)
#define CLASS_1_A6623677AE360DE9_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E8ADA80)
#define CLASS_1_A6623677AE360DE9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8AD940)
#define CLASS_1_A6623677AE360DE9_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8ADD60)
#define CLASS_1_A6623677AE360DE9_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8ADDC0)
#define CLASS_1_A6623677AE360DE9_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AE100)
#define CLASS_1_A6623677AE360DE9_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8AD9A0)
#define CLASS_1_A6623677AE360DE9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AD950)

inline static constexpr unsigned int Class_1_A6623677AE360DE9_1_TypeDefinitionIndex = 30222;

class Class_1_A6623677AE360DE9_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FLJBJMDPFHH()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6623677AE360DE9_1_TypeDefinitionIndex)->GetStaticField(0x25AC0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_A6623677AE360DE9_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A6623677AE360DE9_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6623677AE360DE9_1_TypeDefinitionIndex)->GetStaticField(0x25AC8);
	}
	// static const ::System::Int32 IICKCIKPOKO = 0xA; // 0x0
	// static const ::System::Int32 IOFFJNOAHAM = 0x5; // 0x0
	// static const ::System::Int32 DGBMBFCBOMK = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HIBIIFNLNJJ; // 0x18
	::System::Boolean DKDLLJDGCCB; // 0x20
	::System::Boolean HILCFELNGOM; // 0x21

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
