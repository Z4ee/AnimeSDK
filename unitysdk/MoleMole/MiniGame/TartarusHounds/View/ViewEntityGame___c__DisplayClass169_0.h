#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME___C__DISPLAYCLASS169_0__CREATEWOOLBLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x16E656C0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME___C__DISPLAYCLASS169_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E656B0)

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int ViewEntityGame___c__DisplayClass169_0_TypeDefinitionIndex = 51164;

	class ViewEntityGame___c__DisplayClass169_0 : public ::System::Object
	{
	public:
		::System::String* stableAnim; // 0x10
		::UnityEngine::GameObject* woolAnimComponent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME___C__DISPLAYCLASS169_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateWoolBlock_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME___C__DISPLAYCLASS169_0__CREATEWOOLBLOCK_B__0_OFFSET))(this);
		}
	};
}
