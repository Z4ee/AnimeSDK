#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneMark/DynamicObject/MonoDynamicObjectLayer.h"

namespace MoleMole::SceneMark { class DynamicSceneDynamicObjectLayer; }
namespace System { class String; }

#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONOPREFABDYNAMICOBJECTLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x11909740)
#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONOPREFABDYNAMICOBJECTLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11909AA0)
#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONOPREFABDYNAMICOBJECTLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x11909D10)

namespace MoleMole::SceneMark::DynamicObject
{
	inline static constexpr unsigned int MonoPrefabDynamicObjectLayer_TypeDefinitionIndex = 68953;

	class MonoPrefabDynamicObjectLayer : public ::MoleMole::SceneMark::DynamicObject::MonoDynamicObjectLayer
	{
	public:
		::System::String* LayerName; // 0x60
		::MoleMole::SceneMark::DynamicSceneDynamicObjectLayer* layer; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONOPREFABDYNAMICOBJECTLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONOPREFABDYNAMICOBJECTLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONOPREFABDYNAMICOBJECTLAYER_ONDESTROY_OFFSET))(this);
		}
	};
}
