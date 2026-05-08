#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int HierarchicalHashGrid2DDebugOptions_TypeDefinitionIndex = 8953;

	class HierarchicalHashGrid2DDebugOptions : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EnableFixInvalidParentPointerCheck()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HierarchicalHashGrid2DDebugOptions_TypeDefinitionIndex)->GetStaticField(0x12120);
		}
	};
}
