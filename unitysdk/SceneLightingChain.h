#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class DynamicSceneLightChainProxy;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Light; }

#define SCENELIGHTINGCHAIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E78C130)
#define SCENELIGHTINGCHAIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E78BDE0)
#define SCENELIGHTINGCHAIN_REGISTERDYNAMICSCENELIGHT_OFFSET UNITYSDK_OFFSET(0x1E78BC50)
#define SCENELIGHTINGCHAIN_UNREGISTERDYNAMICSCENELIGHT_OFFSET UNITYSDK_OFFSET(0x1E78BD30)
#define SCENELIGHTINGCHAIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78C4D0)
#define SCENELIGHTINGCHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78C480)

inline static constexpr unsigned int SceneLightingChain_TypeDefinitionIndex = 27652;

class SceneLightingChain : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::HashSet_1<::DynamicSceneLightChainProxy*>** StaticGet_DynamicElementsOnTheLightingChain()
	{
		return (::System::Collections::Generic::HashSet_1<::DynamicSceneLightChainProxy*>**)Il2CppClass::FromTypeDefinitionIndex(SceneLightingChain_TypeDefinitionIndex)->GetStaticField(0x22AC0);
	}
	::Il2CppArray<::UnityEngine::Light*>* ElementsOnTheLightingChain; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGCHAIN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENELIGHTINGCHAIN__CCTOR_OFFSET))();
	}

	static ::System::Void RegisterDynamicSceneLight(::DynamicSceneLightChainProxy* light)
	{
		return ((::System::Void(*)(::DynamicSceneLightChainProxy*))((::PBYTE)hIl2Cpp + SCENELIGHTINGCHAIN_REGISTERDYNAMICSCENELIGHT_OFFSET))(light);
	}

	static ::System::Void UnRegisterDynamicSceneLight(::DynamicSceneLightChainProxy* light)
	{
		return ((::System::Void(*)(::DynamicSceneLightChainProxy*))((::PBYTE)hIl2Cpp + SCENELIGHTINGCHAIN_UNREGISTERDYNAMICSCENELIGHT_OFFSET))(light);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGCHAIN_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGCHAIN_ONDISABLE_OFFSET))(this);
	}
};
