#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_SCENEOBJECTSONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F771600)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int SceneObjectsOnlyAttribute_TypeDefinitionIndex = 7353;

	class SceneObjectsOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SCENEOBJECTSONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
