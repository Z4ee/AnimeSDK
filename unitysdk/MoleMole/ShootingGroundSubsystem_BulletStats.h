#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_BULLETSTATS__CTOR_OFFSET UNITYSDK_OFFSET(0x1386BF60)

namespace MoleMole
{
	inline static constexpr unsigned int ShootingGroundSubsystem_BulletStats_TypeDefinitionIndex = 73421;

	class ShootingGroundSubsystem_BulletStats : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* HitEffectPatterns; // 0x10
		::UnityEngine::AnimationCurve* SpreadToRadXCurve; // 0x18
		::UnityEngine::AnimationCurve* SpreadToRadYCurve; // 0x20
		::UnityEngine::AnimationCurve* RecoilToRadYRandomCurve; // 0x28
		::UnityEngine::AnimationCurve* RecoilToRadXMaxCurve; // 0x30
		::UnityEngine::AnimationCurve* RecoilToRadXRandomCurve; // 0x38
		::UnityEngine::AnimationCurve* RecoilToRadYBaseCurve; // 0x40
		::UnityEngine::AnimationCurve* RecoilToRadXBaseCurve; // 0x48
		::UnityEngine::AnimationCurve* RecoilToRadYMaxCurve; // 0x50
		::System::Int32 AmmoCost; // 0x58
		::UnityEngine::Color DebugColor; // 0x5C
		::System::Single Recoil; // 0x6C
		::System::Int32 HeadshotDamage; // 0x70
		::System::Boolean CanPierce; // 0x74
		::System::Int32 ShieldDamage; // 0x78
		::System::Single Spread; // 0x7C
		::System::Int32 BaseDamage; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_BULLETSTATS__CTOR_OFFSET))(this);
		}
	};
}
