#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/ComponentMetaData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ComponentTypeTraits_1_TypeDefinitionIndex = 36133;

	template <typename T>
	class ComponentTypeTraits_1 : public ::System::Object
	{
	public:
		static ::PipelineCamera::DataOrientated::ComponentMetaData* StaticGet_MetaData()
		{
			return (::PipelineCamera::DataOrientated::ComponentMetaData*)Il2CppClass::FromTypeDefinitionIndex(ComponentTypeTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
