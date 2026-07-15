#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Buffers { template <typename T> class ArrayPool_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ArrayPoolWrapper_1_TypeDefinitionIndex = 53801;

	template <typename T>
	struct ArrayPoolWrapper_1
	{
		static ::UnityEngine::Buffers::ArrayPool_1<T>** StaticGet__unitySharedArrayPool()
		{
			return (::UnityEngine::Buffers::ArrayPool_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ArrayPoolWrapper_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 alignment = 0x10; // 0x0
	};
}
