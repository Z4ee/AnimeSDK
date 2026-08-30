#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraWorkState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B3A962E3BD940299__CTOR_OFFSET UNITYSDK_OFFSET(0x1C60DFE0)

inline static constexpr unsigned int Class_1_B3A962E3BD940299_TypeDefinitionIndex = 40410;

class Class_1_B3A962E3BD940299 : public ::System::Object
{
public:
	::System::Int32 LLBJAJNCEAL; // 0x10
	::System::Int32 GMDBHJKEAEI; // 0x14
	::System::UInt32 FLOMEHIPGMK; // 0x18
	::RPG::Client::LittleGame::ChimeraWorkState MEPFOEEGBEA; // 0x1C
	::System::UInt32 GGKPLJJMBBA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3A962E3BD940299__CTOR_OFFSET))(this);
	}
};
