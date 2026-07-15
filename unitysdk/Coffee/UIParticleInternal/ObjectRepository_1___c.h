#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UIParticleInternal { template <typename T> class ObjectRepository_1___c; }
namespace System { template <typename T> class Action_1; }

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int ObjectRepository_1___c_TypeDefinitionIndex = 42340;

	template <typename T>
	class ObjectRepository_1___c : public ::System::Object
	{
	public:
		static ::Coffee::UIParticleInternal::ObjectRepository_1___c<T>** StaticGet___9()
		{
			return (::Coffee::UIParticleInternal::ObjectRepository_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(ObjectRepository_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<T>** StaticGet___9__5_0()
		{
			return (::System::Action_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ObjectRepository_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
