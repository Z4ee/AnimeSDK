#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_7C7A04186B9F588B_GET_CMDID_OFFSET UNITYSDK_OFFSET(0x18753CD0)
#define CLASS_2_7C7A04186B9F588B__CTOR_OFFSET UNITYSDK_OFFSET(0x18753CE0)

inline static constexpr unsigned int Class_2_7C7A04186B9F588B_TypeDefinitionIndex = 69366;

class Class_2_7C7A04186B9F588B : public ::System::Exception
{
public:
	::System::UInt16 _CmdID_k__BackingField; // 0x88

	::System::Void _ctor(::System::UInt16 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7C7A04186B9F588B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt16 get_CmdID()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C7A04186B9F588B_GET_CMDID_OFFSET))(this);
	}
};
