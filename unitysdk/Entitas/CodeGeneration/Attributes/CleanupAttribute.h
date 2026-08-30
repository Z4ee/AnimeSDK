#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/CleanupMode.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_CLEANUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x165317E0)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int CleanupAttribute_TypeDefinitionIndex = 10011;

	class CleanupAttribute : public ::System::Attribute
	{
	public:
		::Entitas::CodeGeneration::Attributes::CleanupMode cleanupMode; // 0x10

		::System::Void _ctor(::Entitas::CodeGeneration::Attributes::CleanupMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::CodeGeneration::Attributes::CleanupMode))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_CLEANUPATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
