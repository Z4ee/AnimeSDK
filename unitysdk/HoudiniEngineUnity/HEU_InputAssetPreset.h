#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_INPUTASSETPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B90B6C0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputAssetPreset_TypeDefinitionIndex = 40368;

	class HEU_InputAssetPreset : public ::System::Object
	{
	public:
		::System::String* _gameObjectName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTASSETPRESET__CTOR_OFFSET))(this);
		}
	};
}
