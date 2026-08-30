#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A868BEC42C72A5AC.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_93AA40F7202497D0_17_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DABFD70)
#define CLASS_1_93AA40F7202497D0_17_CLONE_OFFSET UNITYSDK_OFFSET(0x1DABF9A0)
#define CLASS_1_93AA40F7202497D0_17_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DABFAD0)
#define CLASS_1_93AA40F7202497D0_17_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DABFA00)
#define CLASS_1_93AA40F7202497D0_17_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DABFC40)
#define CLASS_1_93AA40F7202497D0_17_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DABFE70)
#define CLASS_1_93AA40F7202497D0_17_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DABFE40)
#define CLASS_1_93AA40F7202497D0_17_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1DABF9F0)
#define CLASS_1_93AA40F7202497D0_17_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DABF920)
#define CLASS_1_93AA40F7202497D0_17_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1DABF9E0)
#define CLASS_1_93AA40F7202497D0_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DABF950)
#define CLASS_1_93AA40F7202497D0_17_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DABFC70)
#define CLASS_1_93AA40F7202497D0_17_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DABFCD0)
#define CLASS_1_93AA40F7202497D0_17__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DABFFD0)
#define CLASS_1_93AA40F7202497D0_17__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DABF970)
#define CLASS_1_93AA40F7202497D0_17__CTOR_OFFSET UNITYSDK_OFFSET(0x1DABF960)

inline static constexpr unsigned int Class_1_93AA40F7202497D0_17_TypeDefinitionIndex = 31474;

class Class_1_93AA40F7202497D0_17 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_17*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93AA40F7202497D0_17_TypeDefinitionIndex)->GetStaticField(0x2D1D0);
	}
	// static const ::System::Int32 EADJJHLLGCA = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Enum_3_A868BEC42C72A5AC HNPFKBGJCEG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_93AA40F7202497D0_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_17*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_17*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_17*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_93AA40F7202497D0_17* Clone()
	{
		return ((::Class_1_93AA40F7202497D0_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_CLONE_OFFSET))(this);
	}

	::Enum_3_A868BEC42C72A5AC Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_A868BEC42C72A5AC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_A868BEC42C72A5AC a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A868BEC42C72A5AC))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_93AA40F7202497D0_17* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_93AA40F7202497D0_17*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_93AA40F7202497D0_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_17*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_MERGEFROM_1_OFFSET))(this, a1);
	}
};
