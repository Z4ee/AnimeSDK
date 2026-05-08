#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass86_0; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_3__CTOR_OFFSET UNITYSDK_OFFSET(0x155AFB70)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_3__PLAYSTORYNODE_B__12_OFFSET UNITYSDK_OFFSET(0x155AFB80)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_3__PLAYSTORYNODE_B__13_OFFSET UNITYSDK_OFFSET(0x155AFE80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass86_3_TypeDefinitionIndex = 41761;

	class UIGalgamePageController___c__DisplayClass86_3 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* stageAnim; // 0x10
		::System::Action* __9__13; // 0x18
		::MoleMole::UIGalgamePageController___c__DisplayClass86_0* CS___8__locals3; // 0x20
		::System::Int32 realIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_3__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_3__PLAYSTORYNODE_B__12_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__13()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_3__PLAYSTORYNODE_B__13_OFFSET))(this);
		}
	};
}
