#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_56410FBEF89611C1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_52AE8D741A62A8F4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18262660)
#define CLASS_1_52AE8D741A62A8F4_CLONE_OFFSET UNITYSDK_OFFSET(0x18262310)
#define CLASS_1_52AE8D741A62A8F4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18262430)
#define CLASS_1_52AE8D741A62A8F4_EQUALS_OFFSET UNITYSDK_OFFSET(0x18262350)
#define CLASS_1_52AE8D741A62A8F4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182624E0)
#define CLASS_1_52AE8D741A62A8F4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18262770)
#define CLASS_1_52AE8D741A62A8F4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18262700)
#define CLASS_1_52AE8D741A62A8F4_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x18262340)
#define CLASS_1_52AE8D741A62A8F4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18262230)
#define CLASS_1_52AE8D741A62A8F4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18262550)
#define CLASS_1_52AE8D741A62A8F4_WRITETO_OFFSET UNITYSDK_OFFSET(0x182625B0)
#define CLASS_1_52AE8D741A62A8F4__CCTOR_OFFSET UNITYSDK_OFFSET(0x18262820)
#define CLASS_1_52AE8D741A62A8F4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18262280)
#define CLASS_1_52AE8D741A62A8F4__CTOR_OFFSET UNITYSDK_OFFSET(0x18262240)

inline static constexpr unsigned int Class_1_52AE8D741A62A8F4_TypeDefinitionIndex = 23630;

class Class_1_52AE8D741A62A8F4 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_56410FBEF89611C1*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_56410FBEF89611C1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52AE8D741A62A8F4_TypeDefinitionIndex)->GetStaticField(0x17F50);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_56410FBEF89611C1*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_52AE8D741A62A8F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52AE8D741A62A8F4*))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_52AE8D741A62A8F4* Clone()
	{
		return ((::Class_1_52AE8D741A62A8F4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_56410FBEF89611C1*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_56410FBEF89611C1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_52AE8D741A62A8F4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_52AE8D741A62A8F4*))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_52AE8D741A62A8F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52AE8D741A62A8F4*))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
