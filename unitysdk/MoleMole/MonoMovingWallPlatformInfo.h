#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOMOVINGWALLPLATFORMINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x16876540)
#define MOLEMOLE_MONOMOVINGWALLPLATFORMINFO_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x168765E0)
#define MOLEMOLE_MONOMOVINGWALLPLATFORMINFO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16876590)
#define MOLEMOLE_MONOMOVINGWALLPLATFORMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x168769D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMovingWallPlatformInfo_TypeDefinitionIndex = 67123;

	class MonoMovingWallPlatformInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_Field_5_2()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoMovingWallPlatformInfo_TypeDefinitionIndex)->GetStaticField(0xCBB0);
		}
		::System::Boolean Field_5_1; // 0x18
		::UnityEngine::GameObject* platformRoot; // 0x20
		::UnityEngine::Vector2 levelGridPrecision; // 0x28
		::MoleMole::Vector2Int levelGridSize; // 0x30
		::System::Single maxPassableHeight; // 0x38
		::System::Boolean drawGizmos; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMOVINGWALLPLATFORMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMOVINGWALLPLATFORMINFO_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMOVINGWALLPLATFORMINFO_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Bounds GetBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMOVINGWALLPLATFORMINFO_GETBOUNDS_OFFSET))(this);
		}
	};
}
