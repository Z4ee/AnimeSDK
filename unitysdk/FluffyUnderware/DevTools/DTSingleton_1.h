#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace FluffyUnderware::DevTools { class IDTSingleton; }
namespace System { class Object; }

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTSingleton_1_TypeDefinitionIndex = 28990;

	template <typename T>
	class DTSingleton_1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		static T* StaticGet__instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(DTSingleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet__lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DTSingleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
