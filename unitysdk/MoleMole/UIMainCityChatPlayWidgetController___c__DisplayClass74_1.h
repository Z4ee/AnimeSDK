#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole { class UIMainCityChatPlayWidgetController___c__DisplayClass74_0; }
namespace MoleMole::Battle { class AnimatorParamControl; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS74_1__CTOR_OFFSET UNITYSDK_OFFSET(0x171433A0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS74_1__INLEVELPLAYSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0x171433B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass74_1_TypeDefinitionIndex = 83718;

	class UIMainCityChatPlayWidgetController___c__DisplayClass74_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityChatPlayWidgetController___c__DisplayClass74_0* CS___8__locals1; // 0x10
		::Class_3_F33F9DC5F4112336* animatorComponent; // 0x18
		::MoleMole::Battle::AnimatorParamControl* animatorParamControl; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS74_1__CTOR_OFFSET))(this);
		}

		::System::Void _InLevelPlayStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS74_1__INLEVELPLAYSTORYNODE_B__1_OFFSET))(this);
		}
	};
}
