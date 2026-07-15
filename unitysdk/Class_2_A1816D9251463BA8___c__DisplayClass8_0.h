#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_803;
namespace System { class Action; }

#define CLASS_2_A1816D9251463BA8___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B15D60)
#define CLASS_2_A1816D9251463BA8___C__DISPLAYCLASS8_0__SENDPIXAIRPAUSESTAGECSREQWITHCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x18B16390)

inline static constexpr unsigned int Class_2_A1816D9251463BA8___c__DisplayClass8_0_TypeDefinitionIndex = 75195;

class Class_2_A1816D9251463BA8___c__DisplayClass8_0 : public ::System::Object
{
public:
	::System::Action* callback; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1816D9251463BA8___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void _SendPixAirPauseStageCsReqWithCallback_b__0(::Class_1_D17272E82AE804C2_803* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_803*))((::PBYTE)hIl2Cpp + CLASS_2_A1816D9251463BA8___C__DISPLAYCLASS8_0__SENDPIXAIRPAUSESTAGECSREQWITHCALLBACK_B__0_OFFSET))(this, a1);
	}
};
