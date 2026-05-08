#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_C3BBA2B066959E6E.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class CapsuleCollider; }

#define MOLEMOLE_MONOCAPSULECOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15B32D80)
#define MOLEMOLE_MONOCAPSULECOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x15B330E0)
#define MOLEMOLE_MONOCAPSULECOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x15B33140)
#define MOLEMOLE_MONOCAPSULECOLLIDER_METHOD_6_74DA9B165C92DE14_OFFSET UNITYSDK_OFFSET(0x15B33360)
#define MOLEMOLE_MONOCAPSULECOLLIDER_METHOD_6_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0x15B334E0)
#define MOLEMOLE_MONOCAPSULECOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15B33060)
#define MOLEMOLE_MONOCAPSULECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B33580)
#define MOLEMOLE_MONOCAPSULECOLLIDER___BASE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x15B335E0)
#define MOLEMOLE_MONOCAPSULECOLLIDER___BASE_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x15B33670)
#define MOLEMOLE_MONOCAPSULECOLLIDER___BASE_SETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x15B33700)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCapsuleCollider_TypeDefinitionIndex = 80987;

	class MonoCapsuleCollider : public ::MoleMole::MonoConfigurableCollider
	{
	public:
		::UnityEngine::CapsuleCollider* Field_6_0; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void Method_6_74DA9B165C92DE14(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_METHOD_6_74DA9B165C92DE14_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __base_CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER___BASE_CLEANUP_OFFSET))(this);
		}

		::System::Void __base_DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER___BASE_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void __base_SetupCollider(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER___BASE_SETUPCOLLIDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_METHOD_6_999B8B439422C7E7_OFFSET))(this, a1, a2);
		}
	};
}
