#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingHPChangeFormatType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::LittleGame::ChenLing { class ChenLingJumpTextView_HPChangeFormatTypePair; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW_SHOWCOIN_OFFSET UNITYSDK_OFFSET(0xA683890)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0xA683350)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA683B10)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW__FINDHPCHANGEFORMATTYPEPAIR_OFFSET UNITYSDK_OFFSET(0xA6835F0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW__SETPAIRVISIBLE_OFFSET UNITYSDK_OFFSET(0xA683680)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingJumpTextView_TypeDefinitionIndex = 71470;

	class ChenLingJumpTextView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::LittleGame::ChenLing::ChenLingJumpTextView_HPChangeFormatTypePair*>* _HPChangeFormatTypePairs; // 0x18
		::System::Single MinXOffset; // 0x20
		::System::Single MaxXOffset; // 0x24
		::System::Single MinYOffset; // 0x28
		::System::Single MaxYOffset; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Show(::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType hpChangeFormatType, ::System::Int32 deltaValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW_SHOW_OFFSET))(this, hpChangeFormatType, deltaValue);
		}

		::System::Void ShowCoin(::System::Int32 coinValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW_SHOWCOIN_OFFSET))(this, coinValue);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingJumpTextView_HPChangeFormatTypePair* _FindHPChangeFormatTypePair(::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType hpChangeFormatType)
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingJumpTextView_HPChangeFormatTypePair*(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW__FINDHPCHANGEFORMATTYPEPAIR_OFFSET))(this, hpChangeFormatType);
		}

		::System::Void _SetPairVisible(::RPG::Client::LittleGame::ChenLing::ChenLingJumpTextView_HPChangeFormatTypePair* item, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingJumpTextView_HPChangeFormatTypePair*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW__SETPAIRVISIBLE_OFFSET))(this, item, visible);
		}
	};
}
