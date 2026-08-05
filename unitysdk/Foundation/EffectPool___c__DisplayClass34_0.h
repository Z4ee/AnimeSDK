#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define FOUNDATION_EFFECTPOOL___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF7CC50)
#define FOUNDATION_EFFECTPOOL___C__DISPLAYCLASS34_0__WARMUPINSTANCE_B__0_OFFSET UNITYSDK_OFFSET(0x1EF7CC60)

namespace Foundation
{
	inline static constexpr unsigned int EffectPool___c__DisplayClass34_0_TypeDefinitionIndex = 8129;

	class EffectPool___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::Int32 warmupCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _WarmupInstance_b__0(::UnityEngine::Object* _, ::Foundation::AssetRequestHandle assetHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL___C__DISPLAYCLASS34_0__WARMUPINSTANCE_B__0_OFFSET))(this, _, assetHandle);
		}
	};
}
