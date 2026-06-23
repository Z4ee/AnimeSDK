#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F091E965E210217_11;
class MatAnimation;
namespace MoleMole { class UIEquipDevelopPopWindowController___c__DisplayClass50_2; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_3__CTOR_OFFSET UNITYSDK_OFFSET(0x14C20C60)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_3__ONCLICKEQUIPLEVELBTN_B__3_OFFSET UNITYSDK_OFFSET(0x14C20C70)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_3__ONCLICKEQUIPLEVELBTN_B__4_OFFSET UNITYSDK_OFFSET(0x14C20D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDevelopPopWindowController___c__DisplayClass50_3_TypeDefinitionIndex = 84132;

	class UIEquipDevelopPopWindowController___c__DisplayClass50_3 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* anim; // 0x10
		::Class_3_9F091E965E210217_11* newInfo; // 0x18
		::MoleMole::UIEquipDevelopPopWindowController___c__DisplayClass50_2* CS___8__locals1; // 0x20
		::MatAnimation* matAnim; // 0x28
		::System::Int32 canMaxLevel; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_3__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickEquipLevelBtn_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_3__ONCLICKEQUIPLEVELBTN_B__3_OFFSET))(this);
		}

		::System::Void _OnClickEquipLevelBtn_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_3__ONCLICKEQUIPLEVELBTN_B__4_OFFSET))(this);
		}
	};
}
