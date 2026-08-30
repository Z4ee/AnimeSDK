#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetEventData.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_BAKEDEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3CCED0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_BakedEventData_TypeDefinitionIndex = 39062;

	class HEU_BakedEventData : public ::HoudiniEngineUnity::HEU_AssetEventData
	{
	public:
		::System::Boolean IsNewBake; // 0x28

		::System::Void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BAKEDEVENTDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
