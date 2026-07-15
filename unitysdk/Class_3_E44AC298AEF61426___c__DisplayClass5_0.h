#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3AD2528CD53B1639_6;
class Class_1_3AD2528CD53B1639_7;

#define CLASS_3_E44AC298AEF61426___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14B69030)
#define CLASS_3_E44AC298AEF61426___C__DISPLAYCLASS5_0__RESTOREGAMEREPLAY_B__0_OFFSET UNITYSDK_OFFSET(0x14B79850)
#define CLASS_3_E44AC298AEF61426___C__DISPLAYCLASS5_0__RESTOREGAMEREPLAY_B__1_OFFSET UNITYSDK_OFFSET(0x14B79880)

inline static constexpr unsigned int Class_3_E44AC298AEF61426___c__DisplayClass5_0_TypeDefinitionIndex = 72652;

class Class_3_E44AC298AEF61426___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_3AD2528CD53B1639_7* match3SoloData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E44AC298AEF61426___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RestoreGameReplay_b__0(::Class_1_3AD2528CD53B1639_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3AD2528CD53B1639_6*))((::PBYTE)hIl2Cpp + CLASS_3_E44AC298AEF61426___C__DISPLAYCLASS5_0__RESTOREGAMEREPLAY_B__0_OFFSET))(this, a1);
	}

	::System::Boolean _RestoreGameReplay_b__1(::Class_1_3AD2528CD53B1639_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3AD2528CD53B1639_6*))((::PBYTE)hIl2Cpp + CLASS_3_E44AC298AEF61426___C__DISPLAYCLASS5_0__RESTOREGAMEREPLAY_B__1_OFFSET))(this, a1);
	}
};
