#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/DoubleScreenShiftState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_103F6ED6878FC349__CTOR_OFFSET UNITYSDK_OFFSET(0x14551590)

inline static constexpr unsigned int Class_1_103F6ED6878FC349_TypeDefinitionIndex = 77804;

class Class_1_103F6ED6878FC349 : public ::System::Object
{
public:
	::MoleMole::GalGame::DoubleScreenShiftState Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::GalGame::DoubleScreenShiftState a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::DoubleScreenShiftState))((::PBYTE)hIl2Cpp + CLASS_1_103F6ED6878FC349__CTOR_OFFSET))(this, a1);
	}
};
