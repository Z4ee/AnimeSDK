#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CustomTransitionFadeIn; }
namespace System { class String; }

#define RPG_CLIENT_RPGFADEANIMATION___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAF44170)
#define RPG_CLIENT_RPGFADEANIMATION___C__DISPLAYCLASS2_0__GETFADEINANIM_B__0_OFFSET UNITYSDK_OFFSET(0xAF44390)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGFadeAnimation___c__DisplayClass2_0_TypeDefinitionIndex = 67086;

	class RPGFadeAnimation___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::String* srcControllerName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFadeInAnim_b__0(::RPG::Client::CustomTransitionFadeIn* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CustomTransitionFadeIn*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION___C__DISPLAYCLASS2_0__GETFADEINANIM_B__0_OFFSET))(this, x);
		}
	};
}
