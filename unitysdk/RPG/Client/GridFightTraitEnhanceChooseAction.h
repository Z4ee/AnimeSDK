#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitChooseBaseAction.h"

class Class_1_1FA3C152B1F9BE51;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_GET_OPTIONIDS_OFFSET UNITYSDK_OFFSET(0x1A60A8E0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_SELECTMEMBER_OFFSET UNITYSDK_OFFSET(0x1A60A820)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_SET_OPTIONIDS_OFFSET UNITYSDK_OFFSET(0x1A60A8F0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_SYNC_OFFSET UNITYSDK_OFFSET(0x1A60A6D0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60A660)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEnhanceChooseAction_TypeDefinitionIndex = 62437;

	class GridFightTraitEnhanceChooseAction : public ::RPG::Client::GridFightTraitChooseBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _OptionIDs_k__BackingField; // 0x30
		::System::Boolean IsGetAll; // 0x38

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::Class_1_1FA3C152B1F9BE51* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1FA3C152B1F9BE51*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_SYNC_OFFSET))(this, a1);
		}

		::System::Void SelectMember(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_SELECTMEMBER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_OptionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_GET_OPTIONIDS_OFFSET))(this);
		}

		::System::Void set_OptionIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_SET_OPTIONIDS_OFFSET))(this, a1);
		}
	};
}
