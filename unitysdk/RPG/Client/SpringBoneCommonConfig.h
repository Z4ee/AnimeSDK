#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SPRINGBONECOMMONCONFIG_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0xB1A6310)
#define RPG_CLIENT_SPRINGBONECOMMONCONFIG_SET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0xB1A6320)
#define RPG_CLIENT_SPRINGBONECOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB1A6330)

namespace RPG::Client
{
	inline static constexpr unsigned int SpringBoneCommonConfig_TypeDefinitionIndex = 55412;

	class SpringBoneCommonConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 _NameHash_k__BackingField; // 0x18
		::UnityEngine::AnimationCurve* DeltaYScaleCurve; // 0x20
		::UnityEngine::AnimationCurve* LookAtBoneAngleToRatioCurve; // 0x28
		::System::Single LookAtTagCommonDecayRate; // 0x30
		::System::Single LookAtTagCommonTurnRatioKeepTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRINGBONECOMMONCONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_NameHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRINGBONECOMMONCONFIG_GET_NAMEHASH_OFFSET))(this);
		}

		::System::Void set_NameHash(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRINGBONECOMMONCONFIG_SET_NAMEHASH_OFFSET))(this, value);
		}
	};
}
