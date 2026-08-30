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

#define CLASS_1_45BB92167AED63A0_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8B9F00)
#define CLASS_1_45BB92167AED63A0_27_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8B9A70)
#define CLASS_1_45BB92167AED63A0_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8B9BD0)
#define CLASS_1_45BB92167AED63A0_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8B9AD0)
#define CLASS_1_45BB92167AED63A0_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8B9CC0)
#define CLASS_1_45BB92167AED63A0_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8BA030)
#define CLASS_1_45BB92167AED63A0_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8B9FE0)
#define CLASS_1_45BB92167AED63A0_27_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E8B9AA0)
#define CLASS_1_45BB92167AED63A0_27_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E8B9AC0)
#define CLASS_1_45BB92167AED63A0_27_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E8B9950)
#define CLASS_1_45BB92167AED63A0_27_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E8B9AB0)
#define CLASS_1_45BB92167AED63A0_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8B9980)
#define CLASS_1_45BB92167AED63A0_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8B9DC0)
#define CLASS_1_45BB92167AED63A0_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8B9E20)
#define CLASS_1_45BB92167AED63A0_27__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BA1E0)
#define CLASS_1_45BB92167AED63A0_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8B99E0)
#define CLASS_1_45BB92167AED63A0_27__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B9990)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_27_TypeDefinitionIndex = 26889;

class Class_1_45BB92167AED63A0_27 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_27*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_27*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_27_TypeDefinitionIndex)->GetStaticField(0x42E80);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PAMIBPNBFGJ()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_27_TypeDefinitionIndex)->GetStaticField(0x42E88);
	}
	// static const ::System::Int32 NDDAKDFJBOD = 0x4; // 0x0
	// static const ::System::Int32 BDJJKOKKDID = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OGKKDOELDPJ; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 GDNNKAAPOBM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_27*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_27*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_27*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_27* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_27*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_27*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};
