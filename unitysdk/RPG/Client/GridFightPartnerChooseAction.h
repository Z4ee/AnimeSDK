#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitChooseBaseAction.h"

class Class_1_1FA3C152B1F9BE51;
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION_GET_ROLEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1AE8F370)
#define RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION_SELECTMEMBER_OFFSET UNITYSDK_OFFSET(0x1AE8F2B0)
#define RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION_SET_ROLEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1AE8F380)
#define RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION_SYNC_OFFSET UNITYSDK_OFFSET(0x1AE8F0C0)
#define RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE8F0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPartnerChooseAction_TypeDefinitionIndex = 62433;

	class GridFightPartnerChooseAction : public ::RPG::Client::GridFightTraitChooseBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* _RoleOptions_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::Class_1_1FA3C152B1F9BE51* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1FA3C152B1F9BE51*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION_SYNC_OFFSET))(this, a1);
		}

		::System::Void SelectMember(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION_SELECTMEMBER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* get_RoleOptions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION_GET_ROLEOPTIONS_OFFSET))(this);
		}

		::System::Void set_RoleOptions(::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION_SET_ROLEOPTIONS_OFFSET))(this, a1);
		}
	};
}
