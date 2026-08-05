#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ShootingGroundSubsystem_BulletMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGSHOOTINGGROUNDBULLETTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1437F850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShootingGroundBulletType_TypeDefinitionIndex = 63980;

	class ConfigShootingGroundBulletType : public ::System::Object
	{
	public:
		::MoleMole::ShootingGroundSubsystem_BulletMode Mode; // 0x10
		::System::Boolean IsPenetrate; // 0x14
		::UnityEngine::Color DebugColor; // 0x18
		::Il2CppArray<::System::String*>* HitEffectPatterns; // 0x28
		::System::Single Recoil; // 0x30
		::UnityEngine::AnimationCurve* RecoilToRadXBaseCurve; // 0x38
		::UnityEngine::AnimationCurve* RecoilToRadYBaseCurve; // 0x40
		::UnityEngine::AnimationCurve* RecoilToRadXRandomCurve; // 0x48
		::UnityEngine::AnimationCurve* RecoilToRadYRandomCurve; // 0x50
		::UnityEngine::AnimationCurve* RecoilToRadXMaxCurve; // 0x58
		::UnityEngine::AnimationCurve* RecoilToRadYMaxCurve; // 0x60
		::System::Single Spread; // 0x68
		::UnityEngine::AnimationCurve* SpreadToRadXCurve; // 0x70
		::UnityEngine::AnimationCurve* SpreadToRadYCurve; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOOTINGGROUNDBULLETTYPE__CTOR_OFFSET))(this);
		}
	};
}
