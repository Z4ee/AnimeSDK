#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneMark/SceneMarkData_1.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_SCENEMARK_SIMPLEBOUNDSMARK_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1386A940)
#define MOLEMOLE_SCENEMARK_SIMPLEBOUNDSMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x1386AB40)
#define MOLEMOLE_SCENEMARK_SIMPLEBOUNDSMARK___BASE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1386AB60)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int SimpleBoundsMark_TypeDefinitionIndex = 64710;

	class SimpleBoundsMark : public ::MoleMole::SceneMark::SceneMarkData_1<::MoleMole::SceneMark::SimpleBoundsMark*>
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Bounds>* AABBBounds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SIMPLEBOUNDSMARK__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmos(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SIMPLEBOUNDSMARK_ONDRAWGIZMOS_OFFSET))(this, transform);
		}

		::System::Void __base_OnDrawGizmos(::UnityEngine::Transform* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SIMPLEBOUNDSMARK___BASE_ONDRAWGIZMOS_OFFSET))(this, P0);
		}
	};
}
