#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace UnityEngine { class GameObject; }

#define PARADOXNOTION_OBJECTUTILS___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A215460)
#define PARADOXNOTION_OBJECTUTILS___C__DISPLAYCLASS5_0__FINDGAMEOBJECTSWITHINLAYERMASK_B__0_OFFSET UNITYSDK_OFFSET(0x1A215470)

namespace ParadoxNotion
{
	inline static constexpr unsigned int ObjectUtils___c__DisplayClass5_0_TypeDefinitionIndex = 27495;

	class ObjectUtils___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* exclude; // 0x10
		::UnityEngine::LayerMask mask; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_OBJECTUTILS___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindGameObjectsWithinLayerMask_b__0(::UnityEngine::GameObject* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PARADOXNOTION_OBJECTUTILS___C__DISPLAYCLASS5_0__FINDGAMEOBJECTSWITHINLAYERMASK_B__0_OFFSET))(this, x);
		}
	};
}
