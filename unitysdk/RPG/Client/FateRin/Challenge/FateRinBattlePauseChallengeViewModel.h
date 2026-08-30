#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_1_F681AD6B57DC77A7;
namespace RPG::Client::FateRin::Challenge { class FateRinBattlePauseChallengeBuffViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_GET_BUFFVMLIST_OFFSET UNITYSDK_OFFSET(0xCFFCF50)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_GET_CURTURN_OFFSET UNITYSDK_OFFSET(0xCFFCF30)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_GET_DEEPBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xCFFCF90)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_GET_NORMALBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xCFFCF70)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_SET_BUFFVMLIST_OFFSET UNITYSDK_OFFSET(0xCFFCF60)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_SET_CURTURN_OFFSET UNITYSDK_OFFSET(0xCFFCF40)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_SET_DEEPBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xCFFCFA0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_SET_NORMALBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xCFFCF80)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL__BUILDINFO_OFFSET UNITYSDK_OFFSET(0xCFFC380)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCFFC300)

namespace RPG::Client::FateRin::Challenge
{
	inline static constexpr unsigned int FateRinBattlePauseChallengeViewModel_TypeDefinitionIndex = 79703;

	class FateRinBattlePauseChallengeViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*>* _BuffVMList_k__BackingField; // 0x20
		::Class_1_F681AD6B57DC77A7* _Model; // 0x28
		::System::UInt32 _CurTurn_k__BackingField; // 0x30
		::System::UInt32 _DeepBuffCount_k__BackingField; // 0x34
		::System::UInt32 _NormalBuffCount_k__BackingField; // 0x38

		::System::Void _ctor(::Class_1_F681AD6B57DC77A7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F681AD6B57DC77A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _BuildInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL__BUILDINFO_OFFSET))(this);
		}

		::System::UInt32 get_CurTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_GET_CURTURN_OFFSET))(this);
		}

		::System::Void set_CurTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_SET_CURTURN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*>* get_BuffVMList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_GET_BUFFVMLIST_OFFSET))(this);
		}

		::System::Void set_BuffVMList(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_SET_BUFFVMLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_NormalBuffCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_GET_NORMALBUFFCOUNT_OFFSET))(this);
		}

		::System::Void set_NormalBuffCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_SET_NORMALBUFFCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_DeepBuffCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_GET_DEEPBUFFCOUNT_OFFSET))(this);
		}

		::System::Void set_DeepBuffCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL_SET_DEEPBUFFCOUNT_OFFSET))(this, a1);
		}
	};
}
