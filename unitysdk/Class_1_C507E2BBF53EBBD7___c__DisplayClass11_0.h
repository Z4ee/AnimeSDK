#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C507E2BBF53EBBD7;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define CLASS_1_C507E2BBF53EBBD7___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFA7BEC0)
#define CLASS_1_C507E2BBF53EBBD7___C__DISPLAYCLASS11_0__PRELOADTIMELINEREFASSETS_B__0_OFFSET UNITYSDK_OFFSET(0xFA7C6A0)

inline static constexpr unsigned int Class_1_C507E2BBF53EBBD7___c__DisplayClass11_0_TypeDefinitionIndex = 48953;

class Class_1_C507E2BBF53EBBD7___c__DisplayClass11_0 : public ::System::Object
{
public:
	::Class_1_C507E2BBF53EBBD7* __4__this; // 0x10
	::System::String* profilePath; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C507E2BBF53EBBD7___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _PreloadTimelineRefAssets_b__0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_C507E2BBF53EBBD7___C__DISPLAYCLASS11_0__PRELOADTIMELINEREFASSETS_B__0_OFFSET))(this, a1);
	}
};
