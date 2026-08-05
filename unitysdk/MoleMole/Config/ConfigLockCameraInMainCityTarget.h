#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLockTarget.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_CONFIGLOCKCAMERAINMAINCITYTARGET_METHOD_2_9A70B2DC83024CA4_OFFSET UNITYSDK_OFFSET(0x13500A90)
#define MOLEMOLE_CONFIG_CONFIGLOCKCAMERAINMAINCITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x13500B60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockCameraInMainCityTarget_TypeDefinitionIndex = 48845;

	class ConfigLockCameraInMainCityTarget : public ::MoleMole::Config::ConfigLockTarget
	{
	public:
		::System::Func_5<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::Single>* GetOverrideRadius; // 0x40
		::System::Func_5<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::Single>* GetOverrideAngle; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKCAMERAINMAINCITYTARGET__CTOR_OFFSET))(this);
		}

		::Struct_2_FA5F50563E60AFBA Method_2_9A70B2DC83024CA4(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* a8)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKCAMERAINMAINCITYTARGET_METHOD_2_9A70B2DC83024CA4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
