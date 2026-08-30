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

#define CLASS_1_45BB92167AED63A0_89_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0B9070)
#define CLASS_1_45BB92167AED63A0_89_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0B8B70)
#define CLASS_1_45BB92167AED63A0_89_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0B8D20)
#define CLASS_1_45BB92167AED63A0_89_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0B8BF0)
#define CLASS_1_45BB92167AED63A0_89_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0B8E10)
#define CLASS_1_45BB92167AED63A0_89_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0B91D0)
#define CLASS_1_45BB92167AED63A0_89_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0B9180)
#define CLASS_1_45BB92167AED63A0_89_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E0B8BC0)
#define CLASS_1_45BB92167AED63A0_89_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E0B8A20)
#define CLASS_1_45BB92167AED63A0_89_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E0B8BE0)
#define CLASS_1_45BB92167AED63A0_89_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E0B8BD0)
#define CLASS_1_45BB92167AED63A0_89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0B8A80)
#define CLASS_1_45BB92167AED63A0_89_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0B8F10)
#define CLASS_1_45BB92167AED63A0_89_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0B8F70)
#define CLASS_1_45BB92167AED63A0_89__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B93A0)
#define CLASS_1_45BB92167AED63A0_89__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0B8AE0)
#define CLASS_1_45BB92167AED63A0_89__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B8A90)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_89_TypeDefinitionIndex = 32453;

class Class_1_45BB92167AED63A0_89 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_89*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_89*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_89_TypeDefinitionIndex)->GetStaticField(0x62DB0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NNHKEJIDODN()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_89_TypeDefinitionIndex)->GetStaticField(0x62DB8);
	}
	// static const ::System::Int32 OADBPFJOOLH = 0x3; // 0x0
	// static const ::System::Int32 OHGNCOKHBMF = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFLDOOGNBNG; // 0x18
	::System::UInt32 BGICDAMKGHK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_89*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_89*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_89*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_89* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_89*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_89* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_89*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_89*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_89_MERGEFROM_1_OFFSET))(this, a1);
	}
};
