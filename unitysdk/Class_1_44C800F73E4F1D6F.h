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
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_44C800F73E4F1D6F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8C5300)
#define CLASS_1_44C800F73E4F1D6F_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8C4C70)
#define CLASS_1_44C800F73E4F1D6F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8C4E20)
#define CLASS_1_44C800F73E4F1D6F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8C4CF0)
#define CLASS_1_44C800F73E4F1D6F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8C4FD0)
#define CLASS_1_44C800F73E4F1D6F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8C5450)
#define CLASS_1_44C800F73E4F1D6F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8C53A0)
#define CLASS_1_44C800F73E4F1D6F_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E8C4CE0)
#define CLASS_1_44C800F73E4F1D6F_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E8C4B10)
#define CLASS_1_44C800F73E4F1D6F_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1E8C4CD0)
#define CLASS_1_44C800F73E4F1D6F_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1E8C4CC0)
#define CLASS_1_44C800F73E4F1D6F_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E8C4CB0)
#define CLASS_1_44C800F73E4F1D6F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E8C4CA0)
#define CLASS_1_44C800F73E4F1D6F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8C4B40)
#define CLASS_1_44C800F73E4F1D6F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8C5140)
#define CLASS_1_44C800F73E4F1D6F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8C51A0)
#define CLASS_1_44C800F73E4F1D6F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C5570)
#define CLASS_1_44C800F73E4F1D6F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8C4BA0)
#define CLASS_1_44C800F73E4F1D6F__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C4B50)

inline static constexpr unsigned int Class_1_44C800F73E4F1D6F_TypeDefinitionIndex = 27320;

class Class_1_44C800F73E4F1D6F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_44C800F73E4F1D6F*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_44C800F73E4F1D6F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44C800F73E4F1D6F_TypeDefinitionIndex)->GetStaticField(0x442B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IBOBFDAMEHC()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44C800F73E4F1D6F_TypeDefinitionIndex)->GetStaticField(0x442B8);
	}
	// static const ::System::Int32 KHNDJKBEEED = 0xA; // 0x0
	// static const ::System::Int32 DFABHHAPAEA = 0xB; // 0x0
	// static const ::System::Int32 AJPEEDNHODK = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJGFMICPCLP; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Proto::ItemList* MIEINLKPIMJ; // 0x20
	::System::Boolean KFLJJKIBDLE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_44C800F73E4F1D6F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_44C800F73E4F1D6F*))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_44C800F73E4F1D6F*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_44C800F73E4F1D6F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_44C800F73E4F1D6F* Clone()
	{
		return ((::Class_1_44C800F73E4F1D6F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_44C800F73E4F1D6F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_44C800F73E4F1D6F*))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_44C800F73E4F1D6F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_44C800F73E4F1D6F*))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_44C800F73E4F1D6F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
