#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class ChimeraWorkFireBullet; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_CLASS_1_8203F020DB866600_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B5F71F0)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_CLASS_1_8203F020DB866600_METHOD_1_79E872D90798D236_OFFSET UNITYSDK_OFFSET(0x1B5F6190)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_CLASS_1_8203F020DB866600_METHOD_1_91895701433CBFE0_OFFSET UNITYSDK_OFFSET(0x1B5F6DC0)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_CLASS_1_8203F020DB866600__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5F6D40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraFireBulletManager_Class_1_8203F020DB866600_TypeDefinitionIndex = 68614;

	class ChimeraFireBulletManager_Class_1_8203F020DB866600 : public ::System::Object
	{
	public:
		::System::Action* EGMGFMKIOHL; // 0x10
		::UnityEngine::AnimationCurve* NPFCIFDPHPP; // 0x18
		::UnityEngine::Transform* GLDEBFOKEMJ; // 0x20
		::UnityEngine::Transform* DEIMGIGLHLK; // 0x28
		::RPG::GameCore::ChimeraWorkFireBullet* IGHAHBNLIJA; // 0x30
		::UnityEngine::Transform* ONLEMJPMBDH; // 0x38
		::UnityEngine::AnimationCurve* EKBEMMMNOFI; // 0x40
		::System::Boolean MABFMALCGKF; // 0x48
		::System::Single KKPEIMJKION; // 0x4C
		::System::Single LLNIGIGFCEA; // 0x50

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
