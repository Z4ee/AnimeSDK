#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FATEBGMSTATE_FORCEPLAYMENUBGM_OFFSET UNITYSDK_OFFSET(0xCF2BB00)
#define RPG_CLIENT_FATEBGMSTATE_INIT_OFFSET UNITYSDK_OFFSET(0xCF2BAC0)
#define RPG_CLIENT_FATEBGMSTATE_SETPLAYMENUBGM_OFFSET UNITYSDK_OFFSET(0xCF2BCE0)
#define RPG_CLIENT_FATEBGMSTATE_STOPMENUBGM_OFFSET UNITYSDK_OFFSET(0xCF2BD40)
#define RPG_CLIENT_FATEBGMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xCF2BAB0)
#define RPG_CLIENT_FATEBGMSTATE__PLAYBGM_OFFSET UNITYSDK_OFFSET(0xCF2BB50)
#define RPG_CLIENT_FATEBGMSTATE__STOPBGM_OFFSET UNITYSDK_OFFSET(0xCF2BD90)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBGMState_TypeDefinitionIndex = 64086;

	class FateBGMState : public ::System::Object
	{
	public:
		// static const ::System::String* _MENU_BGM_STATE; // 0x0
		::System::Boolean _BGMPlayingState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBGMSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBGMSTATE_INIT_OFFSET))(this);
		}

		::System::Void ForcePlayMenuBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBGMSTATE_FORCEPLAYMENUBGM_OFFSET))(this);
		}

		::System::Void SetPlayMenuBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBGMSTATE_SETPLAYMENUBGM_OFFSET))(this);
		}

		::System::Void StopMenuBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBGMSTATE_STOPMENUBGM_OFFSET))(this);
		}

		::System::Void _PlayBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBGMSTATE__PLAYBGM_OFFSET))(this);
		}

		::System::Void _StopBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBGMSTATE__STOPBGM_OFFSET))(this);
		}
	};
}
