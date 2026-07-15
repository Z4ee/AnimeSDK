#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class QuadricBezier; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBEZIERTRAILEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1970A970)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBEZIERTRAILEFFECT_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1970AD40)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBEZIERTRAILEFFECT_METHOD_5_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x1970ADB0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBEZIERTRAILEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1970A600)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBEZIERTRAILEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1970A9C0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBEZIERTRAILEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1970A930)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBEZIERTRAILEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1970AE20)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinBezierTrailEffect_TypeDefinitionIndex = 75715;

	class FateRinBezierTrailEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Field_5_0; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x20
		::UnityEngine::Transform* Field_5_2; // 0x28
		::UnityEngine::Transform* Field_5_3; // 0x30
		::RPG::Client::QuadricBezier* Field_5_4; // 0x38
		::UnityEngine::Animation* Field_5_5; // 0x40
		::System::Single Field_5_6; // 0x48
		::System::Action* Field_5_7; // 0x50
		::System::Action* Field_5_8; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBEZIERTRAILEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBEZIERTRAILEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBEZIERTRAILEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBEZIERTRAILEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Action* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBEZIERTRAILEFFECT_PLAY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBEZIERTRAILEFFECT_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_B3A88D7849969A71(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBEZIERTRAILEFFECT_METHOD_5_B3A88D7849969A71_OFFSET))(this, a1);
		}
	};
}
