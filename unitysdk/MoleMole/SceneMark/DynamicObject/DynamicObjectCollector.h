#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::SceneMark::DynamicObject { class DynamicObjectCollector_GameObjectKeyValue; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_DYNAMICOBJECTCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1792BA90)

namespace MoleMole::SceneMark::DynamicObject
{
	inline static constexpr unsigned int DynamicObjectCollector_TypeDefinitionIndex = 90856;

	class DynamicObjectCollector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::SceneMark::DynamicObject::DynamicObjectCollector_GameObjectKeyValue*>* collectObjects; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICOBJECT_DYNAMICOBJECTCOLLECTOR__CTOR_OFFSET))(this);
		}
	};
}
