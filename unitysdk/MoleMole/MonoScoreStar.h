#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOSCORESTAR_SETSTARTLIGHT_OFFSET UNITYSDK_OFFSET(0x13852950)
#define MOLEMOLE_MONOSCORESTAR__CTOR_OFFSET UNITYSDK_OFFSET(0x138529F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoScoreStar_TypeDefinitionIndex = 63396;

	class MonoScoreStar : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* off; // 0x18
		::UnityEngine::GameObject* on; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCORESTAR__CTOR_OFFSET))(this);
		}

		::System::Void SetStartLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCORESTAR_SETSTARTLIGHT_OFFSET))(this, a1);
		}
	};
}
