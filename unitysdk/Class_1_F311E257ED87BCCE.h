#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/EAIState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F311E257ED87BCCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A2800)

inline static constexpr unsigned int Class_1_F311E257ED87BCCE_TypeDefinitionIndex = 36190;

class Class_1_F311E257ED87BCCE : public ::System::Object
{
public:
	::RPG::LittleGameShare::DiceCombatCore::EAIState MEPFOEEGBEA; // 0x10
	::System::Boolean FJFFGBMFKNK; // 0x14
	::System::Single BJMAMHMCOEL; // 0x18
	::System::Int32 NBNGFFPLGAF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F311E257ED87BCCE__CTOR_OFFSET))(this);
	}
};
