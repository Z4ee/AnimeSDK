#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_120;
class Class_0_16E4307DCC419505_128;
class Class_1_5B77AFAB413B4FAB;
class Class_1_D05699509194BF9B;

#define CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C543DE0)
#define CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS14_0___CREATECHIPMOLDS_B__0_OFFSET UNITYSDK_OFFSET(0x1C545130)

inline static constexpr unsigned int Class_1_5B77AFAB413B4FAB___c__DisplayClass14_0_TypeDefinitionIndex = 41818;

class Class_1_5B77AFAB413B4FAB___c__DisplayClass14_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_128* requirement; // 0x10
	::Class_1_5B77AFAB413B4FAB* __4__this; // 0x18
	::UnityEngine::Vector2Int boardSize; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::Class_1_D05699509194BF9B* __CreateChipMolds_b__0(::Class_0_16E4307DCC419505_120* a1)
	{
		return ((::Class_1_D05699509194BF9B*(*)(::PVOID, ::Class_0_16E4307DCC419505_120*))((::PBYTE)hIl2Cpp + CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS14_0___CREATECHIPMOLDS_B__0_OFFSET))(this, a1);
	}
};
