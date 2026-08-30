#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define CLASS_2_88808347B1B8AA17_GET_MSGTEXT_OFFSET UNITYSDK_OFFSET(0x1A6DF820)
#define CLASS_2_88808347B1B8AA17_GET_URL_OFFSET UNITYSDK_OFFSET(0x1A6DF800)
#define CLASS_2_88808347B1B8AA17_SET_MSGTEXT_OFFSET UNITYSDK_OFFSET(0x1A6DF830)
#define CLASS_2_88808347B1B8AA17_SET_URL_OFFSET UNITYSDK_OFFSET(0x1A6DF810)
#define CLASS_2_88808347B1B8AA17__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6DF8A0)
#define CLASS_2_88808347B1B8AA17__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A6DF910)
#define CLASS_2_88808347B1B8AA17__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A6DF970)
#define CLASS_2_88808347B1B8AA17__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A6DF9E0)
#define CLASS_2_88808347B1B8AA17__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6DF840)

inline static constexpr unsigned int Class_2_88808347B1B8AA17_TypeDefinitionIndex = 69350;

class Class_2_88808347B1B8AA17 : public ::System::Exception
{
public:
	::System::String* _URL_k__BackingField; // 0x88
	::System::String* _MsgText_k__BackingField; // 0x90

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

	::System::Void set_URL(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_88808347B1B8AA17_SET_URL_OFFSET))(this, a1);
	}

	::System::String* get_MsgText()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88808347B1B8AA17_GET_MSGTEXT_OFFSET))(this);
	}

	::System::Void set_MsgText(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_88808347B1B8AA17_SET_MSGTEXT_OFFSET))(this, a1);
	}
};
