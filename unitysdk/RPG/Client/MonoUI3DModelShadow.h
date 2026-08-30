#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOUI3DMODELSHADOW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C28EE80)
#define RPG_CLIENT_MONOUI3DMODELSHADOW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C28EDF0)
#define RPG_CLIENT_MONOUI3DMODELSHADOW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C28ED00)
#define RPG_CLIENT_MONOUI3DMODELSHADOW_SETSHADOWCASTINGENABLED_OFFSET UNITYSDK_OFFSET(0x1C28ED90)
#define RPG_CLIENT_MONOUI3DMODELSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C28F130)
#define RPG_CLIENT_MONOUI3DMODELSHADOW__REFRESHSHADOW_OFFSET UNITYSDK_OFFSET(0x1C28EF10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUI3DModelShadow_TypeDefinitionIndex = 72903;

	class MonoUI3DModelShadow : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsShadowCastingEnabled; // 0x18

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

		::System::Void _RefreshShadow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DMODELSHADOW__REFRESHSHADOW_OFFSET))(this, a1);
		}
	};
}
