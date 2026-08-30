#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierView_AnimationCurveEntry.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD4B9E90)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW___C__DISPLAYCLASS22_0__GETANIMATIONCURVEBYNAME_B__0_OFFSET UNITYSDK_OFFSET(0xD4BBB60)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingSoldierView___c__DisplayClass22_0_TypeDefinitionIndex = 77508;

	class ChenLingSoldierView___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAnimationCurveByName_b__0(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierView_AnimationCurveEntry a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierView_AnimationCurveEntry))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW___C__DISPLAYCLASS22_0__GETANIMATIONCURVEBYNAME_B__0_OFFSET))(this, a1);
		}
	};
}
