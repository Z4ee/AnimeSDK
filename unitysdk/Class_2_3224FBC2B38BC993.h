#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_3224FBC2B38BC993_GET_CMDID_OFFSET UNITYSDK_OFFSET(0x15917FF0)
#define CLASS_2_3224FBC2B38BC993__CTOR_1_OFFSET UNITYSDK_OFFSET(0x159180E0)
#define CLASS_2_3224FBC2B38BC993__CTOR_OFFSET UNITYSDK_OFFSET(0x15918000)

inline static constexpr unsigned int Class_2_3224FBC2B38BC993_TypeDefinitionIndex = 69367;

class Class_2_3224FBC2B38BC993 : public ::System::Exception
{
public:
	::System::UInt16 _CmdID_k__BackingField; // 0x88

	::System::Void _ctor(::System::UInt16 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3224FBC2B38BC993__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::UInt16 a1, ::System::String* a2, ::System::Exception* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_3224FBC2B38BC993__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt16 get_CmdID()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3224FBC2B38BC993_GET_CMDID_OFFSET))(this);
	}
};
