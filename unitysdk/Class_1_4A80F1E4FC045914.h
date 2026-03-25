#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_44.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4A80F1E4FC045914_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C79370)
#define CLASS_1_4A80F1E4FC045914_CLONE_OFFSET UNITYSDK_OFFSET(0x17C78E50)
#define CLASS_1_4A80F1E4FC045914_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C79000)
#define CLASS_1_4A80F1E4FC045914_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C78F10)
#define CLASS_1_4A80F1E4FC045914_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C790C0)
#define CLASS_1_4A80F1E4FC045914_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C79610)
#define CLASS_1_4A80F1E4FC045914_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C795A0)
#define CLASS_1_4A80F1E4FC045914_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17C78F00)
#define CLASS_1_4A80F1E4FC045914_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17C78EC0)
#define CLASS_1_4A80F1E4FC045914_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17C78EA0)
#define CLASS_1_4A80F1E4FC045914_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17C78EB0)
#define CLASS_1_4A80F1E4FC045914_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17C78EE0)
#define CLASS_1_4A80F1E4FC045914_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17C78EF0)
#define CLASS_1_4A80F1E4FC045914_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17C78ED0)
#define CLASS_1_4A80F1E4FC045914_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C78D50)
#define CLASS_1_4A80F1E4FC045914_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C791E0)
#define CLASS_1_4A80F1E4FC045914_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C79240)
#define CLASS_1_4A80F1E4FC045914__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C79720)
#define CLASS_1_4A80F1E4FC045914__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C78DB0)
#define CLASS_1_4A80F1E4FC045914__CTOR_OFFSET UNITYSDK_OFFSET(0x17C78D60)

inline static constexpr unsigned int Class_1_4A80F1E4FC045914_TypeDefinitionIndex = 25120;

class Class_1_4A80F1E4FC045914 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A80F1E4FC045914_TypeDefinitionIndex)->GetStaticField(0x412D0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Enum_3_0A3761FE34514D6C_44 Field_1_5; // 0x20
	::System::Boolean Field_1_7; // 0x24
	::System::UInt64 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4A80F1E4FC045914* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A80F1E4FC045914*))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4A80F1E4FC045914* Clone()
	{
		return ((::Class_1_4A80F1E4FC045914*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_44 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_44(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_44 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_44))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4A80F1E4FC045914* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4A80F1E4FC045914*))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4A80F1E4FC045914* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A80F1E4FC045914*))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4A80F1E4FC045914_MERGEFROM_1_OFFSET))(this, a1);
	}
};
