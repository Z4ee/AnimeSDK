#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3AD2528CD53B1639_5;
class Class_1_C9DFE5EE7107C629_11;

#define CLASS_3_E44AC298AEF61426___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1263F5F0)
#define CLASS_3_E44AC298AEF61426___C__DISPLAYCLASS5_0__RESTOREGAMEREPLAY_B__0_OFFSET UNITYSDK_OFFSET(0x12650170)
#define CLASS_3_E44AC298AEF61426___C__DISPLAYCLASS5_0__RESTOREGAMEREPLAY_B__1_OFFSET UNITYSDK_OFFSET(0x126501A0)

inline static constexpr unsigned int Class_3_E44AC298AEF61426___c__DisplayClass5_0_TypeDefinitionIndex = 76565;

class Class_3_E44AC298AEF61426___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_3AD2528CD53B1639_5* match3SoloData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E44AC298AEF61426___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RestoreGameReplay_b__0(::Class_1_C9DFE5EE7107C629_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_11*))((::PBYTE)hIl2Cpp + CLASS_3_E44AC298AEF61426___C__DISPLAYCLASS5_0__RESTOREGAMEREPLAY_B__0_OFFSET))(this, a1);
	}

	::System::Boolean _RestoreGameReplay_b__1(::Class_1_C9DFE5EE7107C629_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_11*))((::PBYTE)hIl2Cpp + CLASS_3_E44AC298AEF61426___C__DISPLAYCLASS5_0__RESTOREGAMEREPLAY_B__1_OFFSET))(this, a1);
	}
};
