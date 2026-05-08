#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ResourceModeBase.h"

namespace System { class Action; }

#define CLASS_2_FBDB0E423739687E__CTOR_OFFSET UNITYSDK_OFFSET(0x14121830)

inline static constexpr unsigned int Class_2_FBDB0E423739687E_TypeDefinitionIndex = 40056;

class Class_2_FBDB0E423739687E : public ::ResourceModeBase
{
public:
	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_FBDB0E423739687E__CTOR_OFFSET))(this, a1);
	}
};
