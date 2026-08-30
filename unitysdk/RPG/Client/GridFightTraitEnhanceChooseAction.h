#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitChooseBaseAction.h"

class Class_1_B9E56D0D50E02617;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_GET_OPTIONIDS_OFFSET UNITYSDK_OFFSET(0xD3636B0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_SELECTMEMBER_OFFSET UNITYSDK_OFFSET(0xD3635F0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_SET_OPTIONIDS_OFFSET UNITYSDK_OFFSET(0xD3636C0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_SYNC_OFFSET UNITYSDK_OFFSET(0xD3634A0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD363430)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEnhanceChooseAction_TypeDefinitionIndex = 65422;

	class GridFightTraitEnhanceChooseAction : public ::RPG::Client::GridFightTraitChooseBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _OptionIDs_k__BackingField; // 0x30
		::System::Boolean IsGetAll; // 0x38

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::Class_1_B9E56D0D50E02617* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_SYNC_OFFSET))(this, a1);
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
