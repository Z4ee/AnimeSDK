#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_703;
namespace System { class Action; }

#define CLASS_2_658B22B1CB3FAE7F___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAB3A340)
#define CLASS_2_658B22B1CB3FAE7F___C__DISPLAYCLASS0_0__SENDPIXAIRPAUSESTAGECSREQWITHCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xAB3A360)

inline static constexpr unsigned int Class_2_658B22B1CB3FAE7F___c__DisplayClass0_0_TypeDefinitionIndex = 73690;

class Class_2_658B22B1CB3FAE7F___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Action* callback; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_658B22B1CB3FAE7F___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _SendPixAirPauseStageCsReqWithCallback_b__0(::Class_1_D17272E82AE804C2_703* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_703*))((::PBYTE)hIl2Cpp + CLASS_2_658B22B1CB3FAE7F___C__DISPLAYCLASS0_0__SENDPIXAIRPAUSESTAGECSREQWITHCALLBACK_B__0_OFFSET))(this, a1);
	}
};
