#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class QuadricBezier; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xA5CA4E0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_METHOD_5_2EA3D2C84685E32A_OFFSET UNITYSDK_OFFSET(0xA5CA9E0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_METHOD_5_90BC2B951C8F8F73_OFFSET UNITYSDK_OFFSET(0xA5CAC60)
#define RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xA5CA530)
#define RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xA5CA740)
#define RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xA5CA4A0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA5CACC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeFlyEffect_TypeDefinitionIndex = 59357;

	class GridFightUpgradeFlyEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Field_5_0; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x20
		::UnityEngine::Transform* Field_5_2; // 0x28
		::RPG::Client::QuadricBezier* Field_5_3; // 0x30
		::System::Single Field_5_4; // 0x38
		::System::Action* Field_5_5; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_PLAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 Method_5_2EA3D2C84685E32A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_METHOD_5_2EA3D2C84685E32A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_90BC2B951C8F8F73(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_METHOD_5_90BC2B951C8F8F73_OFFSET))(this, a1);
		}
	};
}
