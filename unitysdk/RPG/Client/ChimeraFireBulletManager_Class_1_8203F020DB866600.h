#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class ChimeraWorkFireBullet; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_CLASS_1_8203F020DB866600_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6A69A0)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_CLASS_1_8203F020DB866600_METHOD_1_79E872D90798D236_OFFSET UNITYSDK_OFFSET(0xB6A5940)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_CLASS_1_8203F020DB866600_METHOD_1_91895701433CBFE0_OFFSET UNITYSDK_OFFSET(0xB6A6570)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_CLASS_1_8203F020DB866600__CTOR_OFFSET UNITYSDK_OFFSET(0xB6A64F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraFireBulletManager_Class_1_8203F020DB866600_TypeDefinitionIndex = 64227;

	class ChimeraFireBulletManager_Class_1_8203F020DB866600 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Field_1_0; // 0x10
		::UnityEngine::AnimationCurve* Field_1_1; // 0x18
		::System::Action* Field_1_2; // 0x20
		::UnityEngine::Transform* Field_1_3; // 0x28
		::UnityEngine::Transform* Field_1_4; // 0x30
		::RPG::GameCore::ChimeraWorkFireBullet* Field_1_5; // 0x38
		::UnityEngine::AnimationCurve* Field_1_6; // 0x40
		::System::Single Field_1_7; // 0x48
		::System::Single Field_1_8; // 0x4C
		::System::Boolean Field_1_9; // 0x50

		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::RPG::GameCore::ChimeraWorkFireBullet* a3, ::UnityEngine::AnimationCurve* a4, ::UnityEngine::AnimationCurve* a5, ::System::Action* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::RPG::GameCore::ChimeraWorkFireBullet*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER_CLASS_1_8203F020DB866600__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::MonoEffect* Method_1_91895701433CBFE0()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER_CLASS_1_8203F020DB866600_METHOD_1_91895701433CBFE0_OFFSET))(this);
		}

		::System::Void Method_1_79E872D90798D236(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER_CLASS_1_8203F020DB866600_METHOD_1_79E872D90798D236_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER_CLASS_1_8203F020DB866600_CLEAR_OFFSET))(this);
		}
	};
}
