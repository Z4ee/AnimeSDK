#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerAssistInfo; }
namespace System { class String; }

#define CLASS_1_9C053025610AF74B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A3C1380)
#define CLASS_1_9C053025610AF74B_CLONE_OFFSET UNITYSDK_OFFSET(0x1A3C1000)
#define CLASS_1_9C053025610AF74B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A3C1170)
#define CLASS_1_9C053025610AF74B_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A3C10C0)
#define CLASS_1_9C053025610AF74B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A3C1220)
#define CLASS_1_9C053025610AF74B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A3C14C0)
#define CLASS_1_9C053025610AF74B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A3C1450)
#define CLASS_1_9C053025610AF74B_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A3C1080)
#define CLASS_1_9C053025610AF74B_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A3C0F40)
#define CLASS_1_9C053025610AF74B_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A3C1090)
#define CLASS_1_9C053025610AF74B_METHOD_1_89019532EF66F500_OFFSET UNITYSDK_OFFSET(0x1A3C10A0)
#define CLASS_1_9C053025610AF74B_METHOD_1_F09A446558DACFC3_OFFSET UNITYSDK_OFFSET(0x1A3C10B0)
#define CLASS_1_9C053025610AF74B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A3C0F70)
#define CLASS_1_9C053025610AF74B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A3C12A0)
#define CLASS_1_9C053025610AF74B_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A3C1300)
#define CLASS_1_9C053025610AF74B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3C1650)
#define CLASS_1_9C053025610AF74B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3C0F90)
#define CLASS_1_9C053025610AF74B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3C0F80)

inline static constexpr unsigned int Class_1_9C053025610AF74B_TypeDefinitionIndex = 27273;

class Class_1_9C053025610AF74B : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9C053025610AF74B*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9C053025610AF74B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9C053025610AF74B_TypeDefinitionIndex)->GetStaticField(0x608E0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	::Proto::PlayerAssistInfo* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9C053025610AF74B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C053025610AF74B*))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9C053025610AF74B*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9C053025610AF74B*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9C053025610AF74B* Clone()
	{
		return ((::Class_1_9C053025610AF74B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::PlayerAssistInfo* Method_1_89019532EF66F500()
	{
		return ((::Proto::PlayerAssistInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_METHOD_1_89019532EF66F500_OFFSET))(this);
	}

	::System::Void Method_1_F09A446558DACFC3(::Proto::PlayerAssistInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_METHOD_1_F09A446558DACFC3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9C053025610AF74B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9C053025610AF74B*))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9C053025610AF74B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C053025610AF74B*))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
