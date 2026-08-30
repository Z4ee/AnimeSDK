#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90889A2023AB884E_5_GET_ISPRVBATTLEWIN_OFFSET UNITYSDK_OFFSET(0x176D8EF0)
#define CLASS_1_90889A2023AB884E_5_SET_ISPRVBATTLEWIN_OFFSET UNITYSDK_OFFSET(0x176D8F00)
#define CLASS_1_90889A2023AB884E_5__CTOR_OFFSET UNITYSDK_OFFSET(0x176D8F10)

inline static constexpr unsigned int Class_1_90889A2023AB884E_5_TypeDefinitionIndex = 74738;

class Class_1_90889A2023AB884E_5 : public ::System::Object
{
public:
	::System::Boolean _IsPrvBattleWin_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_5__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsPrvBattleWin()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_5_GET_ISPRVBATTLEWIN_OFFSET))(this);
	}

	::System::Void set_IsPrvBattleWin(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_5_SET_ISPRVBATTLEWIN_OFFSET))(this, a1);
	}
};
