#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_31B0621ED9123203_METHOD_1_FFCB224AF9B758E1_OFFSET UNITYSDK_OFFSET(0x16716B90)
#define CLASS_1_31B0621ED9123203__CTOR_OFFSET UNITYSDK_OFFSET(0x16716C30)

inline static constexpr unsigned int Class_1_31B0621ED9123203_TypeDefinitionIndex = 28448;

class Class_1_31B0621ED9123203 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31B0621ED9123203__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_FFCB224AF9B758E1(::System::Int32 a1, ::RPG::GameCore::DiceCombatValueCompare a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::RPG::GameCore::DiceCombatValueCompare, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_31B0621ED9123203_METHOD_1_FFCB224AF9B758E1_OFFSET))(a1, a2, a3);
	}
};
