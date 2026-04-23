#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/EAIState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F311E257ED87BCCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17C85D10)

inline static constexpr unsigned int Class_1_F311E257ED87BCCE_TypeDefinitionIndex = 33978;

class Class_1_F311E257ED87BCCE : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::System::Boolean Field_1_3; // 0x14
	::RPG::LittleGameShare::DiceCombatCore::EAIState Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F311E257ED87BCCE__CTOR_OFFSET))(this);
	}
};
