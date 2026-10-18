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

#define CLASS_1_45BB92167AED63A0_99_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1B4480)
#define CLASS_1_45BB92167AED63A0_99_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1B3FF0)
#define CLASS_1_45BB92167AED63A0_99_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1B4150)
#define CLASS_1_45BB92167AED63A0_99_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1B4050)
#define CLASS_1_45BB92167AED63A0_99_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1B4240)
#define CLASS_1_45BB92167AED63A0_99_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1B45C0)
#define CLASS_1_45BB92167AED63A0_99_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1B4570)
#define CLASS_1_45BB92167AED63A0_99_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E1B4030)
#define CLASS_1_45BB92167AED63A0_99_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E1B4020)
#define CLASS_1_45BB92167AED63A0_99_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E1B3ED0)
#define CLASS_1_45BB92167AED63A0_99_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E1B4040)
#define CLASS_1_45BB92167AED63A0_99_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1B3F00)
#define CLASS_1_45BB92167AED63A0_99_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1B4340)
#define CLASS_1_45BB92167AED63A0_99_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1B43A0)
#define CLASS_1_45BB92167AED63A0_99__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B4780)
#define CLASS_1_45BB92167AED63A0_99__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1B3F60)
#define CLASS_1_45BB92167AED63A0_99__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B3F10)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_99_TypeDefinitionIndex = 34137;

class Class_1_45BB92167AED63A0_99 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HOEKGEEKEHI()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_99_TypeDefinitionIndex)->GetStaticField(0x34FB0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_99*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_99*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_99_TypeDefinitionIndex)->GetStaticField(0x34FB8);
	}
	// static const ::System::Int32 IPAMJEJOGBG = 0xD; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHKEOJHJHCK; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_99*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_99*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_99*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_99* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_99*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_99* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_99*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_99*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_99_MERGEFROM_1_OFFSET))(this, a1);
	}
};
