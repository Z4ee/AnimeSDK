#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_DETAILPROTOTYPE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x167D9F50)
#define HOUDINIENGINEUNITY_HEU_DETAILPROTOTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x167D9E80)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_DetailPrototype_TypeDefinitionIndex = 39477;

	class HEU_DetailPrototype : public ::System::Object
	{
	public:
		::System::String* _prototypePrefab; // 0x10
		::System::String* _prototypeTexture; // 0x18
		::System::Int32 _renderMode; // 0x20
		::System::Single _bendFactor; // 0x24
		::System::Single _minHeight; // 0x28
		::System::Single _minWidth; // 0x2C
		::System::Single _maxWidth; // 0x30
		::System::Single _noiseSpread; // 0x34
		::UnityEngine::Color _healthyColor; // 0x38
		::UnityEngine::Color _dryColor; // 0x48
		::System::Single _maxHeight; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_DETAILPROTOTYPE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_DetailPrototype* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_DetailPrototype*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_DETAILPROTOTYPE_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
