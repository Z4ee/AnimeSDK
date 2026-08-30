#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_096EC484808BA610_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DBF3B10)
#define CLASS_1_096EC484808BA610_CLONE_OFFSET UNITYSDK_OFFSET(0x1DBF36E0)
#define CLASS_1_096EC484808BA610_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DBF3870)
#define CLASS_1_096EC484808BA610_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DBF3770)
#define CLASS_1_096EC484808BA610_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DBF39E0)
#define CLASS_1_096EC484808BA610_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DBF3C40)
#define CLASS_1_096EC484808BA610_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DBF3C00)
#define CLASS_1_096EC484808BA610_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1DBF3760)
#define CLASS_1_096EC484808BA610_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DBF3630)
#define CLASS_1_096EC484808BA610_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1DBF3750)
#define CLASS_1_096EC484808BA610_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DBF3690)
#define CLASS_1_096EC484808BA610_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DBF3A20)
#define CLASS_1_096EC484808BA610_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DBF3A80)
#define CLASS_1_096EC484808BA610__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBF3DA0)
#define CLASS_1_096EC484808BA610__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBF36B0)
#define CLASS_1_096EC484808BA610__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBF36A0)

inline static constexpr unsigned int Class_1_096EC484808BA610_TypeDefinitionIndex = 26690;

class Class_1_096EC484808BA610 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_096EC484808BA610_TypeDefinitionIndex)->GetStaticField(0x3AD70);
	}
	// static const ::System::Int32 PAOGLMLOJHG = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt64 KEFCHELCOMG; // 0x18

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
