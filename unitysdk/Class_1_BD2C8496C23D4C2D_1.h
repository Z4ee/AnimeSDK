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

#define CLASS_1_BD2C8496C23D4C2D_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BA7760)
#define CLASS_1_BD2C8496C23D4C2D_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17BA7420)
#define CLASS_1_BD2C8496C23D4C2D_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BA7580)
#define CLASS_1_BD2C8496C23D4C2D_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BA74C0)
#define CLASS_1_BD2C8496C23D4C2D_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BA7610)
#define CLASS_1_BD2C8496C23D4C2D_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BA7850)
#define CLASS_1_BD2C8496C23D4C2D_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BA7800)
#define CLASS_1_BD2C8496C23D4C2D_1_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x17BA74B0)
#define CLASS_1_BD2C8496C23D4C2D_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BA7370)
#define CLASS_1_BD2C8496C23D4C2D_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BA7650)
#define CLASS_1_BD2C8496C23D4C2D_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BA76B0)
#define CLASS_1_BD2C8496C23D4C2D_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BA7920)
#define CLASS_1_BD2C8496C23D4C2D_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BA73B0)
#define CLASS_1_BD2C8496C23D4C2D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17BA7380)

inline static constexpr unsigned int Class_1_BD2C8496C23D4C2D_1_TypeDefinitionIndex = 24789;

class Class_1_BD2C8496C23D4C2D_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD2C8496C23D4C2D_1_TypeDefinitionIndex)->GetStaticField(0x32030);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BD2C8496C23D4C2D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_1*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BD2C8496C23D4C2D_1* Clone()
	{
		return ((::Class_1_BD2C8496C23D4C2D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_1_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BD2C8496C23D4C2D_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_1*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BD2C8496C23D4C2D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_1*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
