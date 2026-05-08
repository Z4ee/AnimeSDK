#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_C3BBA2B066959E6E.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class SphereCollider; }

#define MOLEMOLE_MONOSPHERECOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1235FE20)
#define MOLEMOLE_MONOSPHERECOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x12360170)
#define MOLEMOLE_MONOSPHERECOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x123601D0)
#define MOLEMOLE_MONOSPHERECOLLIDER_METHOD_6_12B567F9521485DB_OFFSET UNITYSDK_OFFSET(0x12360260)
#define MOLEMOLE_MONOSPHERECOLLIDER_METHOD_6_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0x12360330)
#define MOLEMOLE_MONOSPHERECOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x123600F0)
#define MOLEMOLE_MONOSPHERECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x123604D0)
#define MOLEMOLE_MONOSPHERECOLLIDER___BASE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x12360530)
#define MOLEMOLE_MONOSPHERECOLLIDER___BASE_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x123605C0)
#define MOLEMOLE_MONOSPHERECOLLIDER___BASE_SETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x12360650)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSphereCollider_TypeDefinitionIndex = 65354;

	class MonoSphereCollider : public ::MoleMole::MonoConfigurableCollider
	{
	public:
		::UnityEngine::SphereCollider* Field_6_0; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void Method_6_12B567F9521485DB(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_METHOD_6_12B567F9521485DB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void __base_CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER___BASE_CLEANUP_OFFSET))(this);
		}

		::System::Void __base_DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER___BASE_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void __base_SetupCollider(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER___BASE_SETUPCOLLIDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_4867D67F27947ACE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_METHOD_6_4867D67F27947ACE_OFFSET))(this, a1);
		}
	};
}
