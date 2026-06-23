#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CustomSkin_ConsentBannerManager;
namespace System { class String; }

#define CUSTOMSKIN_CONSENTBANNERMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x129751C0)
#define CUSTOMSKIN_CONSENTBANNERMANAGER___C__DISPLAYCLASS16_0__GENCHECKBUTTONCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x129751D0)

inline static constexpr unsigned int CustomSkin_ConsentBannerManager___c__DisplayClass16_0_TypeDefinitionIndex = 74598;

class CustomSkin_ConsentBannerManager___c__DisplayClass16_0 : public ::System::Object
{
public:
	::CustomSkin_ConsentBannerManager* __4__this; // 0x10
	::System::String* strElementID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void _GenCheckButtonCallback_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER___C__DISPLAYCLASS16_0__GENCHECKBUTTONCALLBACK_B__0_OFFSET))(this);
	}
};
