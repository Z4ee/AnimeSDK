#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatV2BattleTalkData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x1C42DC90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_GETTALK_OFFSET UNITYSDK_OFFSET(0x1C42DE10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_GET_SECONDSPERTALK_OFFSET UNITYSDK_OFFSET(0x1C42DC60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_GET_TALKCOUNT_OFFSET UNITYSDK_OFFSET(0x1C42DDC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_SET_SECONDSPERTALK_OFFSET UNITYSDK_OFFSET(0x1C42DC70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C42DC80)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BattleShowTalksParam_TypeDefinitionIndex = 75716;

	class DiceCombatV2BattleShowTalksParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2BattleTalkData*>* _Talks; // 0x10
		::System::Single _SecondsPerTalk_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM__CTOR_OFFSET))(this);
		}

		::System::Single get_SecondsPerTalk()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_GET_SECONDSPERTALK_OFFSET))(this);
		}

		::System::Void set_SecondsPerTalk(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_SET_SECONDSPERTALK_OFFSET))(this, a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2BattleShowTalksParam* Create(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Single a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleShowTalksParam*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_CREATE_OFFSET))(a1, a2);
		}

		::System::Int32 get_TalkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_GET_TALKCOUNT_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatV2BattleTalkData* GetTalk(::System::Int32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleTalkData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_GETTALK_OFFSET))(this, a1);
		}
	};
}
