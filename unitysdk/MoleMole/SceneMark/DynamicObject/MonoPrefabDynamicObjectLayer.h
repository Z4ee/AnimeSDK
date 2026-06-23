#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneMark/DynamicObject/MonoDynamicObjectLayer.h"

namespace MoleMole::SceneMark { class DynamicSceneDynamicObjectLayer; }
namespace System { class String; }

#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONOPREFABDYNAMICOBJECTLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19174CD0)
#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONOPREFABDYNAMICOBJECTLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19175030)
#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONOPREFABDYNAMICOBJECTLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x191752A0)

namespace MoleMole::SceneMark::DynamicObject
{
	inline static constexpr unsigned int MonoPrefabDynamicObjectLayer_TypeDefinitionIndex = 47742;

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
