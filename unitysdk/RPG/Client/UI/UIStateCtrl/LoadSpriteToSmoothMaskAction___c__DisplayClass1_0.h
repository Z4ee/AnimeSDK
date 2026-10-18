#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8AA12367DC523613;
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE33FDA0)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION___C__DISPLAYCLASS1_0__ONSTART_B__0_OFFSET UNITYSDK_OFFSET(0xE33FE70)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int LoadSpriteToSmoothMaskAction___c__DisplayClass1_0_TypeDefinitionIndex = 74050;

	class LoadSpriteToSmoothMaskAction___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::SmoothMask* smoothMask; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStart_b__0(::Class_1_8AA12367DC523613* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8AA12367DC523613*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION___C__DISPLAYCLASS1_0__ONSTART_B__0_OFFSET))(this, a1);
		}
	};
}
