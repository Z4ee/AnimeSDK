#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion
{
	inline static constexpr unsigned int Singleton_1_TypeDefinitionIndex = 38794;

	template <typename T>
	class Singleton_1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		static T* StaticGet_sInstance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(Singleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
