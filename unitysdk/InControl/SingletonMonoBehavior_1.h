#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }

namespace InControl
{
	inline static constexpr unsigned int SingletonMonoBehavior_1_TypeDefinitionIndex = 38758;

	template <typename TComponent>
	class SingletonMonoBehavior_1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		static TComponent* StaticGet_instance()
		{
			return (TComponent*)Il2CppClass::FromTypeDefinitionIndex(SingletonMonoBehavior_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_hasInstance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SingletonMonoBehavior_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_instanceId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SingletonMonoBehavior_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet_lockObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SingletonMonoBehavior_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
