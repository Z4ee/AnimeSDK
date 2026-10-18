#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_111;
class Class_1_D05699509194BF9B_Class_1_8BBD2022B209D64F;
class Class_1_FD893FD36F6A3A6D_2;

#define CLASS_1_D05699509194BF9B_CLASS_1_8BBD2022B209D64F___C__DISPLAYCLASS5_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0x1C54C380)
#define CLASS_1_D05699509194BF9B_CLASS_1_8BBD2022B209D64F___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54C270)

inline static constexpr unsigned int Class_1_D05699509194BF9B_Class_1_8BBD2022B209D64F___c__DisplayClass5_0_TypeDefinitionIndex = 41805;

class Class_1_D05699509194BF9B_Class_1_8BBD2022B209D64F___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_D05699509194BF9B_Class_1_8BBD2022B209D64F* __4__this; // 0x10
	::UnityEngine::Vector2Int boardSize; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_CLASS_1_8BBD2022B209D64F___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::Class_1_FD893FD36F6A3A6D_2* _Create_b__0(::Class_0_16E4307DCC419505_111* a1)
	{
		return ((::Class_1_FD893FD36F6A3A6D_2*(*)(::PVOID, ::Class_0_16E4307DCC419505_111*))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_CLASS_1_8BBD2022B209D64F___C__DISPLAYCLASS5_0__CREATE_B__0_OFFSET))(this, a1);
	}
};
