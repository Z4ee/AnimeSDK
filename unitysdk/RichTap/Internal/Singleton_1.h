#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }

namespace RichTap::Internal
{
	inline static constexpr unsigned int Singleton_1_TypeDefinitionIndex = 38759;

	template <typename T>
	class Singleton_1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		static T* StaticGet_instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(Singleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet_Lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Singleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean persistent; // 0x0
		static ::System::Boolean* StaticGet__Quitting_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Singleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
