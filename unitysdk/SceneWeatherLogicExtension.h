#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUILightParam; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering { class Volume; }

#define SCENEWEATHERLOGICEXTENSION_APPLYLIGHTPARAM_OFFSET UNITYSDK_OFFSET(0x13456B20)
#define SCENEWEATHERLOGICEXTENSION_SETLIGHTDATAFORSTORE_OFFSET UNITYSDK_OFFSET(0x13456280)
#define SCENEWEATHERLOGICEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x13457100)

inline static constexpr unsigned int SceneWeatherLogicExtension_TypeDefinitionIndex = 71189;

class SceneWeatherLogicExtension : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEWEATHERLOGICEXTENSION__CTOR_OFFSET))(this);
	}

	static ::System::Void SetLightDataForStore(::System::Collections::Generic::List_1<::MoleMole::ConfigUILightParam*>* lightConfigs, ::UnityEngine::Light* targetLight, ::UnityEngine::Rendering::Volume* postVolume, ::MoleMole::Battle::Entity* targetNPCEntity)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigUILightParam*>*, ::UnityEngine::Light*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + SCENEWEATHERLOGICEXTENSION_SETLIGHTDATAFORSTORE_OFFSET))(lightConfigs, targetLight, postVolume, targetNPCEntity);
	}

	static ::System::Void ApplyLightParam(::MoleMole::ConfigUILightParam* param, ::UnityEngine::Light* _exLight, ::UnityEngine::Rendering::Volume* _cacheEnvironment)
	{
		return ((::System::Void(*)(::MoleMole::ConfigUILightParam*, ::UnityEngine::Light*, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + SCENEWEATHERLOGICEXTENSION_APPLYLIGHTPARAM_OFFSET))(param, _exLight, _cacheEnvironment);
	}
};
