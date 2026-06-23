#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageController___c__DisplayClass40_0; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS40_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17149E10)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS40_1__SHOWTAPEDECKINFO_B__1_OFFSET UNITYSDK_OFFSET(0x17149E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass40_1_TypeDefinitionIndex = 76833;

	class UIMainStoryPageController___c__DisplayClass40_1 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* deckInfoAnimation; // 0x10
		::MoleMole::UIMainStoryPageController___c__DisplayClass40_0* CS___8__locals1; // 0x18
		::System::String* fadeInAnimation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS40_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTapeDeckInfo_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS40_1__SHOWTAPEDECKINFO_B__1_OFFSET))(this);
		}
	};
}
