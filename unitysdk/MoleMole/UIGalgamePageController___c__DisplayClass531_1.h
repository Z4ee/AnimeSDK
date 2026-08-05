#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D36393D5F41E9497;
namespace MoleMole { class UIGalgamePageController___c__DisplayClass531_0; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS531_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBCBC0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS531_1__PLAYNPCFADEOUT_B__1_OFFSET UNITYSDK_OFFSET(0x16DBCBD0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS531_1__PLAYNPCFADEOUT_B__2_OFFSET UNITYSDK_OFFSET(0x16DBCC10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass531_1_TypeDefinitionIndex = 62835;

	class UIGalgamePageController___c__DisplayClass531_1 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* stageNodeRoot; // 0x10
		::UnityEngine::RectTransform* whiteBGRoot; // 0x18
		::Class_1_D36393D5F41E9497* avatarSetting; // 0x20
		::MoleMole::UIGalgamePageController___c__DisplayClass531_0* CS___8__locals1; // 0x28
		::System::Int32 location; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS531_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeOut_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS531_1__PLAYNPCFADEOUT_B__1_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeOut_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS531_1__PLAYNPCFADEOUT_B__2_OFFSET))(this);
		}
	};
}
