#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class ExclusiveResourceService___c__2_3; }
namespace System { class Action; }

namespace Foundation
{
	inline static constexpr unsigned int ExclusiveResourceService___c__2_3_TypeDefinitionIndex = 8948;

	template <typename TResource, typename TDefault, typename TRequest>
	class ExclusiveResourceService___c__2_3 : public ::System::Object
	{
	public:
		static ::Foundation::ExclusiveResourceService___c__2_3<TResource, TDefault, TRequest>** StaticGet___9()
		{
			return (::Foundation::ExclusiveResourceService___c__2_3<TResource, TDefault, TRequest>**)Il2CppClass::FromTypeDefinitionIndex(ExclusiveResourceService___c__2_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ExclusiveResourceService___c__2_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
