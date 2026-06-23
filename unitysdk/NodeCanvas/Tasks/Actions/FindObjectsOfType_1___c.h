#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Tasks::Actions { template <typename T> class FindObjectsOfType_1___c; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int FindObjectsOfType_1___c_TypeDefinitionIndex = 30050;

	template <typename T>
	class FindObjectsOfType_1___c : public ::System::Object
	{
	public:
		static ::NodeCanvas::Tasks::Actions::FindObjectsOfType_1___c<T>** StaticGet___9()
		{
			return (::NodeCanvas::Tasks::Actions::FindObjectsOfType_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(FindObjectsOfType_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T, ::UnityEngine::GameObject*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<T, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(FindObjectsOfType_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
