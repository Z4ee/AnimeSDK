#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC500220)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER___C__DISPLAYCLASS18_0__SETTARGET_B__0_OFFSET UNITYSDK_OFFSET(0xC500400)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBillboardController___c__DisplayClass18_0_TypeDefinitionIndex = 72987;

	class ChimeraBillboardController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetTarget_b__0(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER___C__DISPLAYCLASS18_0__SETTARGET_B__0_OFFSET))(this, a1);
		}
	};
}
