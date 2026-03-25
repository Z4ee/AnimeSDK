#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetEventData.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_COOKEDEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8418750)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_CookedEventData_TypeDefinitionIndex = 37592;

	class HEU_CookedEventData : public ::HoudiniEngineUnity::HEU_AssetEventData
	{
	public:
		::System::Void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::Boolean successful, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKEDEVENTDATA__CTOR_OFFSET))(this, asset, successful, outputObjects);
		}
	};
}
