#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneMark/SceneMarkData_1.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_SCENEMARK_PREHITBOUNDSMARK_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x15BB25D0)
#define MOLEMOLE_SCENEMARK_PREHITBOUNDSMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB27D0)
#define MOLEMOLE_SCENEMARK_PREHITBOUNDSMARK___BASE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x15BB27F0)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int PreHitBoundsMark_TypeDefinitionIndex = 77124;

	class PreHitBoundsMark : public ::MoleMole::SceneMark::SceneMarkData_1<::MoleMole::SceneMark::PreHitBoundsMark*>
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Bounds>* AABBBounds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_PREHITBOUNDSMARK__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmos(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_PREHITBOUNDSMARK_ONDRAWGIZMOS_OFFSET))(this, transform);
		}

		::System::Void __base_OnDrawGizmos(::UnityEngine::Transform* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_PREHITBOUNDSMARK___BASE_ONDRAWGIZMOS_OFFSET))(this, P0);
		}
	};
}
