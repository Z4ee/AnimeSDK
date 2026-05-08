#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_METHOD_5_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x10E45280)
#define MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_METHOD_5_86365E2EC5AEA470_OFFSET UNITYSDK_OFFSET(0x10E467E0)
#define MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_METHOD_5_87DFC1E9DCDE3B23_OFFSET UNITYSDK_OFFSET(0x10E46550)
#define MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x10E45210)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLevelDoorFxAutoLayout_TypeDefinitionIndex = 63716;

	class MonoLevelDoorFxAutoLayout : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single yOffset; // 0x18
		::UnityEngine::GameObject* fx_jinzhitongxiong; // 0x20
		::System::Single fx_jinzhitongxing_width; // 0x28
		::UnityEngine::GameObject* fx_jinzhi; // 0x30
		::System::Single fx_jinzhi_width; // 0x38
		::UnityEngine::GameObject* fx_cha; // 0x40
		::System::Single fx_cha_width; // 0x48
		::UnityEngine::GameObject* fx_dian; // 0x50
		::UnityEngine::GameObject* fx_screenEffect; // 0x58
		::UnityEngine::GameObject* fx_Light; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_2CBE0B79DD36047E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_METHOD_5_2CBE0B79DD36047E_OFFSET))(this);
		}

		::System::Void Method_5_86365E2EC5AEA470(::UnityEngine::ParticleSystem* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_METHOD_5_86365E2EC5AEA470_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* Method_5_87DFC1E9DCDE3B23(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_METHOD_5_87DFC1E9DCDE3B23_OFFSET))(this, a1, a2);
		}
	};
}
