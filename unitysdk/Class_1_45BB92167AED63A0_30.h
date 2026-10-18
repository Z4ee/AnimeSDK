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

#define CLASS_1_45BB92167AED63A0_30_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3A4310)
#define CLASS_1_45BB92167AED63A0_30_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3A3D40)
#define CLASS_1_45BB92167AED63A0_30_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3A3F00)
#define CLASS_1_45BB92167AED63A0_30_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3A3DB0)
#define CLASS_1_45BB92167AED63A0_30_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3A4010)
#define CLASS_1_45BB92167AED63A0_30_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3A4440)
#define CLASS_1_45BB92167AED63A0_30_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3A43E0)
#define CLASS_1_45BB92167AED63A0_30_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E3A3B50)
#define CLASS_1_45BB92167AED63A0_30_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1E3A3DA0)
#define CLASS_1_45BB92167AED63A0_30_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E3A3D90)
#define CLASS_1_45BB92167AED63A0_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3A3BB0)
#define CLASS_1_45BB92167AED63A0_30_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3A41D0)
#define CLASS_1_45BB92167AED63A0_30_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3A4230)
#define CLASS_1_45BB92167AED63A0_30__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A4580)
#define CLASS_1_45BB92167AED63A0_30__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3A3C50)
#define CLASS_1_45BB92167AED63A0_30__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A3BC0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_30_TypeDefinitionIndex = 27625;

class Class_1_45BB92167AED63A0_30 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_30*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_30*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_30_TypeDefinitionIndex)->GetStaticField(0x60B10);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HKGCEKNGLEG()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_30_TypeDefinitionIndex)->GetStaticField(0x60B18);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MHJNOFMIGFL()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_30_TypeDefinitionIndex)->GetStaticField(0x60B20);
	}
	// static const ::System::Int32 JCOCCJNLOBJ = 0xB; // 0x0
	// static const ::System::Int32 LLMFGOFPODL = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHLKOHLNFG; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AHJLAAIILKN; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_30*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_30*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_30*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_30* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_30* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_30*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_30*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_MERGEFROM_1_OFFSET))(this, a1);
	}
};
