#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_UNITYOBJPOOL___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x111AEFE0)
#define FOUNDATION_UNITYOBJPOOL___C__DISPLAYCLASS1_0__INSTANTIATEWITHOUTPOOLASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x111AEFF0)

namespace Foundation
{
	inline static constexpr unsigned int UnityObjPool___c__DisplayClass1_0_TypeDefinitionIndex = 82476;

	class UnityObjPool___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::Object*>* complete; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNITYOBJPOOL___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _InstantiateWithoutPoolAsync_b__0(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_UNITYOBJPOOL___C__DISPLAYCLASS1_0__INSTANTIATEWITHOUTPOOLASYNC_B__0_OFFSET))(this, asset, handle);
		}
	};
}
