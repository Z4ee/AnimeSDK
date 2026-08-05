#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONODEBUGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x129B1490)
#define MOLEMOLE_MONODEBUGGER_GETHIERARCHYPATH_1_OFFSET UNITYSDK_OFFSET(0x129B1970)
#define MOLEMOLE_MONODEBUGGER_GETHIERARCHYPATH_OFFSET UNITYSDK_OFFSET(0x129B1800)
#define MOLEMOLE_MONODEBUGGER_METHOD_5_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x129B1530)
#define MOLEMOLE_MONODEBUGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x129B1760)
#define MOLEMOLE_MONODEBUGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x129B16C0)
#define MOLEMOLE_MONODEBUGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x129B1580)
#define MOLEMOLE_MONODEBUGGER_START_OFFSET UNITYSDK_OFFSET(0x129B1620)
#define MOLEMOLE_MONODEBUGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x129B1D50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDebugger_TypeDefinitionIndex = 40820;

	class MonoDebugger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_ONDESTROY_OFFSET))(this);
		}

		static ::System::String* GetHierarchyPath(::UnityEngine::GameObject* a1)
		{
			return ((::System::String*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_GETHIERARCHYPATH_OFFSET))(a1);
		}

		static ::System::String* GetHierarchyPath_1(::UnityEngine::Transform* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_GETHIERARCHYPATH_1_OFFSET))(a1);
		}

		::System::Void Method_5_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_METHOD_5_050E70FEDB783306_OFFSET))(this, a1);
		}
	};
}
