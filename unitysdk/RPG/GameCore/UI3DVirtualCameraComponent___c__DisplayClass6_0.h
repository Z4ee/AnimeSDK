#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BlendDefinitionInfo; }

#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB862C20)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT___C__DISPLAYCLASS6_0__SETBLEND_B__0_OFFSET UNITYSDK_OFFSET(0xB8633F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DVirtualCameraComponent___c__DisplayClass6_0_TypeDefinitionIndex = 53055;

	class UI3DVirtualCameraComponent___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetBlend_b__0(::RPG::Client::BlendDefinitionInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlendDefinitionInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT___C__DISPLAYCLASS6_0__SETBLEND_B__0_OFFSET))(this, x);
		}
	};
}
