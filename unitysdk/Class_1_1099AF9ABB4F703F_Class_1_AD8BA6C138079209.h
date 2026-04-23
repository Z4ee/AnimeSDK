#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatGameState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1099AF9ABB4F703F_CLASS_1_AD8BA6C138079209__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3B640)

inline static constexpr unsigned int Class_1_1099AF9ABB4F703F_Class_1_AD8BA6C138079209_TypeDefinitionIndex = 34279;

class Class_1_1099AF9ABB4F703F_Class_1_AD8BA6C138079209 : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x14
	::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState Field_1_0; // 0x15

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1099AF9ABB4F703F_CLASS_1_AD8BA6C138079209__CTOR_OFFSET))(this);
	}
};
