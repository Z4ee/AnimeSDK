#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_828B93627FACA5C2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1818C5A0)
#define CLASS_1_828B93627FACA5C2_CLONE_OFFSET UNITYSDK_OFFSET(0x1818C130)
#define CLASS_1_828B93627FACA5C2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1818C290)
#define CLASS_1_828B93627FACA5C2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1818C1D0)
#define CLASS_1_828B93627FACA5C2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1818C340)
#define CLASS_1_828B93627FACA5C2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1818C770)
#define CLASS_1_828B93627FACA5C2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1818C710)
#define CLASS_1_828B93627FACA5C2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1818C1B0)
#define CLASS_1_828B93627FACA5C2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1818C160)
#define CLASS_1_828B93627FACA5C2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1818C180)
#define CLASS_1_828B93627FACA5C2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1818C1C0)
#define CLASS_1_828B93627FACA5C2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1818C170)
#define CLASS_1_828B93627FACA5C2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1818C1A0)
#define CLASS_1_828B93627FACA5C2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1818C190)
#define CLASS_1_828B93627FACA5C2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1818C030)
#define CLASS_1_828B93627FACA5C2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1818C450)
#define CLASS_1_828B93627FACA5C2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1818C4B0)
#define CLASS_1_828B93627FACA5C2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1818C860)
#define CLASS_1_828B93627FACA5C2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1818C090)
#define CLASS_1_828B93627FACA5C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1818C040)

inline static constexpr unsigned int Class_1_828B93627FACA5C2_TypeDefinitionIndex = 23644;

class Class_1_828B93627FACA5C2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_828B93627FACA5C2_TypeDefinitionIndex)->GetStaticField(0xC6B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::Boolean Field_1_7; // 0x24
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_828B93627FACA5C2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_828B93627FACA5C2*))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_828B93627FACA5C2* Clone()
	{
		return ((::Class_1_828B93627FACA5C2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_828B93627FACA5C2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_828B93627FACA5C2*))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_828B93627FACA5C2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_828B93627FACA5C2*))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_828B93627FACA5C2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
