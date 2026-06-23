#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_BULLETSTATS__CTOR_OFFSET UNITYSDK_OFFSET(0x18171970)

namespace MoleMole
{
	inline static constexpr unsigned int ShootingGroundSubsystem_BulletStats_TypeDefinitionIndex = 54035;

	class ShootingGroundSubsystem_BulletStats : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* RecoilToRadYBaseCurve; // 0x10
		::UnityEngine::AnimationCurve* SpreadToRadXCurve; // 0x18
		::Il2CppArray<::System::String*>* HitEffectPatterns; // 0x20
		::UnityEngine::AnimationCurve* RecoilToRadXRandomCurve; // 0x28
		::UnityEngine::AnimationCurve* RecoilToRadXBaseCurve; // 0x30
		::UnityEngine::AnimationCurve* RecoilToRadXMaxCurve; // 0x38
		::UnityEngine::AnimationCurve* RecoilToRadYRandomCurve; // 0x40
		::UnityEngine::AnimationCurve* SpreadToRadYCurve; // 0x48
		::UnityEngine::AnimationCurve* RecoilToRadYMaxCurve; // 0x50
		::System::Int32 HeadshotDamage; // 0x58
		::System::Int32 BaseDamage; // 0x5C
		::System::Single Recoil; // 0x60
		::System::Single Spread; // 0x64
		::System::Boolean CanPierce; // 0x68
		::UnityEngine::Color DebugColor; // 0x6C
		::System::Int32 ShieldDamage; // 0x7C
		::System::Int32 AmmoCost; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_BULLETSTATS__CTOR_OFFSET))(this);
		}
	};
}
