#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CustomTransitionFadeOut; }
namespace System { class String; }

#define RPG_CLIENT_RPGFADEANIMATION___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180380C0)
#define RPG_CLIENT_RPGFADEANIMATION___C__DISPLAYCLASS4_0__GETANIMTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x18038210)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGFadeAnimation___c__DisplayClass4_0_TypeDefinitionIndex = 72745;

	class RPGFadeAnimation___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::String* dstControllerName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAnimType_b__0(::RPG::Client::CustomTransitionFadeOut* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CustomTransitionFadeOut*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION___C__DISPLAYCLASS4_0__GETANIMTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
