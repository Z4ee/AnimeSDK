#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/TransformData.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_PARTDATA___C__DISPLAYCLASS86_0__COPYCHILDGAMEOBJECTS_B__0_OFFSET UNITYSDK_OFFSET(0x8480C00)
#define HOUDINIENGINEUNITY_HEU_PARTDATA___C__DISPLAYCLASS86_0__CTOR_OFFSET UNITYSDK_OFFSET(0x847FAF0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PartData___c__DisplayClass86_0_TypeDefinitionIndex = 37644;

	class HEU_PartData___c__DisplayClass86_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* previousTransformValues; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA___C__DISPLAYCLASS86_0__CTOR_OFFSET))(this);
		}

		::System::Void _CopyChildGameObjects_b__0(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA___C__DISPLAYCLASS86_0__COPYCHILDGAMEOBJECTS_B__0_OFFSET))(this, trans);
		}
	};
}
