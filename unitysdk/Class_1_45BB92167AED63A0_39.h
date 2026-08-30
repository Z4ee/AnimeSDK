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

#define CLASS_1_45BB92167AED63A0_39_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E96B340)
#define CLASS_1_45BB92167AED63A0_39_CLONE_OFFSET UNITYSDK_OFFSET(0x1E96AE40)
#define CLASS_1_45BB92167AED63A0_39_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E96AFF0)
#define CLASS_1_45BB92167AED63A0_39_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E96AEC0)
#define CLASS_1_45BB92167AED63A0_39_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E96B0E0)
#define CLASS_1_45BB92167AED63A0_39_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E96B4A0)
#define CLASS_1_45BB92167AED63A0_39_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E96B450)
#define CLASS_1_45BB92167AED63A0_39_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E96AE90)
#define CLASS_1_45BB92167AED63A0_39_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E96ACF0)
#define CLASS_1_45BB92167AED63A0_39_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E96AEB0)
#define CLASS_1_45BB92167AED63A0_39_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E96AEA0)
#define CLASS_1_45BB92167AED63A0_39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E96AD50)
#define CLASS_1_45BB92167AED63A0_39_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E96B1E0)
#define CLASS_1_45BB92167AED63A0_39_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E96B240)
#define CLASS_1_45BB92167AED63A0_39__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96B670)
#define CLASS_1_45BB92167AED63A0_39__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E96ADB0)
#define CLASS_1_45BB92167AED63A0_39__CTOR_OFFSET UNITYSDK_OFFSET(0x1E96AD60)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_39_TypeDefinitionIndex = 28107;

class Class_1_45BB92167AED63A0_39 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_39*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_39*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_39_TypeDefinitionIndex)->GetStaticField(0x3E100);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PGABLILFKNH()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_39_TypeDefinitionIndex)->GetStaticField(0x3E108);
	}
	// static const ::System::Int32 PIACMPBJOIK = 0x4; // 0x0
	// static const ::System::Int32 EDCOLDPLGAA = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KDKCGFGBJNE; // 0x18
	::System::UInt32 KJAENGKDFJD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_39*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_39*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_39*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_39* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_39* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_39*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_39*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_39_MERGEFROM_1_OFFSET))(this, a1);
	}
};
