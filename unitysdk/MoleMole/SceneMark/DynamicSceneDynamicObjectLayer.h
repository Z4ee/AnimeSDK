#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneMark/DefaultDynamicObjectLayer.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_SCENEMARK_DYNAMICSCENEDYNAMICOBJECTLAYER_METHOD_2_9E09F2D2DB4CB0E5_OFFSET UNITYSDK_OFFSET(0x129D8B90)
#define MOLEMOLE_SCENEMARK_DYNAMICSCENEDYNAMICOBJECTLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x129D89B0)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int DynamicSceneDynamicObjectLayer_TypeDefinitionIndex = 87965;

	class DynamicSceneDynamicObjectLayer : public ::MoleMole::SceneMark::DefaultDynamicObjectLayer
	{
	public:
		::System::Void _ctor(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICSCENEDYNAMICOBJECTLAYER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_9E09F2D2DB4CB0E5(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICSCENEDYNAMICOBJECTLAYER_METHOD_2_9E09F2D2DB4CB0E5_OFFSET))(this, a1);
		}
	};
}
