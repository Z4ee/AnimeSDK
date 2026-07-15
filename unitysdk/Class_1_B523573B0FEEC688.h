#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_B523573B0FEEC688_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x170B9160)
#define CLASS_1_B523573B0FEEC688__CTOR_OFFSET UNITYSDK_OFFSET(0x170B91B0)

inline static constexpr unsigned int Class_1_B523573B0FEEC688_TypeDefinitionIndex = 55032;

class Class_1_B523573B0FEEC688 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B523573B0FEEC688__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B523573B0FEEC688_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}
};
