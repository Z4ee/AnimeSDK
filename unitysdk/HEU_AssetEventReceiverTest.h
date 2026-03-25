#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HEU_ASSETEVENTRECEIVERTEST_BAKEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x83E4350)
#define HEU_ASSETEVENTRECEIVERTEST_COOKEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x83E4110)
#define HEU_ASSETEVENTRECEIVERTEST_RELOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x83E3ED0)
#define HEU_ASSETEVENTRECEIVERTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x83E4590)

inline static constexpr unsigned int HEU_AssetEventReceiverTest_TypeDefinitionIndex = 35093;

class HEU_AssetEventReceiverTest : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_ASSETEVENTRECEIVERTEST__CTOR_OFFSET))(this);
	}

	::System::Void ReloadCallback(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::Boolean success, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputList)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HEU_ASSETEVENTRECEIVERTEST_RELOADCALLBACK_OFFSET))(this, asset, success, outputList);
	}

	::System::Void CookedCallback(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::Boolean success, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputList)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HEU_ASSETEVENTRECEIVERTEST_COOKEDCALLBACK_OFFSET))(this, asset, success, outputList);
	}

	::System::Void BakedCallback(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::Boolean success, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputList)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HEU_ASSETEVENTRECEIVERTEST_BAKEDCALLBACK_OFFSET))(this, asset, success, outputList);
	}
};
