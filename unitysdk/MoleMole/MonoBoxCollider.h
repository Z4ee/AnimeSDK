#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_C3BBA2B066959E6E.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class BoxCollider; }

#define MOLEMOLE_MONOBOXCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x12357010)
#define MOLEMOLE_MONOBOXCOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x12357360)
#define MOLEMOLE_MONOBOXCOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x12357700)
#define MOLEMOLE_MONOBOXCOLLIDER_METHOD_6_36FA0E20C1352AE0_OFFSET UNITYSDK_OFFSET(0x123574A0)
#define MOLEMOLE_MONOBOXCOLLIDER_METHOD_6_EFE0B05522ECE46D_OFFSET UNITYSDK_OFFSET(0x123573C0)
#define MOLEMOLE_MONOBOXCOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x123572E0)
#define MOLEMOLE_MONOBOXCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x123578F0)
#define MOLEMOLE_MONOBOXCOLLIDER___BASE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x12357950)
#define MOLEMOLE_MONOBOXCOLLIDER___BASE_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x123579E0)
#define MOLEMOLE_MONOBOXCOLLIDER___BASE_SETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x12357A70)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBoxCollider_TypeDefinitionIndex = 62464;

	class MonoBoxCollider : public ::MoleMole::MonoConfigurableCollider
	{
	public:
		::UnityEngine::BoxCollider* Field_6_0; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_EFE0B05522ECE46D(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_METHOD_6_EFE0B05522ECE46D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void __base_CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER___BASE_CLEANUP_OFFSET))(this);
		}

		::System::Void __base_DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER___BASE_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void __base_SetupCollider(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER___BASE_SETUPCOLLIDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_36FA0E20C1352AE0(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_METHOD_6_36FA0E20C1352AE0_OFFSET))(this, a1, a2, a3);
		}
	};
}
