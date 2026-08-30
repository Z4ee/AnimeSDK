#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class QuadricBezier; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1BB1E3A0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_METHOD_5_2EA3D2C84685E32A_OFFSET UNITYSDK_OFFSET(0x1BB1E850)
#define RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_METHOD_5_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x1BB1EAD0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1BB1E3F0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1BB1E5C0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1BB1E360)
#define RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB1EB40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeFlyEffect_TypeDefinitionIndex = 64566;

	class GridFightUpgradeFlyEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* KNGEKPKBIDK; // 0x18
		::UnityEngine::Transform* CEEAKCACHGJ; // 0x20
		::UnityEngine::Transform* GNPBGAKIAHM; // 0x28
		::RPG::Client::QuadricBezier* BKHMEKLPNHJ; // 0x30
		::System::Single HBDJCFFDGDD; // 0x38
		::System::Action* ILMPMNJDDPA; // 0x40

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

		::System::Void Method_5_B3A88D7849969A71(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEFLYEFFECT_METHOD_5_B3A88D7849969A71_OFFSET))(this, a1);
		}
	};
}
