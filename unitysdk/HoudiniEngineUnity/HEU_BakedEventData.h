#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetEventData.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_BAKEDEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x840FB10)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_BakedEventData_TypeDefinitionIndex = 37593;

	class HEU_BakedEventData : public ::HoudiniEngineUnity::HEU_AssetEventData
	{
	public:
		::System::Boolean IsNewBake; // 0x28

		::System::Void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::Boolean successful, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects, ::System::Boolean isNewBake)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BAKEDEVENTDATA__CTOR_OFFSET))(this, asset, successful, outputObjects, isNewBake);
		}
	};
}
