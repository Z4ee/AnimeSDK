#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine::Unity { class ISpineComponent; }

#define SPINE_UNITY_ISPINECOMPONENTEXTENSIONS_ISNULLORDESTROYED_OFFSET UNITYSDK_OFFSET(0x168A7AB0)

namespace Spine::Unity
{
	inline static constexpr unsigned int ISpineComponentExtensions_TypeDefinitionIndex = 42268;

	class ISpineComponentExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsNullOrDestroyed(::Spine::Unity::ISpineComponent* a1)
		{
			return ((::System::Boolean(*)(::Spine::Unity::ISpineComponent*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISPINECOMPONENTEXTENSIONS_ISNULLORDESTROYED_OFFSET))(a1);
		}
	};
}
