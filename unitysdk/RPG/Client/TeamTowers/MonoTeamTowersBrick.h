#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_0_16E4307DCC419505_27;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK_GETSCREENRECT_OFFSET UNITYSDK_OFFSET(0x1A3A6D20)
#define RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK_INIT_OFFSET UNITYSDK_OFFSET(0x1A3A6CB0)
#define RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A3A71F0)
#define RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A7240)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int MonoTeamTowersBrick_TypeDefinitionIndex = 78615;

	class MonoTeamTowersBrick : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_0_16E4307DCC419505_27* PANDMEPOLJP; // 0x18
		::UnityEngine::Transform* GJLADEKGOMP; // 0x20
		::UnityEngine::Camera* IEMGKEFBPCG; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_0_16E4307DCC419505_27* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_27*, ::UnityEngine::Transform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK_INIT_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Rect GetScreenRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK_GETSCREENRECT_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK_ONDISABLE_OFFSET))(this);
		}
	};
}
