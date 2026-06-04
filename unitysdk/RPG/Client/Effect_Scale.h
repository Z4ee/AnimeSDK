#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_EFFECT_SCALE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB8856C0)
#define RPG_CLIENT_EFFECT_SCALE_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB885750)
#define RPG_CLIENT_EFFECT_SCALE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB885630)
#define RPG_CLIENT_EFFECT_SCALE__CTOR_OFFSET UNITYSDK_OFFSET(0xB885840)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_Scale_TypeDefinitionIndex = 65966;

	class Effect_Scale : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 InitialScala; // 0x18
		::UnityEngine::Vector3 AddScala; // 0x24
		::System::Boolean OverrideAnimation; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCALE__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCALE_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCALE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCALE_METHOD_5_9681042564541CD6_OFFSET))(this);
		}
	};
}
