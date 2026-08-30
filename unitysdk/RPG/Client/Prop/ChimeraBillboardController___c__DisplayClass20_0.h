#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDC09F50)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER___C__DISPLAYCLASS20_0__SETTARGETPOSITION_B__0_OFFSET UNITYSDK_OFFSET(0xDC0A050)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBillboardController___c__DisplayClass20_0_TypeDefinitionIndex = 77999;

	class ChimeraBillboardController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetTargetPosition_b__0(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER___C__DISPLAYCLASS20_0__SETTARGETPOSITION_B__0_OFFSET))(this, a1);
		}
	};
}
