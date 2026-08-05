#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion
{
	inline static constexpr unsigned int LazySingleton_1_TypeDefinitionIndex = 38974;

	template <typename T>
	class LazySingleton_1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		static T* StaticGet_sInstance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(LazySingleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
