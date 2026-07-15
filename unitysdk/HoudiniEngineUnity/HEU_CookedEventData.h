#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetEventData.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_COOKEDEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1501C0C0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_CookedEventData_TypeDefinitionIndex = 38202;

	class HEU_CookedEventData : public ::HoudiniEngineUnity::HEU_AssetEventData
	{
	public:
		::System::Void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKEDEVENTDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
