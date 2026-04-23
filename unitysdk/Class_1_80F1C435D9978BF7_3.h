#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_80F1C435D9978BF7_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x196D67A0)
#define CLASS_1_80F1C435D9978BF7_3_CLONE_OFFSET UNITYSDK_OFFSET(0x196D6380)
#define CLASS_1_80F1C435D9978BF7_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196D6540)
#define CLASS_1_80F1C435D9978BF7_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x196D6470)
#define CLASS_1_80F1C435D9978BF7_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196D65E0)
#define CLASS_1_80F1C435D9978BF7_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196D6990)
#define CLASS_1_80F1C435D9978BF7_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196D6930)
#define CLASS_1_80F1C435D9978BF7_3_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x196D6450)
#define CLASS_1_80F1C435D9978BF7_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x196D6420)
#define CLASS_1_80F1C435D9978BF7_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x196D6270)
#define CLASS_1_80F1C435D9978BF7_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x196D6460)
#define CLASS_1_80F1C435D9978BF7_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x196D6430)
#define CLASS_1_80F1C435D9978BF7_3_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x196D6440)
#define CLASS_1_80F1C435D9978BF7_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x196D62D0)
#define CLASS_1_80F1C435D9978BF7_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x196D6630)
#define CLASS_1_80F1C435D9978BF7_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x196D6690)
#define CLASS_1_80F1C435D9978BF7_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x196D6A70)
#define CLASS_1_80F1C435D9978BF7_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196D6310)
#define CLASS_1_80F1C435D9978BF7_3__CTOR_OFFSET UNITYSDK_OFFSET(0x196D62E0)

inline static constexpr unsigned int Class_1_80F1C435D9978BF7_3_TypeDefinitionIndex = 31391;

class Class_1_80F1C435D9978BF7_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_80F1C435D9978BF7_3_TypeDefinitionIndex)->GetStaticField(0x4B340);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_80F1C435D9978BF7_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_80F1C435D9978BF7_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_80F1C435D9978BF7_3_TypeDefinitionIndex)->GetStaticField(0x4B348);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_6; // 0x18
	::System::UInt32 Field_1_3; // 0x20
	::System::UInt32 Field_1_8; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_80F1C435D9978BF7_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_80F1C435D9978BF7_3*))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_80F1C435D9978BF7_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_80F1C435D9978BF7_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_80F1C435D9978BF7_3* Clone()
	{
		return ((::Class_1_80F1C435D9978BF7_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_80F1C435D9978BF7_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_80F1C435D9978BF7_3*))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_80F1C435D9978BF7_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_80F1C435D9978BF7_3*))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_80F1C435D9978BF7_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
