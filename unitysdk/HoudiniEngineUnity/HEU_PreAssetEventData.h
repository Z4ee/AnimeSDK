#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetEventType.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }

#define HOUDINIENGINEUNITY_HEU_PREASSETEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B146D40)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PreAssetEventData_TypeDefinitionIndex = 39063;

	class HEU_PreAssetEventData : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_HoudiniAsset* Asset; // 0x10
		::HoudiniEngineUnity::HEU_AssetEventType AssetType; // 0x18

		::System::Void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::HoudiniEngineUnity::HEU_AssetEventType a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::HoudiniEngineUnity::HEU_AssetEventType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PREASSETEVENTDATA__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
