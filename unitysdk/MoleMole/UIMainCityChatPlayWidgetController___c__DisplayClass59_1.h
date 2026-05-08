#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityChatPlayWidgetController___c__DisplayClass59_0; }
namespace System { class String; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS59_1__CTOR_OFFSET UNITYSDK_OFFSET(0x163CB030)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS59_1__PLAYSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0x163CB040)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS59_1__PLAYSTORYNODE_B__2_OFFSET UNITYSDK_OFFSET(0x163CB090)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass59_1_TypeDefinitionIndex = 47771;

	class UIMainCityChatPlayWidgetController___c__DisplayClass59_1 : public ::System::Object
	{
	public:
		::System::String* showSettingKey; // 0x10
		::System::String* voiceKey; // 0x18
		::MoleMole::UIMainCityChatPlayWidgetController___c__DisplayClass59_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS59_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS59_1__PLAYSTORYNODE_B__1_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS59_1__PLAYSTORYNODE_B__2_OFFSET))(this);
		}
	};
}
