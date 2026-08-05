#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAPROFILER_TRYOPEN_OFFSET UNITYSDK_OFFSET(0x1B4F0B30)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAPROFILER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4F0D60)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAPROFILER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F0D10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneConfigRuntimeDataProfiler_TypeDefinitionIndex = 85506;

	class SceneConfigRuntimeDataProfiler : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::GameObject** StaticGet_Field_5_0()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(SceneConfigRuntimeDataProfiler_TypeDefinitionIndex)->GetStaticField(0x4E720);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAPROFILER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAPROFILER__CCTOR_OFFSET))();
		}

		static ::System::Void TryOpen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAPROFILER_TRYOPEN_OFFSET))();
		}
	};
}
