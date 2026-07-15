#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class GCFreeLazy_1___c; }

namespace RPG
{
	inline static constexpr unsigned int GCFreeLazy_1___c_TypeDefinitionIndex = 6749;

	template <typename T>
	class GCFreeLazy_1___c : public ::System::Object
	{
	public:
		static ::RPG::GCFreeLazy_1___c<T>** StaticGet___9()
		{
			return (::RPG::GCFreeLazy_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(GCFreeLazy_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
