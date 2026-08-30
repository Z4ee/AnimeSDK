#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B788DE67DB2A3CD6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E024C90)
#define CLASS_1_B788DE67DB2A3CD6_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0244F0)
#define CLASS_1_B788DE67DB2A3CD6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E024600)
#define CLASS_1_B788DE67DB2A3CD6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0245A0)
#define CLASS_1_B788DE67DB2A3CD6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0248D0)
#define CLASS_1_B788DE67DB2A3CD6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E024D40)
#define CLASS_1_B788DE67DB2A3CD6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E024CE0)
#define CLASS_1_B788DE67DB2A3CD6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E024440)
#define CLASS_1_B788DE67DB2A3CD6_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x1E024580)
#define CLASS_1_B788DE67DB2A3CD6_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1E024560)
#define CLASS_1_B788DE67DB2A3CD6_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x1E024590)
#define CLASS_1_B788DE67DB2A3CD6_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1E024570)
#define CLASS_1_B788DE67DB2A3CD6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0244A0)
#define CLASS_1_B788DE67DB2A3CD6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E024B10)
#define CLASS_1_B788DE67DB2A3CD6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E024B70)
#define CLASS_1_B788DE67DB2A3CD6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E024EC0)
#define CLASS_1_B788DE67DB2A3CD6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0244C0)
#define CLASS_1_B788DE67DB2A3CD6__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0244B0)

inline static constexpr unsigned int Class_1_B788DE67DB2A3CD6_TypeDefinitionIndex = 28178;

class Class_1_B788DE67DB2A3CD6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_B788DE67DB2A3CD6*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B788DE67DB2A3CD6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B788DE67DB2A3CD6_TypeDefinitionIndex)->GetStaticField(0x35230);
	}
	// static const ::System::Int32 OAPJNMPOKHB = 0xA; // 0x0
	// static const ::System::Int32 PLAGKJDJGBN = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Single EIKLKDGDLEG; // 0x18
	::System::Single KFNMMILCBFP; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B788DE67DB2A3CD6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B788DE67DB2A3CD6*))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B788DE67DB2A3CD6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B788DE67DB2A3CD6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B788DE67DB2A3CD6* Clone()
	{
		return ((::Class_1_B788DE67DB2A3CD6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_CLONE_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B788DE67DB2A3CD6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B788DE67DB2A3CD6*))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B788DE67DB2A3CD6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B788DE67DB2A3CD6*))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B788DE67DB2A3CD6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
