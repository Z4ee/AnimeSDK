#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNode_1.h"

namespace System { class Action; }

#define CLASS_3_E2F81C30C381234B_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x15661310)
#define CLASS_3_E2F81C30C381234B__CTOR_OFFSET UNITYSDK_OFFSET(0x15661370)

inline static constexpr unsigned int Class_3_E2F81C30C381234B_TypeDefinitionIndex = 61158;

class Class_3_E2F81C30C381234B : public ::RPG::Client::WorkNode_1<::System::Action*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2F81C30C381234B__CTOR_OFFSET))(this);
	}

	::System::Void OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2F81C30C381234B_ONSTARTLOADING_OFFSET))(this);
	}
};
