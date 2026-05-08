#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int ContainerTypeTraits_1_TypeDefinitionIndex = 7978;

	template <typename T>
	class ContainerTypeTraits_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_type()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ContainerTypeTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
