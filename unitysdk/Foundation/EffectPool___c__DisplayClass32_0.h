#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class EffectPool_AssetInfo; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_EFFECTPOOL___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B46C560)
#define FOUNDATION_EFFECTPOOL___C__DISPLAYCLASS32_0__GETINSTANCEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B46C570)

namespace Foundation
{
	inline static constexpr unsigned int EffectPool___c__DisplayClass32_0_TypeDefinitionIndex = 8170;

	class EffectPool___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::Foundation::EffectPool_AssetInfo* assetInfo; // 0x10
		::System::Action_1<::UnityEngine::Object*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetInstanceAsync_b__0(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL___C__DISPLAYCLASS32_0__GETINSTANCEASYNC_B__0_OFFSET))(this, obj);
		}
	};
}
