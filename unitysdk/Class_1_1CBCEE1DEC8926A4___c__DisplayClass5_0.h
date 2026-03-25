#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E1EB622698969937;

#define CLASS_1_1CBCEE1DEC8926A4___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x89B4F60)
#define CLASS_1_1CBCEE1DEC8926A4___C__DISPLAYCLASS5_0__GETCHIMERATRANSFORM_B__0_OFFSET UNITYSDK_OFFSET(0x89B5200)

inline static constexpr unsigned int Class_1_1CBCEE1DEC8926A4___c__DisplayClass5_0_TypeDefinitionIndex = 63900;

class Class_1_1CBCEE1DEC8926A4___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::UInt32 chimeraID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBCEE1DEC8926A4___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetChimeraTransform_b__0(::Class_1_E1EB622698969937* instance)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E1EB622698969937*))((::PBYTE)hIl2Cpp + CLASS_1_1CBCEE1DEC8926A4___C__DISPLAYCLASS5_0__GETCHIMERATRANSFORM_B__0_OFFSET))(this, instance);
	}
};
