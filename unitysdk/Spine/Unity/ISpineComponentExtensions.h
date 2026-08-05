#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine::Unity { class ISpineComponent; }

#define SPINE_UNITY_ISPINECOMPONENTEXTENSIONS_ISNULLORDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C166F00)

namespace Spine::Unity
{
	inline static constexpr unsigned int ISpineComponentExtensions_TypeDefinitionIndex = 40161;

	class ISpineComponentExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsNullOrDestroyed(::Spine::Unity::ISpineComponent* component)
		{
			return ((::System::Boolean(*)(::Spine::Unity::ISpineComponent*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISPINECOMPONENTEXTENSIONS_ISNULLORDESTROYED_OFFSET))(component);
		}
	};
}
