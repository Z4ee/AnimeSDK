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

#define CLASS_1_86871415CDAD31AF_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181C2910)
#define CLASS_1_86871415CDAD31AF_3_CLONE_OFFSET UNITYSDK_OFFSET(0x181C24D0)
#define CLASS_1_86871415CDAD31AF_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181C2630)
#define CLASS_1_86871415CDAD31AF_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x181C2550)
#define CLASS_1_86871415CDAD31AF_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181C26D0)
#define CLASS_1_86871415CDAD31AF_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181C2A00)
#define CLASS_1_86871415CDAD31AF_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181C29B0)
#define CLASS_1_86871415CDAD31AF_3_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x181C2520)
#define CLASS_1_86871415CDAD31AF_3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x181C2540)
#define CLASS_1_86871415CDAD31AF_3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x181C2530)
#define CLASS_1_86871415CDAD31AF_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181C23E0)
#define CLASS_1_86871415CDAD31AF_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181C27D0)
#define CLASS_1_86871415CDAD31AF_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x181C2830)
#define CLASS_1_86871415CDAD31AF_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x181C2AE0)
#define CLASS_1_86871415CDAD31AF_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181C2440)
#define CLASS_1_86871415CDAD31AF_3__CTOR_OFFSET UNITYSDK_OFFSET(0x181C23F0)

inline static constexpr unsigned int Class_1_86871415CDAD31AF_3_TypeDefinitionIndex = 24818;

class Class_1_86871415CDAD31AF_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_86871415CDAD31AF_3_TypeDefinitionIndex)->GetStaticField(0x2DAA0);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Boolean Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_86871415CDAD31AF_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86871415CDAD31AF_3*))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_86871415CDAD31AF_3* Clone()
	{
		return ((::Class_1_86871415CDAD31AF_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_86871415CDAD31AF_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_86871415CDAD31AF_3*))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_86871415CDAD31AF_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86871415CDAD31AF_3*))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
