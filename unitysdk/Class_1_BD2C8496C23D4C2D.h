#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BD2C8496C23D4C2D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181CEF20)
#define CLASS_1_BD2C8496C23D4C2D_CLONE_OFFSET UNITYSDK_OFFSET(0x181CEC40)
#define CLASS_1_BD2C8496C23D4C2D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181CED70)
#define CLASS_1_BD2C8496C23D4C2D_EQUALS_OFFSET UNITYSDK_OFFSET(0x181CECD0)
#define CLASS_1_BD2C8496C23D4C2D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181CEE00)
#define CLASS_1_BD2C8496C23D4C2D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181CEFE0)
#define CLASS_1_BD2C8496C23D4C2D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181CEF90)
#define CLASS_1_BD2C8496C23D4C2D_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x181CECC0)
#define CLASS_1_BD2C8496C23D4C2D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181CEB90)
#define CLASS_1_BD2C8496C23D4C2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181CEE40)
#define CLASS_1_BD2C8496C23D4C2D_WRITETO_OFFSET UNITYSDK_OFFSET(0x181CEEA0)
#define CLASS_1_BD2C8496C23D4C2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x181CF090)
#define CLASS_1_BD2C8496C23D4C2D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181CEBD0)
#define CLASS_1_BD2C8496C23D4C2D__CTOR_OFFSET UNITYSDK_OFFSET(0x181CEBA0)

inline static constexpr unsigned int Class_1_BD2C8496C23D4C2D_TypeDefinitionIndex = 23405;

class Class_1_BD2C8496C23D4C2D : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD2C8496C23D4C2D_TypeDefinitionIndex)->GetStaticField(0xFAD0);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BD2C8496C23D4C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BD2C8496C23D4C2D* Clone()
	{
		return ((::Class_1_BD2C8496C23D4C2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BD2C8496C23D4C2D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BD2C8496C23D4C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
