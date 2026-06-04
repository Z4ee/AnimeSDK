#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1F539D99D6C56687;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define CLASS_1_1F539D99D6C56687___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDE68C00)
#define CLASS_1_1F539D99D6C56687___C__DISPLAYCLASS11_0__PRELOADTIMELINEREFASSETS_B__0_OFFSET UNITYSDK_OFFSET(0xDE69300)

inline static constexpr unsigned int Class_1_1F539D99D6C56687___c__DisplayClass11_0_TypeDefinitionIndex = 45768;

class Class_1_1F539D99D6C56687___c__DisplayClass11_0 : public ::System::Object
{
public:
	::System::String* profilePath; // 0x10
	::Class_1_1F539D99D6C56687* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F539D99D6C56687___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _PreloadTimelineRefAssets_b__0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_1F539D99D6C56687___C__DISPLAYCLASS11_0__PRELOADTIMELINEREFASSETS_B__0_OFFSET))(this, a1);
	}
};
