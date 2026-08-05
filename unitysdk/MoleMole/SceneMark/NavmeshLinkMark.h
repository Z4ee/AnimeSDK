#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneMark/SceneMarkData_1.h"

namespace UnityEngine::AI { class NavMeshLink; }

#define MOLEMOLE_SCENEMARK_NAVMESHLINKMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x190A8400)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int NavmeshLinkMark_TypeDefinitionIndex = 44232;

	class NavmeshLinkMark : public ::MoleMole::SceneMark::SceneMarkData_1<::MoleMole::SceneMark::NavmeshLinkMark*>
	{
	public:
		::UnityEngine::AI::NavMeshLink* ComponentRef; // 0x18
		::System::Boolean DefaultEnable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_NAVMESHLINKMARK__CTOR_OFFSET))(this);
		}
	};
}
