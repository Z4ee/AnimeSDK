#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/ComponentMetaData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ArchetypeComponentTypeTraits_1_TypeDefinitionIndex = 36136;

	template <typename T>
	class ArchetypeComponentTypeTraits_1 : public ::System::Object
	{
	public:
		static ::PipelineCamera::DataOrientated::ComponentMetaData* StaticGet_MetaData()
		{
			return (::PipelineCamera::DataOrientated::ComponentMetaData*)Il2CppClass::FromTypeDefinitionIndex(ArchetypeComponentTypeTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
