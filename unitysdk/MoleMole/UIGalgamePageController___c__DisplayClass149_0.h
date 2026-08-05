#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D36393D5F41E9497;
namespace MoleMole { class UIGalgamePageController; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS149_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD1ED0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS149_0__PLAYSUBSTORYNODE_B__0_OFFSET UNITYSDK_OFFSET(0x18AD2060)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS149_0__PLAYSUBSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0x18AD1EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass149_0_TypeDefinitionIndex = 62768;

	class UIGalgamePageController___c__DisplayClass149_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::System::String* poseKey; // 0x18
		::Class_1_D36393D5F41E9497* avatarSetting; // 0x20
		::System::String* facialKey; // 0x28
		::System::Int32 locationKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS149_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySubStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS149_0__PLAYSUBSTORYNODE_B__1_OFFSET))(this);
		}

		::System::Void _PlaySubStoryNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS149_0__PLAYSUBSTORYNODE_B__0_OFFSET))(this);
		}
	};
}
