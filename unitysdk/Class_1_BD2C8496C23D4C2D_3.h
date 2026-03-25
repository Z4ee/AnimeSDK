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

#define CLASS_1_BD2C8496C23D4C2D_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E74EF0)
#define CLASS_1_BD2C8496C23D4C2D_3_CLONE_OFFSET UNITYSDK_OFFSET(0x17E74C10)
#define CLASS_1_BD2C8496C23D4C2D_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E74D40)
#define CLASS_1_BD2C8496C23D4C2D_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E74CA0)
#define CLASS_1_BD2C8496C23D4C2D_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E74DD0)
#define CLASS_1_BD2C8496C23D4C2D_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E74FB0)
#define CLASS_1_BD2C8496C23D4C2D_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E74F60)
#define CLASS_1_BD2C8496C23D4C2D_3_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x17E74C90)
#define CLASS_1_BD2C8496C23D4C2D_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E74B60)
#define CLASS_1_BD2C8496C23D4C2D_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E74E10)
#define CLASS_1_BD2C8496C23D4C2D_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E74E70)
#define CLASS_1_BD2C8496C23D4C2D_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E75060)
#define CLASS_1_BD2C8496C23D4C2D_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E74BA0)
#define CLASS_1_BD2C8496C23D4C2D_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17E74B70)

inline static constexpr unsigned int Class_1_BD2C8496C23D4C2D_3_TypeDefinitionIndex = 26628;

class Class_1_BD2C8496C23D4C2D_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD2C8496C23D4C2D_3_TypeDefinitionIndex)->GetStaticField(0x25D40);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BD2C8496C23D4C2D_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_3*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_3__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BD2C8496C23D4C2D_3* Clone()
	{
		return ((::Class_1_BD2C8496C23D4C2D_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_3_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BD2C8496C23D4C2D_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_3*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BD2C8496C23D4C2D_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_3*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
