#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int MonoSingleton_1_TypeDefinitionIndex = 7904;

	template <typename T>
	class MonoSingleton_1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		static T* StaticGet__instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(MonoSingleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet__lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MonoSingleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_destroyed()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoSingleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_persistent()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoSingleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_automatic()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoSingleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_missing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoSingleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
