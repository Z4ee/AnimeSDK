#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileHitEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/ProjectileAutoEffectConfig.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_230F5EDDB35DAEBA;
class Class_3_CD59F26A5F0E803D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_BIND_OFFSET UNITYSDK_OFFSET(0x1BC64320)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0x1BC64250)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_FORCEUPDATEAUTOEFFECTFOLLOW_OFFSET UNITYSDK_OFFSET(0x1BC649D0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_GET_BINDENTITY_OFFSET UNITYSDK_OFFSET(0x1BC642E0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1BC64300)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1BC64890)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_METHOD_5_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x1BC64390)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_SET_BINDENTITY_OFFSET UNITYSDK_OFFSET(0x1BC642F0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1BC64310)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_UNBIND_OFFSET UNITYSDK_OFFSET(0x1BC64840)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC64B00)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGameProjectile_TypeDefinitionIndex = 75445;

	class MonoRoadRashGameProjectile : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MaxSpeed; // 0x18
		::System::Single MinTravelTime; // 0x1C
		::System::Single DelayFallDuration; // 0x20
		::System::Single TargetLockDuration; // 0x24
		::UnityEngine::AnimationCurve* TravelProgressCurve; // 0x28
		::RPG::Client::LittleGame::RoadRash::ProjectileHitEffectConfig HitEffectConfig; // 0x30
		::RPG::Client::RoadRash::ProjectileAutoEffectConfig AutoEffectConfig; // 0x50
		::UnityEngine::Transform* Root; // 0x88
		::Class_2_230F5EDDB35DAEBA* _BindEntity_k__BackingField; // 0x90
		::Class_3_CD59F26A5F0E803D* _Services_k__BackingField; // 0x98
		::System::UInt32 PAHADHFMOBA; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::Class_2_230F5EDDB35DAEBA* get_BindEntity()
		{
			return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_GET_BINDENTITY_OFFSET))(this);
		}

		::System::Void set_BindEntity(::Class_2_230F5EDDB35DAEBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_SET_BINDENTITY_OFFSET))(this, a1);
		}

		::Class_3_CD59F26A5F0E803D* get_Services()
		{
			return ((::Class_3_CD59F26A5F0E803D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_GET_SERVICES_OFFSET))(this);
		}

		::System::Void set_Services(::Class_3_CD59F26A5F0E803D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_CD59F26A5F0E803D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_SET_SERVICES_OFFSET))(this, a1);
		}

		::System::Void Bind(::Class_2_230F5EDDB35DAEBA* a1, ::Class_3_CD59F26A5F0E803D* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Class_3_CD59F26A5F0E803D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_BIND_OFFSET))(this, a1, a2);
		}

		::System::Void Unbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_UNBIND_OFFSET))(this);
		}

		::System::Void ForceUpdateAutoEffectFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_FORCEUPDATEAUTOEFFECTFOLLOW_OFFSET))(this);
		}

		::System::Void Method_5_8CA88D55ECEFAD59()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_METHOD_5_8CA88D55ECEFAD59_OFFSET))(this);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_METHOD_5_1290EA767C459179_OFFSET))(this);
		}
	};
}
