#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90889A2023AB884E_2_GET_ISPRVBATTLEWIN_OFFSET UNITYSDK_OFFSET(0xAA9F8F0)
#define CLASS_1_90889A2023AB884E_2_SET_ISPRVBATTLEWIN_OFFSET UNITYSDK_OFFSET(0xAA9F900)
#define CLASS_1_90889A2023AB884E_2__CTOR_OFFSET UNITYSDK_OFFSET(0xAA9F910)

inline static constexpr unsigned int Class_1_90889A2023AB884E_2_TypeDefinitionIndex = 69909;

class Class_1_90889A2023AB884E_2 : public ::System::Object
{
public:
	::System::Boolean _IsPrvBattleWin_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_2__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsPrvBattleWin()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_2_GET_ISPRVBATTLEWIN_OFFSET))(this);
	}

	::System::Void set_IsPrvBattleWin(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_2_SET_ISPRVBATTLEWIN_OFFSET))(this, a1);
	}
};
