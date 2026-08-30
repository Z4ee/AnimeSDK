#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/TransformData.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_PARTDATA___C__DISPLAYCLASS99_1__BAKEPARTTOGAMEOBJECT_B__1_OFFSET UNITYSDK_OFFSET(0x11A90990)
#define HOUDINIENGINEUNITY_HEU_PARTDATA___C__DISPLAYCLASS99_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11A8F9E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PartData___c__DisplayClass99_1_TypeDefinitionIndex = 39124;

	class HEU_PartData___c__DisplayClass99_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* previousTransformValues; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA___C__DISPLAYCLASS99_1__CTOR_OFFSET))(this);
		}

		::System::Void _BakePartToGameObject_b__1(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA___C__DISPLAYCLASS99_1__BAKEPARTTOGAMEOBJECT_B__1_OFFSET))(this, a1);
		}
	};
}
