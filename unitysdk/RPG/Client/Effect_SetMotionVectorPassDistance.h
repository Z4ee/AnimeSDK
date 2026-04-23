#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA202060)
#define RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA201EB0)
#define RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xA202150)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_SetMotionVectorPassDistance_TypeDefinitionIndex = 65043;

	class Effect_SetMotionVectorPassDistance : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MotionVectorPassDistance; // 0x18
		::System::Single Field_5_1; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE_ONDISABLE_OFFSET))(this);
		}
	};
}
