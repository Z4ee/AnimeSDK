#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_20_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E085920)
#define CLASS_1_21C7581DFE99F091_20_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0854A0)
#define CLASS_1_21C7581DFE99F091_20_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E085640)
#define CLASS_1_21C7581DFE99F091_20_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E085550)
#define CLASS_1_21C7581DFE99F091_20_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E085720)
#define CLASS_1_21C7581DFE99F091_20_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E085A90)
#define CLASS_1_21C7581DFE99F091_20_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E085A40)
#define CLASS_1_21C7581DFE99F091_20_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E085530)
#define CLASS_1_21C7581DFE99F091_20_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E0854F0)
#define CLASS_1_21C7581DFE99F091_20_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E085410)
#define CLASS_1_21C7581DFE99F091_20_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E085540)
#define CLASS_1_21C7581DFE99F091_20_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E085500)
#define CLASS_1_21C7581DFE99F091_20_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E085520)
#define CLASS_1_21C7581DFE99F091_20_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E085510)
#define CLASS_1_21C7581DFE99F091_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E085440)
#define CLASS_1_21C7581DFE99F091_20_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E085750)
#define CLASS_1_21C7581DFE99F091_20_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0857B0)
#define CLASS_1_21C7581DFE99F091_20__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E085C30)
#define CLASS_1_21C7581DFE99F091_20__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E085460)
#define CLASS_1_21C7581DFE99F091_20__CTOR_OFFSET UNITYSDK_OFFSET(0x1E085450)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_20_TypeDefinitionIndex = 26914;

class Class_1_21C7581DFE99F091_20 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_20*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_20*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_20_TypeDefinitionIndex)->GetStaticField(0x13560);
	}
	// static const ::System::Int32 GADBEOGJMCH = 0x4; // 0x0
	// static const ::System::Int32 GKKIGDJJNAF = 0xF; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 GIJAABDJGDA; // 0x18
	::System::Boolean MGHJOOLPLKO; // 0x1C
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_20*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_20*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_20*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_20* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_20* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_20*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_20*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_20_MERGEFROM_1_OFFSET))(this, a1);
	}
};
