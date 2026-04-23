#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_D46F34EB478F0887_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19382180)
#define CLASS_1_D46F34EB478F0887_CLONE_OFFSET UNITYSDK_OFFSET(0x19381A70)
#define CLASS_1_D46F34EB478F0887_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19381DB0)
#define CLASS_1_D46F34EB478F0887_EQUALS_OFFSET UNITYSDK_OFFSET(0x19381CB0)
#define CLASS_1_D46F34EB478F0887_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19381ED0)
#define CLASS_1_D46F34EB478F0887_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193825E0)
#define CLASS_1_D46F34EB478F0887_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19382480)
#define CLASS_1_D46F34EB478F0887_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x19381C00)
#define CLASS_1_D46F34EB478F0887_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19381B10)
#define CLASS_1_D46F34EB478F0887_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x19381BF0)
#define CLASS_1_D46F34EB478F0887_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19381980)
#define CLASS_1_D46F34EB478F0887_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x19381BD0)
#define CLASS_1_D46F34EB478F0887_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x19381BC0)
#define CLASS_1_D46F34EB478F0887_METHOD_1_9CE3056B66B7573D_1_OFFSET UNITYSDK_OFFSET(0x19381C10)
#define CLASS_1_D46F34EB478F0887_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x19381B20)
#define CLASS_1_D46F34EB478F0887_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x19381BE0)
#define CLASS_1_D46F34EB478F0887_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193819B0)
#define CLASS_1_D46F34EB478F0887_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19382030)
#define CLASS_1_D46F34EB478F0887_WRITETO_OFFSET UNITYSDK_OFFSET(0x19382090)
#define CLASS_1_D46F34EB478F0887__CCTOR_OFFSET UNITYSDK_OFFSET(0x193827E0)
#define CLASS_1_D46F34EB478F0887__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193819E0)
#define CLASS_1_D46F34EB478F0887__CTOR_OFFSET UNITYSDK_OFFSET(0x193819C0)

inline static constexpr unsigned int Class_1_D46F34EB478F0887_TypeDefinitionIndex = 28409;

class Class_1_D46F34EB478F0887 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D46F34EB478F0887*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D46F34EB478F0887*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D46F34EB478F0887_TypeDefinitionIndex)->GetStaticField(0x33A20);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x3; // 0x0
	::System::String* Field_1_3; // 0x10
	::Proto::ItemList* Field_1_5; // 0x18
	::System::String* Field_1_9; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x28
	::System::UInt64 Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D46F34EB478F0887* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D46F34EB478F0887*))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D46F34EB478F0887*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D46F34EB478F0887*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D46F34EB478F0887* Clone()
	{
		return ((::Class_1_D46F34EB478F0887*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_METHOD_1_9CE3056B66B7573D_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D46F34EB478F0887* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D46F34EB478F0887*))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D46F34EB478F0887* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D46F34EB478F0887*))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D46F34EB478F0887_MERGEFROM_1_OFFSET))(this, a1);
	}
};
