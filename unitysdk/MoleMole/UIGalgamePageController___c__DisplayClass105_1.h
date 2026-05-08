#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass105_0; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS105_1__CTOR_OFFSET UNITYSDK_OFFSET(0x149D5360)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS105_1__PLAYPICTURESTORYNODE_B__5_OFFSET UNITYSDK_OFFSET(0x149D5370)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS105_1__PLAYPICTURESTORYNODE_B__6_OFFSET UNITYSDK_OFFSET(0x149D5450)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass105_1_TypeDefinitionIndex = 41767;

	class UIGalgamePageController___c__DisplayClass105_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass105_0* CS___8__locals1; // 0x10
		::System::Int64 startTimeStampMs; // 0x18
		::System::Int64 stopTimeStampMs; // 0x20
		::System::Int32 voiceLengthMs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS105_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayPictureStoryNode_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS105_1__PLAYPICTURESTORYNODE_B__5_OFFSET))(this);
		}

		::System::Void _PlayPictureStoryNode_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS105_1__PLAYPICTURESTORYNODE_B__6_OFFSET))(this);
		}
	};
}
