#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class PerceptionSenseConfig; }

#define CLASS_1_FA9271BA53EF73F8_METHOD_1_75AE510FCABAD1BD_OFFSET UNITYSDK_OFFSET(0x115E50F0)
#define CLASS_1_FA9271BA53EF73F8__CTOR_OFFSET UNITYSDK_OFFSET(0x115E50E0)

inline static constexpr unsigned int Class_1_FA9271BA53EF73F8_TypeDefinitionIndex = 84533;

class Class_1_FA9271BA53EF73F8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA9271BA53EF73F8__CTOR_OFFSET))(this);
	}

	static ::Class_1_FA9271BA53EF73F8* Method_1_75AE510FCABAD1BD(::MoleMole::Config::PerceptionSenseConfig* a1)
	{
		return ((::Class_1_FA9271BA53EF73F8*(*)(::MoleMole::Config::PerceptionSenseConfig*))((::PBYTE)hIl2Cpp + CLASS_1_FA9271BA53EF73F8_METHOD_1_75AE510FCABAD1BD_OFFSET))(a1);
	}
};
