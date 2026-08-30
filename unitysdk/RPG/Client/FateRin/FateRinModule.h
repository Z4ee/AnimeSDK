#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_CC1C2BAFAFD12197;

#define RPG_CLIENT_FATERIN_FATERINMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B5A8600)
#define RPG_CLIENT_FATERIN_FATERINMODULE_GETFATERINHANDBOOKFUNCISNEW_OFFSET UNITYSDK_OFFSET(0x1B5A8B70)
#define RPG_CLIENT_FATERIN_FATERINMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B5A8460)
#define RPG_CLIENT_FATERIN_FATERINMODULE_MARKNEEDAUTOSHOWCHALLENGEENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x1B5A8770)
#define RPG_CLIENT_FATERIN_FATERINMODULE_MARKNEEDAUTOSHOWHOUGUMAPPAGE_OFFSET UNITYSDK_OFFSET(0x1B5A7C50)
#define RPG_CLIENT_FATERIN_FATERINMODULE_MARKNEEDAUTOSHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1B5A8130)
#define RPG_CLIENT_FATERIN_FATERINMODULE_MARKSHOWCARDREWARDREPLACEONNEXTUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B5A8B30)
#define RPG_CLIENT_FATERIN_FATERINMODULE_PREPAREMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1B5A88A0)
#define RPG_CLIENT_FATERIN_FATERINMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1B5A87D0)
#define RPG_CLIENT_FATERIN_FATERINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5A8D10)
#define RPG_CLIENT_FATERIN_FATERINMODULE__ONCARDUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B5A86B0)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinModule_TypeDefinitionIndex = 79306;

	class FateRinModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Boolean _NeedAutoShowChallengeEntrancePage; // 0x10
		::System::Boolean _ShowCardRewardReplaceOnNextUnlock; // 0x11
		::System::Boolean _AutoShowChallengeIsFirstPassDeep; // 0x12
		::System::Boolean _NeedAutoShowHouguMapPage; // 0x13
		::System::Boolean _NeedAutoShowMainPage; // 0x14
		::System::UInt32 _AutoShowChallengeFightID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnCardUnlocked(::Class_1_CC1C2BAFAFD12197* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CC1C2BAFAFD12197*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE__ONCARDUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void MarkNeedAutoShowMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_MARKNEEDAUTOSHOWMAINPAGE_OFFSET))(this);
		}

		::System::Void MarkNeedAutoShowHouguMapPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_MARKNEEDAUTOSHOWHOUGUMAPPAGE_OFFSET))(this);
		}

		::System::Void MarkNeedAutoShowChallengeEntrancePage(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_MARKNEEDAUTOSHOWCHALLENGEENTRANCEPAGE_OFFSET))(this, a1, a2);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void PrepareMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_PREPAREMISSIONDATA_OFFSET))(this);
		}

		::System::Void MarkShowCardRewardReplaceOnNextUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_MARKSHOWCARDREWARDREPLACEONNEXTUNLOCK_OFFSET))(this);
		}

		::System::Boolean GetFateRinHandbookFuncIsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_GETFATERINHANDBOOKFUNCISNEW_OFFSET))(this);
		}
	};
}
