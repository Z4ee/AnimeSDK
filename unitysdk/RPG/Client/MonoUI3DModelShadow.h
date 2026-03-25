#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOUI3DMODELSHADOW_METHOD_5_7B438E278CE1B5EB_OFFSET UNITYSDK_OFFSET(0x9D459E0)
#define RPG_CLIENT_MONOUI3DMODELSHADOW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D45950)
#define RPG_CLIENT_MONOUI3DMODELSHADOW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9D458C0)
#define RPG_CLIENT_MONOUI3DMODELSHADOW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9D457C0)
#define RPG_CLIENT_MONOUI3DMODELSHADOW_SETSHADOWCASTINGENABLED_OFFSET UNITYSDK_OFFSET(0x9D45850)
#define RPG_CLIENT_MONOUI3DMODELSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0x9D45C00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUI3DModelShadow_TypeDefinitionIndex = 59830;

	class MonoUI3DModelShadow : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DMODELSHADOW__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DMODELSHADOW_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DMODELSHADOW_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DMODELSHADOW_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetShadowCastingEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DMODELSHADOW_SETSHADOWCASTINGENABLED_OFFSET))(this, a1);
		}

		::System::Void Method_5_7B438E278CE1B5EB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DMODELSHADOW_METHOD_5_7B438E278CE1B5EB_OFFSET))(this, a1);
		}
	};
}
