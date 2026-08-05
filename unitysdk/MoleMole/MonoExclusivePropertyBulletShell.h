#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEXCLUSIVEPROPERTYBULLETSHELL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1686FA60)
#define MOLEMOLE_MONOEXCLUSIVEPROPERTYBULLETSHELL_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1686FB50)
#define MOLEMOLE_MONOEXCLUSIVEPROPERTYBULLETSHELL__CTOR_OFFSET UNITYSDK_OFFSET(0x1686FC80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoExclusivePropertyBulletShell_TypeDefinitionIndex = 76154;

	class MonoExclusivePropertyBulletShell : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEXCLUSIVEPROPERTYBULLETSHELL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEXCLUSIVEPROPERTYBULLETSHELL_AWAKE_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Single a1, ::System::Single a2, ::MoleMole::Battle::Entity* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEXCLUSIVEPROPERTYBULLETSHELL_REFRESHVIEW_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
