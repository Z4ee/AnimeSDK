#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1_TypeDefinitionIndex = 31479;

	template <typename T>
	class RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_IsWellKnownType()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
