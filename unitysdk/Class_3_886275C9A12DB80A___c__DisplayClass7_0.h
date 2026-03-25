#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_886275C9A12DB80A___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x115FABE0)
#define CLASS_3_886275C9A12DB80A___C__DISPLAYCLASS7_0___PLAYDAMAGEHITSOUND_B__0_OFFSET UNITYSDK_OFFSET(0x115FB050)

inline static constexpr unsigned int Class_3_886275C9A12DB80A___c__DisplayClass7_0_TypeDefinitionIndex = 45198;

class Class_3_886275C9A12DB80A___c__DisplayClass7_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* pTarget; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void __PlayDamageHitSound_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A___C__DISPLAYCLASS7_0___PLAYDAMAGEHITSOUND_B__0_OFFSET))(this);
	}
};
