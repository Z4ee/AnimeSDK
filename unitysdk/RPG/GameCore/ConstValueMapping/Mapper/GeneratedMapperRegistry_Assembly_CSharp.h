#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_CONSTVALUEMAPPING_MAPPER_GENERATEDMAPPERREGISTRY_ASSEMBLY_CSHARP__REGISTERALL_OFFSET UNITYSDK_OFFSET(0xE620350)

namespace RPG::GameCore::ConstValueMapping::Mapper
{
	inline static constexpr unsigned int GeneratedMapperRegistry_Assembly_CSharp_TypeDefinitionIndex = 59265;

	class GeneratedMapperRegistry_Assembly_CSharp : public ::System::Object
	{
	public:
		static ::System::Void _RegisterAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEMAPPING_MAPPER_GENERATEDMAPPERREGISTRY_ASSEMBLY_CSHARP__REGISTERALL_OFFSET))();
		}
	};
}
