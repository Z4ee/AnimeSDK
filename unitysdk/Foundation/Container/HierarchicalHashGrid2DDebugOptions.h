#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_CONTAINER_HIERARCHICALHASHGRID2DDEBUGOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD94290)

namespace Foundation::Container
{
	inline static constexpr unsigned int HierarchicalHashGrid2DDebugOptions_TypeDefinitionIndex = 8552;

	class HierarchicalHashGrid2DDebugOptions : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EnableFixInvalidParentPointerCheck()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HierarchicalHashGrid2DDebugOptions_TypeDefinitionIndex)->GetStaticField(0x3DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_HIERARCHICALHASHGRID2DDEBUGOPTIONS__CCTOR_OFFSET))();
		}
	};
}
