#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetEventData.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_RELOADEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x848B6D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ReloadEventData_TypeDefinitionIndex = 37591;

	class HEU_ReloadEventData : public ::HoudiniEngineUnity::HEU_AssetEventData
	{
	public:
		::System::Void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::Boolean successful, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RELOADEVENTDATA__CTOR_OFFSET))(this, asset, successful, outputObjects);
		}
	};
}
