#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/TransformData.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__DISPLAYCLASS249_0__BAKETOEXISTINGPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0x8C841C0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__DISPLAYCLASS249_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8C7AB20)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAsset___c__DisplayClass249_0_TypeDefinitionIndex = 43503;

	class HEU_HoudiniAsset___c__DisplayClass249_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* previousTransformValues; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__DISPLAYCLASS249_0__CTOR_OFFSET))(this);
		}

		::System::Void _BakeToExistingPrefab_b__0(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__DISPLAYCLASS249_0__BAKETOEXISTINGPREFAB_B__0_OFFSET))(this, trans);
		}
	};
}
