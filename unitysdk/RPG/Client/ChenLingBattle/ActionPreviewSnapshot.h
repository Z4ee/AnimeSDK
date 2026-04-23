#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/PreviewSnapshot.h"

namespace RPG::Client::ChenLingBattle { class ActionInfo; }

#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT_CREATEACTIONSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9F8AAD0)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT_GET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0x9F8AB60)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT_SET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0x9F8AB70)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x9F8AB50)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ActionPreviewSnapshot_TypeDefinitionIndex = 70058;

	class ActionPreviewSnapshot : public ::RPG::Client::ChenLingBattle::PreviewSnapshot
	{
	public:
		::RPG::Client::ChenLingBattle::ActionInfo* _PhaseInfo_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 currentSelectCardIndex, ::RPG::Client::ChenLingBattle::ActionInfo* phaseInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ChenLingBattle::ActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT__CTOR_OFFSET))(this, currentSelectCardIndex, phaseInfo);
		}

		static ::RPG::Client::ChenLingBattle::ActionPreviewSnapshot* CreateActionSnapshot(::System::Int32 currentSelectCardIndex, ::RPG::Client::ChenLingBattle::ActionInfo* actoinInfo)
		{
			return ((::RPG::Client::ChenLingBattle::ActionPreviewSnapshot*(*)(::System::Int32, ::RPG::Client::ChenLingBattle::ActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT_CREATEACTIONSNAPSHOT_OFFSET))(currentSelectCardIndex, actoinInfo);
		}

		::RPG::Client::ChenLingBattle::ActionInfo* get_PhaseInfo()
		{
			return ((::RPG::Client::ChenLingBattle::ActionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT_GET_PHASEINFO_OFFSET))(this);
		}

		::System::Void set_PhaseInfo(::RPG::Client::ChenLingBattle::ActionInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT_SET_PHASEINFO_OFFSET))(this, value);
		}
	};
}
