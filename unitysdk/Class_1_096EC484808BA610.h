#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_096EC484808BA610_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x196AD0A0)
#define CLASS_1_096EC484808BA610_CLONE_OFFSET UNITYSDK_OFFSET(0x196ACE20)
#define CLASS_1_096EC484808BA610_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196ACF50)
#define CLASS_1_096EC484808BA610_EQUALS_OFFSET UNITYSDK_OFFSET(0x196ACEB0)
#define CLASS_1_096EC484808BA610_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196ACFA0)
#define CLASS_1_096EC484808BA610_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196AD1D0)
#define CLASS_1_096EC484808BA610_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196AD190)
#define CLASS_1_096EC484808BA610_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x196ACEA0)
#define CLASS_1_096EC484808BA610_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x196ACD70)
#define CLASS_1_096EC484808BA610_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x196ACE90)
#define CLASS_1_096EC484808BA610_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x196ACDD0)
#define CLASS_1_096EC484808BA610_TOSTRING_OFFSET UNITYSDK_OFFSET(0x196ACFE0)
#define CLASS_1_096EC484808BA610_WRITETO_OFFSET UNITYSDK_OFFSET(0x196AD040)
#define CLASS_1_096EC484808BA610__CCTOR_OFFSET UNITYSDK_OFFSET(0x196AD240)
#define CLASS_1_096EC484808BA610__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196ACDF0)
#define CLASS_1_096EC484808BA610__CTOR_OFFSET UNITYSDK_OFFSET(0x196ACDE0)

inline static constexpr unsigned int Class_1_096EC484808BA610_TypeDefinitionIndex = 25633;

class Class_1_096EC484808BA610 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_096EC484808BA610_TypeDefinitionIndex)->GetStaticField(0x46F50);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt64 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_096EC484808BA610* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_096EC484808BA610*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_096EC484808BA610* Clone()
	{
		return ((::Class_1_096EC484808BA610*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_096EC484808BA610* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_096EC484808BA610*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_096EC484808BA610* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_096EC484808BA610*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_MERGEFROM_1_OFFSET))(this, a1);
	}
};
