#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetEventType.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }

#define HOUDINIENGINEUNITY_HEU_PREASSETEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x197C04F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PreAssetEventData_TypeDefinitionIndex = 38204;

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
