#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_EA33FC17550B1203___C__DISPLAYCLASS5_0__ADDSPHERETRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x16087520)
#define CLASS_2_EA33FC17550B1203___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x160858C0)

inline static constexpr unsigned int Class_2_EA33FC17550B1203___c__DisplayClass5_0_TypeDefinitionIndex = 70554;

class Class_2_EA33FC17550B1203___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::Action* onEnter; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddSphereTrigger_b__0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203___C__DISPLAYCLASS5_0__ADDSPHERETRIGGER_B__0_OFFSET))(this, a1);
	}
};
