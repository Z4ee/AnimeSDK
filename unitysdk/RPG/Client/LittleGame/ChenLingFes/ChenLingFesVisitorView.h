#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesView.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVISITORVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19B958A0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVISITORVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B95950)

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesVisitorView_TypeDefinitionIndex = 73837;

	class ChenLingFesVisitorView : public ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesView
	{
	public:
		::UnityEngine::Animator* Animator; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVISITORVIEW__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVISITORVIEW_ONENABLE_OFFSET))(this);
		}
	};
}
