#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneMark/DynamicObject/MonoDynamicObjectLayer.h"

#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONOSCENEDYNAMICOBJECTLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1688BD00)

namespace MoleMole::SceneMark::DynamicObject
{
	inline static constexpr unsigned int MonoSceneDynamicObjectLayer_TypeDefinitionIndex = 85681;

	class MonoSceneDynamicObjectLayer : public ::MoleMole::SceneMark::DynamicObject::MonoDynamicObjectLayer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONOSCENEDYNAMICOBJECTLAYER__CTOR_OFFSET))(this);
		}
	};
}
