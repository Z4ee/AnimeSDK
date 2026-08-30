#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class ChimeraFireBulletManager_Class_1_8203F020DB866600; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraWorkFireBullet; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_FIREBULLET_OFFSET UNITYSDK_OFFSET(0x1B5F6750)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_METHOD_5_1AE3C916218B4E29_OFFSET UNITYSDK_OFFSET(0x1B5F68F0)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_METHOD_5_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0x1B5F7030)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1B5F5E50)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B5F5EF0)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5F7260)
#define RPG_CLIENT_CHIMERAFIREBULLETMANAGER___FIREBULLETIMPL_B__3_0_OFFSET UNITYSDK_OFFSET(0x1B5F72F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraFireBulletManager_TypeDefinitionIndex = 68613;

	class ChimeraFireBulletManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AttachPointMapping* Mapping; // 0x18
		::UnityEngine::AnimationCurve* YCurveRate; // 0x20
		::UnityEngine::AnimationCurve* XCurveRate; // 0x28
		::System::Action* BJLJAHMLKIO; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraFireBulletManager_Class_1_8203F020DB866600*>* DCNEHLOAIJD; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void FireBullet(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::RPG::GameCore::ChimeraWorkFireBullet* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::RPG::GameCore::ChimeraWorkFireBullet*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER_FIREBULLET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_1AE3C916218B4E29(::UnityEngine::GameObject* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::RPG::GameCore::ChimeraWorkFireBullet* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::RPG::GameCore::ChimeraWorkFireBullet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER_METHOD_5_1AE3C916218B4E29_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_E824431C22EF9361()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER_METHOD_5_E824431C22EF9361_OFFSET))(this);
		}

		::System::Void __FireBulletImpl_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAFIREBULLETMANAGER___FIREBULLETIMPL_B__3_0_OFFSET))(this);
		}
	};
}
