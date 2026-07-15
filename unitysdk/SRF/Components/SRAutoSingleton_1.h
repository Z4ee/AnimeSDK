#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"

namespace SRF::Components
{
	inline static constexpr unsigned int SRAutoSingleton_1_TypeDefinitionIndex = 33996;

	template <typename T>
	class SRAutoSingleton_1 : public ::SRF::SRMonoBehaviour
	{
	public:
		static T* StaticGet__instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(SRAutoSingleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
