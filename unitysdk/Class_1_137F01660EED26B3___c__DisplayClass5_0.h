#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E1EB622698969937;

#define CLASS_1_137F01660EED26B3___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xABDAAE0)
#define CLASS_1_137F01660EED26B3___C__DISPLAYCLASS5_0__GETCHIMERATRANSFORM_B__0_OFFSET UNITYSDK_OFFSET(0xABDADB0)

inline static constexpr unsigned int Class_1_137F01660EED26B3___c__DisplayClass5_0_TypeDefinitionIndex = 72969;

class Class_1_137F01660EED26B3___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::UInt32 chimeraID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_137F01660EED26B3___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetChimeraTransform_b__0(::Class_1_E1EB622698969937* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E1EB622698969937*))((::PBYTE)hIl2Cpp + CLASS_1_137F01660EED26B3___C__DISPLAYCLASS5_0__GETCHIMERATRANSFORM_B__0_OFFSET))(this, a1);
	}
};
