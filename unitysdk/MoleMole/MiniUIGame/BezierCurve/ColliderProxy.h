#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Collider2D; }

#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_COLLIDERPROXY_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x129AEB80)
#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_COLLIDERPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x129AEBD0)

namespace MoleMole::MiniUIGame::BezierCurve
{
	inline static constexpr unsigned int ColliderProxy_TypeDefinitionIndex = 44860;

	class ColliderProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_COLLIDERPROXY__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_COLLIDERPROXY_ONTRIGGERENTER2D_OFFSET))(this, a1);
		}
	};
}
