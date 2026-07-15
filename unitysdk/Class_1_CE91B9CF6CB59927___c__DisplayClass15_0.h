#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CE91B9CF6CB59927;
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }

#define CLASS_1_CE91B9CF6CB59927___C__DISPLAYCLASS15_0__CONFIRM_B__0_OFFSET UNITYSDK_OFFSET(0x188D9F90)
#define CLASS_1_CE91B9CF6CB59927___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188D9BA0)

inline static constexpr unsigned int Class_1_CE91B9CF6CB59927___c__DisplayClass15_0_TypeDefinitionIndex = 70999;

class Class_1_CE91B9CF6CB59927___c__DisplayClass15_0 : public ::System::Object
{
public:
	::Class_1_CE91B9CF6CB59927* __4__this; // 0x10
	::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* selectedRelicInfo; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Void _Confirm_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927___C__DISPLAYCLASS15_0__CONFIRM_B__0_OFFSET))(this);
	}
};
