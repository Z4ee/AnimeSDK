#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ResourceModeBase.h"

namespace System { class Action; }

#define CLASS_2_E6E0337F4414AD7C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x125779E0)

inline static constexpr unsigned int Class_2_E6E0337F4414AD7C_1_TypeDefinitionIndex = 83905;

class Class_2_E6E0337F4414AD7C_1 : public ::ResourceModeBase
{
public:
	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_E6E0337F4414AD7C_1__CTOR_OFFSET))(this, a1);
	}
};
