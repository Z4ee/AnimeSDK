#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_EFFECT_SCREENCRACK_MATTEXITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15126080)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ScreenCrack_MatTexItem_TypeDefinitionIndex = 67393;

	class Effect_ScreenCrack_MatTexItem : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* Render; // 0x10
		::System::String* TexName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_MATTEXITEM__CTOR_OFFSET))(this);
		}
	};
}
