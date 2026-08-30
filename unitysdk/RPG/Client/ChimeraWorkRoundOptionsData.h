#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraWorkRoundOptionType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraWorkRoundOptionData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA_GET_BANNEDARRANGEMENTS_OFFSET UNITYSDK_OFFSET(0x1BBF8BB0)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA_GET_LOCKEDLEADER_OFFSET UNITYSDK_OFFSET(0x1BBF8A50)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA_GET_NEEDALLFINISHSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1BBF6E90)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA_GET_NEEDANYFINISHSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1BBF70F0)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA_GET_OPTIONIDS_OFFSET UNITYSDK_OFFSET(0x1BBF88E0)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA_GET_REQUIREDMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BBF88F0)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF5970)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundOptionsData_TypeDefinitionIndex = 63577;

	class ChimeraWorkRoundOptionsData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _NeedAnyFinishSubMissionID; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraWorkRoundOptionType, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraWorkRoundOptionData*>*>* _OptionDict; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _NeedAllFinishSubMissionID; // 0x20
		::Il2CppArray<::System::UInt32>* _OptionIDs_k__BackingField; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA__CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_OptionIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA_GET_OPTIONIDS_OFFSET))(this);
		}

		::System::Nullable_1<::System::UInt32> get_RequiredMemberCount()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA_GET_REQUIREDMEMBERCOUNT_OFFSET))(this);
		}

		::System::Nullable_1<::System::UInt32> get_LockedLeader()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA_GET_LOCKEDLEADER_OFFSET))(this);
		}

		::Il2CppArray<::Il2CppArray<::System::UInt32>*>* get_BannedArrangements()
		{
			return ((::Il2CppArray<::Il2CppArray<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA_GET_BANNEDARRANGEMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NeedAllFinishSubMissionID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA_GET_NEEDALLFINISHSUBMISSIONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NeedAnyFinishSubMissionID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA_GET_NEEDANYFINISHSUBMISSIONID_OFFSET))(this);
		}
	};
}
