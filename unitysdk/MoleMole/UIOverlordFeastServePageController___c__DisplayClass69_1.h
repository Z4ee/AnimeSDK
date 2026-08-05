#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIOverlordFeastServePageController___c__DisplayClass69_0; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS69_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17976EE0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS69_1__ONNUMCHANGE_B__1_OFFSET UNITYSDK_OFFSET(0x17976EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastServePageController___c__DisplayClass69_1_TypeDefinitionIndex = 53334;

	class UIOverlordFeastServePageController___c__DisplayClass69_1 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* ArrowRect; // 0x10
		::MoleMole::UIOverlordFeastServePageController___c__DisplayClass69_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS69_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnNumChange_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS69_1__ONNUMCHANGE_B__1_OFFSET))(this);
		}
	};
}
