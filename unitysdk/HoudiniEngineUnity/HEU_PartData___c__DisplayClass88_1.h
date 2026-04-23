#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/TransformData.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_PARTDATA___C__DISPLAYCLASS88_1__BAKEPARTTOGAMEOBJECT_B__1_OFFSET UNITYSDK_OFFSET(0x8CA9030)
#define HOUDINIENGINEUNITY_HEU_PARTDATA___C__DISPLAYCLASS88_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8CA8640)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PartData___c__DisplayClass88_1_TypeDefinitionIndex = 43523;

	class HEU_PartData___c__DisplayClass88_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* previousTransformValues; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA___C__DISPLAYCLASS88_1__CTOR_OFFSET))(this);
		}

		::System::Void _BakePartToGameObject_b__1(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA___C__DISPLAYCLASS88_1__BAKEPARTTOGAMEOBJECT_B__1_OFFSET))(this, trans);
		}
	};
}
