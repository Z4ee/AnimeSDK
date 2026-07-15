#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class QuadricBezier; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1A6A9320)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_METHOD_5_005A196F2DA2B034_OFFSET UNITYSDK_OFFSET(0x1A6A9910)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_METHOD_5_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x1A6A9EE0)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_METHOD_5_C20EB18130574EEF_OFFSET UNITYSDK_OFFSET(0x1A6A9C80)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1A6A8F90)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_PLAYRANDOMLINEANDSPEED_OFFSET UNITYSDK_OFFSET(0x1A6A96B0)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_PLAYWITHRADOMLINE_OFFSET UNITYSDK_OFFSET(0x1A6A9450)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1A6A9380)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1A6A92E0)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A9F50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlyEffect_TypeDefinitionIndex = 61571;

	class GridFightFlyEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Field_5_0; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x20
		::UnityEngine::Transform* Field_5_2; // 0x28
		::UnityEngine::Vector3 Field_5_3; // 0x30
		::RPG::Client::QuadricBezier* Field_5_4; // 0x40
		::UnityEngine::ParticleSystem* Field_5_5; // 0x48
		::UnityEngine::Animation* Field_5_6; // 0x50
		::RPG::Client::RPGAnimationEvent* Field_5_7; // 0x58
		::System::Action* Field_5_8; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_PLAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayRandomLineAndSpeed(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_PLAYRANDOMLINEANDSPEED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayWithRadomLine(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_PLAYWITHRADOMLINE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_C20EB18130574EEF(::System::Action* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_METHOD_5_C20EB18130574EEF_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_005A196F2DA2B034(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_METHOD_5_005A196F2DA2B034_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_B3A88D7849969A71(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT_METHOD_5_B3A88D7849969A71_OFFSET))(this, a1);
		}
	};
}
