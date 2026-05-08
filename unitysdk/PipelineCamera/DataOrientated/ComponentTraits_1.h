#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/ComponentMetaData.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ComponentTraits_1_TypeDefinitionIndex = 36138;

	template <typename TScope>
	struct ComponentTraits_1
	{
		static ::System::Int32* StaticGet__componentIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ComponentTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet__tagIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ComponentTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet__chunkComponentIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ComponentTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet__archetypeComponentIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ComponentTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::PipelineCamera::DataOrientated::ComponentMetaData>** StaticGet__componentMetaData()
		{
			return (::Il2CppArray<::PipelineCamera::DataOrientated::ComponentMetaData>**)Il2CppClass::FromTypeDefinitionIndex(ComponentTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::PipelineCamera::DataOrientated::ComponentMetaData>** StaticGet__chunkComponentMetaData()
		{
			return (::Il2CppArray<::PipelineCamera::DataOrientated::ComponentMetaData>**)Il2CppClass::FromTypeDefinitionIndex(ComponentTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::PipelineCamera::DataOrientated::ComponentMetaData>** StaticGet__archetypeComponentMetaData()
		{
			return (::Il2CppArray<::PipelineCamera::DataOrientated::ComponentMetaData>**)Il2CppClass::FromTypeDefinitionIndex(ComponentTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
