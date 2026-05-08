#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneMark/DynamicObject/MonoDynamicObjectLayer.h"

#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONOSCENEDYNAMICOBJECTLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB25C0)

namespace MoleMole::SceneMark::DynamicObject
{
	inline static constexpr unsigned int MonoSceneDynamicObjectLayer_TypeDefinitionIndex = 41274;

	class MonoSceneDynamicObjectLayer : public ::MoleMole::SceneMark::DynamicObject::MonoDynamicObjectLayer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONOSCENEDYNAMICOBJECTLAYER__CTOR_OFFSET))(this);
		}
	};
}
