#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FATEBGMSTATE_FORCEPLAYMENUBGM_OFFSET UNITYSDK_OFFSET(0x196F0B20)
#define RPG_CLIENT_FATEBGMSTATE_INIT_OFFSET UNITYSDK_OFFSET(0x196F0AE0)
#define RPG_CLIENT_FATEBGMSTATE_SETPLAYMENUBGM_OFFSET UNITYSDK_OFFSET(0x196F0D00)
#define RPG_CLIENT_FATEBGMSTATE_STOPMENUBGM_OFFSET UNITYSDK_OFFSET(0x196F0D60)
#define RPG_CLIENT_FATEBGMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x196F0AD0)
#define RPG_CLIENT_FATEBGMSTATE__PLAYBGM_OFFSET UNITYSDK_OFFSET(0x196F0B70)
#define RPG_CLIENT_FATEBGMSTATE__STOPBGM_OFFSET UNITYSDK_OFFSET(0x196F0DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBGMState_TypeDefinitionIndex = 61105;

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
