#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Engine { class NapSceneOptimizeManager_MaterialLodItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19DA7750)
#define MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x19DA77A0)
#define MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_TRIGGERSETTINGS_OFFSET UNITYSDK_OFFSET(0x19DA7B50)
#define MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA7D10)

namespace MoleMole::Engine
{
	inline static constexpr unsigned int NapSceneOptimizeManager_TypeDefinitionIndex = 89285;

	class NapSceneOptimizeManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_2; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Engine::NapSceneOptimizeManager_MaterialLodItem*>* Field_5_1; // 0x20
		::Il2CppArray<::UnityEngine::Material*>* m_LinkedMaterials; // 0x28
		::Il2CppArray<::MoleMole::Engine::NapSceneOptimizeManager_MaterialLodItem*>* m_RenderItems; // 0x30
		::Il2CppArray<::UnityEngine::Renderer*>* shadowOffRenders; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_AWAKE_OFFSET))(this);
		}

		static ::System::Void TriggerSettings(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_TRIGGERSETTINGS_OFFSET))(a1);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_REFRESHDATA_OFFSET))(this);
		}
	};
}
