#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D1B623B440377B6F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB78DA0)
#define CLASS_1_D1B623B440377B6F_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB78890)
#define CLASS_1_D1B623B440377B6F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB78AA0)
#define CLASS_1_D1B623B440377B6F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB78910)
#define CLASS_1_D1B623B440377B6F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB78BC0)
#define CLASS_1_D1B623B440377B6F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB78F50)
#define CLASS_1_D1B623B440377B6F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB78ED0)
#define CLASS_1_D1B623B440377B6F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EB788F0)
#define CLASS_1_D1B623B440377B6F_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1EB78710)
#define CLASS_1_D1B623B440377B6F_METHOD_1_47587B9526E5B08E_OFFSET UNITYSDK_OFFSET(0x1EB788E0)
#define CLASS_1_D1B623B440377B6F_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EB78900)
#define CLASS_1_D1B623B440377B6F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB78770)
#define CLASS_1_D1B623B440377B6F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB78C30)
#define CLASS_1_D1B623B440377B6F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB78C90)
#define CLASS_1_D1B623B440377B6F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB79120)
#define CLASS_1_D1B623B440377B6F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB787D0)
#define CLASS_1_D1B623B440377B6F__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB78780)

inline static constexpr unsigned int Class_1_D1B623B440377B6F_TypeDefinitionIndex = 28722;

class Class_1_D1B623B440377B6F : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>** StaticGet_NHNLMKGMPNB()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1B623B440377B6F_TypeDefinitionIndex)->GetStaticField(0x3310);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D1B623B440377B6F*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D1B623B440377B6F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1B623B440377B6F_TypeDefinitionIndex)->GetStaticField(0x3318);
	}
	// static const ::System::Int32 JCGCCDCNBDN = 0xA; // 0x0
	// static const ::System::Int32 HMPOPDNNFOB = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* ABHLIFEAGIG; // 0x18
	::System::UInt32 MJBKOAFCFNE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D1B623B440377B6F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1B623B440377B6F*))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D1B623B440377B6F*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D1B623B440377B6F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D1B623B440377B6F* Clone()
	{
		return ((::Class_1_D1B623B440377B6F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* Method_1_47587B9526E5B08E()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F_METHOD_1_47587B9526E5B08E_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D1B623B440377B6F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D1B623B440377B6F*))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D1B623B440377B6F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1B623B440377B6F*))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D1B623B440377B6F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
