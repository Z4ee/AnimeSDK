#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5FF2340E88CFFA8C;
namespace RPG::Client { class BaseShaderPropertyTransition; }

#define CLASS_2_5FF2340E88CFFA8C___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4A160)
#define CLASS_2_5FF2340E88CFFA8C___C__DISPLAYCLASS14_0___BEGINFADEOUT_DITHERMODE_B__0_OFFSET UNITYSDK_OFFSET(0x12B4A520)

inline static constexpr unsigned int Class_2_5FF2340E88CFFA8C___c__DisplayClass14_0_TypeDefinitionIndex = 52867;

class Class_2_5FF2340E88CFFA8C___c__DisplayClass14_0 : public ::System::Object
{
public:
	::RPG::Client::BaseShaderPropertyTransition* spt; // 0x10
	::Class_2_5FF2340E88CFFA8C* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Void __BeginFadeOut_DitherMode_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C___C__DISPLAYCLASS14_0___BEGINFADEOUT_DITHERMODE_B__0_OFFSET))(this);
	}
};
