#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingHPChangeFormatType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::LittleGame::ChenLing { class ChenLingJumpTextView_HPChangeFormatTypePair; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW_SHOWCOIN_OFFSET UNITYSDK_OFFSET(0xBDCDF40)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0xBDCDA10)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBDCE1B0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW__FINDHPCHANGEFORMATTYPEPAIR_OFFSET UNITYSDK_OFFSET(0xBDCDCA0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW__SETPAIRVISIBLE_OFFSET UNITYSDK_OFFSET(0xBDCDD30)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingJumpTextView_TypeDefinitionIndex = 72492;

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

		::System::Void Show(::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW_SHOW_OFFSET))(this, a1, a2);
		}

		::System::Void ShowCoin(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW_SHOWCOIN_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingJumpTextView_HPChangeFormatTypePair* _FindHPChangeFormatTypePair(::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType a1)
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingJumpTextView_HPChangeFormatTypePair*(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW__FINDHPCHANGEFORMATTYPEPAIR_OFFSET))(this, a1);
		}

		::System::Void _SetPairVisible(::RPG::Client::LittleGame::ChenLing::ChenLingJumpTextView_HPChangeFormatTypePair* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingJumpTextView_HPChangeFormatTypePair*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW__SETPAIRVISIBLE_OFFSET))(this, a1, a2);
		}
	};
}
