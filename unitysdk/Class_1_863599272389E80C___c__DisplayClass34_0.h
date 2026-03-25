#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_863599272389E80C;
namespace RPG::Client { class Stage; }

#define CLASS_1_863599272389E80C___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x114D5540)
#define CLASS_1_863599272389E80C___C__DISPLAYCLASS34_0___ONREGIONRESUMEUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x114D6340)

inline static constexpr unsigned int Class_1_863599272389E80C___c__DisplayClass34_0_TypeDefinitionIndex = 49013;

class Class_1_863599272389E80C___c__DisplayClass34_0 : public ::System::Object
{
public:
	::RPG::Client::Stage* currentStage; // 0x10
	::Class_1_863599272389E80C* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnRegionResumeUpdate_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C___C__DISPLAYCLASS34_0___ONREGIONRESUMEUPDATE_B__0_OFFSET))(this);
	}
};
