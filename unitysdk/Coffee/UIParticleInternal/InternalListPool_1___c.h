#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UIParticleInternal { template <typename T> class InternalListPool_1___c; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int InternalListPool_1___c_TypeDefinitionIndex = 42337;

	template <typename T>
	class InternalListPool_1___c : public ::System::Object
	{
	public:
		static ::Coffee::UIParticleInternal::InternalListPool_1___c<T>** StaticGet___9()
		{
			return (::Coffee::UIParticleInternal::InternalListPool_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(InternalListPool_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
