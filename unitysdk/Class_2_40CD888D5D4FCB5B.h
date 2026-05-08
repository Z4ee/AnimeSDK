#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystem.h"

#define CLASS_2_40CD888D5D4FCB5B__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD4360)

inline static constexpr unsigned int Class_2_40CD888D5D4FCB5B_TypeDefinitionIndex = 77970;

class Class_2_40CD888D5D4FCB5B : public ::Nap::NapECS::EcsSystem
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40CD888D5D4FCB5B__CTOR_OFFSET))(this);
	}
};
