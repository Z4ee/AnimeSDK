#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneMark/DefaultDynamicObjectLayer.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_SCENEMARK_BASESCENEDYNAMICOBJECTLAYER_METHOD_2_C17BCF092B758D23_OFFSET UNITYSDK_OFFSET(0x125ED320)
#define MOLEMOLE_SCENEMARK_BASESCENEDYNAMICOBJECTLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x125ED250)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int BaseSceneDynamicObjectLayer_TypeDefinitionIndex = 41149;

	class BaseSceneDynamicObjectLayer : public ::MoleMole::SceneMark::DefaultDynamicObjectLayer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_BASESCENEDYNAMICOBJECTLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_C17BCF092B758D23(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_BASESCENEDYNAMICOBJECTLAYER_METHOD_2_C17BCF092B758D23_OFFSET))(this, a1);
		}
	};
}
