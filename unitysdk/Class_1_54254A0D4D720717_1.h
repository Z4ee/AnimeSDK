#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_54254A0D4D720717_1_GET_ISPRVBATTLEWIN_OFFSET UNITYSDK_OFFSET(0x11573310)
#define CLASS_1_54254A0D4D720717_1_SET_ISPRVBATTLEWIN_OFFSET UNITYSDK_OFFSET(0x11573320)
#define CLASS_1_54254A0D4D720717_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11573330)

inline static constexpr unsigned int Class_1_54254A0D4D720717_1_TypeDefinitionIndex = 61585;

class Class_1_54254A0D4D720717_1 : public ::System::Object
{
public:
	::System::Boolean _IsPrvBattleWin_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_1__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsPrvBattleWin()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_1_GET_ISPRVBATTLEWIN_OFFSET))(this);
	}

	::System::Void set_IsPrvBattleWin(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_1_SET_ISPRVBATTLEWIN_OFFSET))(this, value);
	}
};
