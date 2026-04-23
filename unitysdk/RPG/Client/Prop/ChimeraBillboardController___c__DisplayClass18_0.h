#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xADBBF90)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER___C__DISPLAYCLASS18_0__SETTARGET_B__0_OFFSET UNITYSDK_OFFSET(0xADBC150)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBillboardController___c__DisplayClass18_0_TypeDefinitionIndex = 71965;

	class ChimeraBillboardController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetTarget_b__0(::UnityEngine::Transform* settee)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER___C__DISPLAYCLASS18_0__SETTARGET_B__0_OFFSET))(this, settee);
		}
	};
}
