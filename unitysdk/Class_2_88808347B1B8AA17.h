#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define CLASS_2_88808347B1B8AA17_GET_MSGTEXT_OFFSET UNITYSDK_OFFSET(0xD1A99F0)
#define CLASS_2_88808347B1B8AA17_GET_URL_OFFSET UNITYSDK_OFFSET(0xD1A99D0)
#define CLASS_2_88808347B1B8AA17_SET_MSGTEXT_OFFSET UNITYSDK_OFFSET(0xD1A9A00)
#define CLASS_2_88808347B1B8AA17_SET_URL_OFFSET UNITYSDK_OFFSET(0xD1A99E0)
#define CLASS_2_88808347B1B8AA17__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD1A9A70)
#define CLASS_2_88808347B1B8AA17__CTOR_2_OFFSET UNITYSDK_OFFSET(0xD1A9AE0)
#define CLASS_2_88808347B1B8AA17__CTOR_3_OFFSET UNITYSDK_OFFSET(0xD1A9B40)
#define CLASS_2_88808347B1B8AA17__CTOR_4_OFFSET UNITYSDK_OFFSET(0xD1A9BB0)
#define CLASS_2_88808347B1B8AA17__CTOR_OFFSET UNITYSDK_OFFSET(0xD1A9A10)

inline static constexpr unsigned int Class_2_88808347B1B8AA17_TypeDefinitionIndex = 56708;

class Class_2_88808347B1B8AA17 : public ::System::Exception
{
public:
	::System::String* _MsgText_k__BackingField; // 0x88
	::System::String* _URL_k__BackingField; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88808347B1B8AA17__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_88808347B1B8AA17__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_88808347B1B8AA17__CTOR_2_OFFSET))(this, a1);
	}

	::System::Void _ctor_3(::System::String* a1, ::System::Exception* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_88808347B1B8AA17__CTOR_3_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + CLASS_2_88808347B1B8AA17__CTOR_4_OFFSET))(this, a1, a2);
	}

	::System::String* get_URL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88808347B1B8AA17_GET_URL_OFFSET))(this);
	}

	::System::Void set_URL(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_88808347B1B8AA17_SET_URL_OFFSET))(this, value);
	}

	::System::String* get_MsgText()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88808347B1B8AA17_GET_MSGTEXT_OFFSET))(this);
	}

	::System::Void set_MsgText(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_88808347B1B8AA17_SET_MSGTEXT_OFFSET))(this, value);
	}
};
