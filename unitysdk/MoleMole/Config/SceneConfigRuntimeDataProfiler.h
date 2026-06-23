#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAPROFILER_TRYOPEN_OFFSET UNITYSDK_OFFSET(0x170CAA80)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAPROFILER__CCTOR_OFFSET UNITYSDK_OFFSET(0x170CACB0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAPROFILER__CTOR_OFFSET UNITYSDK_OFFSET(0x170CAC60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneConfigRuntimeDataProfiler_TypeDefinitionIndex = 63744;

	class SceneConfigRuntimeDataProfiler : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::GameObject** StaticGet_Field_5_0()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(SceneConfigRuntimeDataProfiler_TypeDefinitionIndex)->GetStaticField(0x48460);
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
