#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass93_0; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS93_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15807930)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS93_1__PLAYSUBSTORYNODE_B__3_OFFSET UNITYSDK_OFFSET(0x15807940)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS93_1__PLAYSUBSTORYNODE_B__4_OFFSET UNITYSDK_OFFSET(0x15807C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass93_1_TypeDefinitionIndex = 41774;

	class UIGalgamePageController___c__DisplayClass93_1 : public ::System::Object
	{
	public:
		::System::Action* __9__4; // 0x10
		::UnityEngine::Animation* stageAnim; // 0x18
		::MoleMole::UIGalgamePageController___c__DisplayClass93_0* CS___8__locals1; // 0x20
		::System::Int32 realIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS93_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySubStoryNode_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS93_1__PLAYSUBSTORYNODE_B__3_OFFSET))(this);
		}

		::System::Void _PlaySubStoryNode_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS93_1__PLAYSUBSTORYNODE_B__4_OFFSET))(this);
		}
	};
}
