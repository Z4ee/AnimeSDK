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
namespace System { class String; }

#define CLASS_1_45BB92167AED63A0_29_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB83730)
#define CLASS_1_45BB92167AED63A0_29_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB83160)
#define CLASS_1_45BB92167AED63A0_29_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB83320)
#define CLASS_1_45BB92167AED63A0_29_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB831D0)
#define CLASS_1_45BB92167AED63A0_29_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB83430)
#define CLASS_1_45BB92167AED63A0_29_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB83860)
#define CLASS_1_45BB92167AED63A0_29_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB83800)
#define CLASS_1_45BB92167AED63A0_29_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1EB82F70)
#define CLASS_1_45BB92167AED63A0_29_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1EB831C0)
#define CLASS_1_45BB92167AED63A0_29_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1EB831B0)
#define CLASS_1_45BB92167AED63A0_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB82FD0)
#define CLASS_1_45BB92167AED63A0_29_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB835F0)
#define CLASS_1_45BB92167AED63A0_29_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB83650)
#define CLASS_1_45BB92167AED63A0_29__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB839A0)
#define CLASS_1_45BB92167AED63A0_29__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB83070)
#define CLASS_1_45BB92167AED63A0_29__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB82FE0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_29_TypeDefinitionIndex = 27123;

class Class_1_45BB92167AED63A0_29 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HKGCEKNGLEG()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_29_TypeDefinitionIndex)->GetStaticField(0x4C60);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MHJNOFMIGFL()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_29_TypeDefinitionIndex)->GetStaticField(0x4C68);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_29*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_29*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_29_TypeDefinitionIndex)->GetStaticField(0x4C70);
	}
	// static const ::System::Int32 JCOCCJNLOBJ = 0x9; // 0x0
	// static const ::System::Int32 LLMFGOFPODL = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHLKOHLNFG; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AHJLAAIILKN; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_29*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_29*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_29*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_29* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_29* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_29*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_29*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_29_MERGEFROM_1_OFFSET))(this, a1);
	}
};
