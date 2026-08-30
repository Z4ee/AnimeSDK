#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/PreviewSnapshot.h"

namespace RPG::Client::ChenLingBattle { class ActionInfo; }

#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT_CREATEACTIONSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCAE9B60)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT_GET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0xCAE9BF0)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT_SET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0xCAE9C00)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0xCAE9BE0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ActionPreviewSnapshot_TypeDefinitionIndex = 75820;

	class ActionPreviewSnapshot : public ::RPG::Client::ChenLingBattle::PreviewSnapshot
	{
	public:
		::RPG::Client::ChenLingBattle::ActionInfo* _PhaseInfo_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::ChenLingBattle::ActionInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ChenLingBattle::ActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ChenLingBattle::ActionPreviewSnapshot* CreateActionSnapshot(::System::Int32 a1, ::RPG::Client::ChenLingBattle::ActionInfo* a2)
		{
			return ((::RPG::Client::ChenLingBattle::ActionPreviewSnapshot*(*)(::System::Int32, ::RPG::Client::ChenLingBattle::ActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT_CREATEACTIONSNAPSHOT_OFFSET))(a1, a2);
		}

		::RPG::Client::ChenLingBattle::ActionInfo* get_PhaseInfo()
		{
			return ((::RPG::Client::ChenLingBattle::ActionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT_GET_PHASEINFO_OFFSET))(this);
		}

		::System::Void set_PhaseInfo(::RPG::Client::ChenLingBattle::ActionInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPREVIEWSNAPSHOT_SET_PHASEINFO_OFFSET))(this, a1);
		}
	};
}
