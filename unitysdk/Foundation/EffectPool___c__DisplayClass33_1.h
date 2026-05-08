#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class BundleObjectInstanceRequest; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_EFFECTPOOL___C__DISPLAYCLASS33_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE6790)
#define FOUNDATION_EFFECTPOOL___C__DISPLAYCLASS33_1__WARMUPINSTANCE_B__1_OFFSET UNITYSDK_OFFSET(0x1BAE67A0)

namespace Foundation
{
	inline static constexpr unsigned int EffectPool___c__DisplayClass33_1_TypeDefinitionIndex = 8168;

	class EffectPool___c__DisplayClass33_1 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::Object*>* __9__1; // 0x10
		::Foundation::BundleObjectInstanceRequest* bundleObjectInstanceRequest; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL___C__DISPLAYCLASS33_1__CTOR_OFFSET))(this);
		}

		::System::Void _WarmupInstance_b__1(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL___C__DISPLAYCLASS33_1__WARMUPINSTANCE_B__1_OFFSET))(this, obj);
		}
	};
}
