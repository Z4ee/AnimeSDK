#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CustomTransitionFadeOut; }
namespace System { class String; }

#define RPG_CLIENT_RPGFADEANIMATION___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA255710)
#define RPG_CLIENT_RPGFADEANIMATION___C__DISPLAYCLASS3_0__GETFADEOUTANIM_B__0_OFFSET UNITYSDK_OFFSET(0xA255930)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGFadeAnimation___c__DisplayClass3_0_TypeDefinitionIndex = 59691;

	class RPGFadeAnimation___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::String* dstControllerName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFadeOutAnim_b__0(::RPG::Client::CustomTransitionFadeOut* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CustomTransitionFadeOut*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION___C__DISPLAYCLASS3_0__GETFADEOUTANIM_B__0_OFFSET))(this, x);
		}
	};
}
