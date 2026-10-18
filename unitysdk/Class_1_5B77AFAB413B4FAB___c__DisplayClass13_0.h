#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_118;

#define CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C543BA0)
#define CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS13_0___DETERMINEBANCELLSCHEME_B__0_OFFSET UNITYSDK_OFFSET(0x1C544EC0)

inline static constexpr unsigned int Class_1_5B77AFAB413B4FAB___c__DisplayClass13_0_TypeDefinitionIndex = 41817;

class Class_1_5B77AFAB413B4FAB___c__DisplayClass13_0 : public ::System::Object
{
public:
	::UnityEngine::Vector2Int boardSize; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __DetermineBanCellScheme_b__0(::Class_0_16E4307DCC419505_118* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_118*))((::PBYTE)hIl2Cpp + CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS13_0___DETERMINEBANCELLSCHEME_B__0_OFFSET))(this, a1);
	}
};
