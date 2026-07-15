#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCharacterControllerBuilderInstance_1_TypeDefinitionIndex = 51501;

	template <typename T>
	class RtCharacterControllerBuilderInstance_1 : public ::System::Object
	{
	public:
		static T* StaticGet_Instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(RtCharacterControllerBuilderInstance_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
