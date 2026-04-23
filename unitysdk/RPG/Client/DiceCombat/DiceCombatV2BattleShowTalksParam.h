#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatV2BattleTalkData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xA147EE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_GETTALK_OFFSET UNITYSDK_OFFSET(0xA148050)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_GET_SECONDSPERTALK_OFFSET UNITYSDK_OFFSET(0xA147EB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_GET_TALKCOUNT_OFFSET UNITYSDK_OFFSET(0xA148000)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_SET_SECONDSPERTALK_OFFSET UNITYSDK_OFFSET(0xA147EC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA147ED0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BattleShowTalksParam_TypeDefinitionIndex = 69955;

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

		::System::Void set_SecondsPerTalk(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_SET_SECONDSPERTALK_OFFSET))(this, value);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2BattleShowTalksParam* Create(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* talkIDs, ::System::Single secondsPerTalk)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleShowTalksParam*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_CREATE_OFFSET))(talkIDs, secondsPerTalk);
		}

		::System::Int32 get_TalkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_GET_TALKCOUNT_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatV2BattleTalkData* GetTalk(::System::Int32 index)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleTalkData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLESHOWTALKSPARAM_GETTALK_OFFSET))(this, index);
		}
	};
}
