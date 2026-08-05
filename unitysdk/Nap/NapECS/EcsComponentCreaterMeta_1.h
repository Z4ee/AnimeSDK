#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentCreaterMeta_1_TypeDefinitionIndex = 38032;

	template <typename T>
	class EcsComponentCreaterMeta_1 : public ::System::Object
	{
	public:
		static ::System::Func_1<T>** StaticGet__Creater_k__BackingField()
		{
			return (::System::Func_1<T>**)Il2CppClass::FromTypeDefinitionIndex(EcsComponentCreaterMeta_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
