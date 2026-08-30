#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class ComponentExtensions___c__24_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentExtensions___c__24_1_TypeDefinitionIndex = 72692;

	template <typename T>
	class ComponentExtensions___c__24_1 : public ::System::Object
	{
	public:
		static ::RPG::Client::ComponentExtensions___c__24_1<T>** StaticGet___9()
		{
			return (::RPG::Client::ComponentExtensions___c__24_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ComponentExtensions___c__24_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::UnityEngine::Transform*, T>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::UnityEngine::Transform*, T>**)Il2CppClass::FromTypeDefinitionIndex(ComponentExtensions___c__24_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
