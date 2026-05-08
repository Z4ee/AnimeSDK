#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass104_0; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15F06B80)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_1__PLAYNOAVATARSTORYNODE_B__4_OFFSET UNITYSDK_OFFSET(0x15F06B90)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_1__PLAYNOAVATARSTORYNODE_B__5_OFFSET UNITYSDK_OFFSET(0x15F06C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass104_1_TypeDefinitionIndex = 41803;

	class UIGalgamePageController___c__DisplayClass104_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass104_0* CS___8__locals1; // 0x10
		::System::Int32 voiceLengthMs; // 0x18
		::System::Int64 stopTimeStampMs; // 0x20
		::System::Int64 startTimeStampMs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNoAvatarStoryNode_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_1__PLAYNOAVATARSTORYNODE_B__4_OFFSET))(this);
		}

		::System::Void _PlayNoAvatarStoryNode_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_1__PLAYNOAVATARSTORYNODE_B__5_OFFSET))(this);
		}
	};
}
