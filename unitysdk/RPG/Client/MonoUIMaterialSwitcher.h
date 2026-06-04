#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_MONOUIMATERIALSWITCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC15DC20)
#define RPG_CLIENT_MONOUIMATERIALSWITCHER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC15DCF0)
#define RPG_CLIENT_MONOUIMATERIALSWITCHER_RECOVERMATERIAL_OFFSET UNITYSDK_OFFSET(0xC15DBD0)
#define RPG_CLIENT_MONOUIMATERIALSWITCHER_SWITCHMATERIAL_OFFSET UNITYSDK_OFFSET(0xC15DA90)
#define RPG_CLIENT_MONOUIMATERIALSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0xC15DD40)
#define RPG_CLIENT_MONOUIMATERIALSWITCHER__SWITCHMATERIAL_OFFSET UNITYSDK_OFFSET(0xC15DB20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIMaterialSwitcher_TypeDefinitionIndex = 64504;

	class MonoUIMaterialSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* _Materials; // 0x18
		::UnityEngine::MeshRenderer* _TargetMeshRenderer; // 0x20
		::System::UInt32 _CurMaterialIndex; // 0x28
		::UnityEngine::Material* _DefaultMaterial; // 0x30
		::UnityEngine::Material* _CurMaterial; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIMATERIALSWITCHER__CTOR_OFFSET))(this);
		}

		::System::Void SwitchMaterial(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIMATERIALSWITCHER_SWITCHMATERIAL_OFFSET))(this, a1);
		}

		::System::Void RecoverMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIMATERIALSWITCHER_RECOVERMATERIAL_OFFSET))(this);
		}

		::System::Void _SwitchMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIMATERIALSWITCHER__SWITCHMATERIAL_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIMATERIALSWITCHER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIMATERIALSWITCHER_ONDESTROY_OFFSET))(this);
		}
	};
}
