#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneMark/LevelExtraData.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_SCENEMARK_SCENEMARKDATABASE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x190A8420)
#define MOLEMOLE_SCENEMARK_SCENEMARKDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x190A8470)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int SceneMarkDataBase_TypeDefinitionIndex = 74777;

	class SceneMarkDataBase : public ::MoleMole::SceneMark::LevelExtraData
	{
	public:
		::System::String* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKDATABASE__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmos(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKDATABASE_ONDRAWGIZMOS_OFFSET))(this, transform);
		}
	};
}
