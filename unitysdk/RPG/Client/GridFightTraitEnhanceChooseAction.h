#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitChooseBaseAction.h"

class Class_1_F0A446EC7AE7E87D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_GET_OPTIONIDS_OFFSET UNITYSDK_OFFSET(0xBC2D650)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_SELECTMEMBER_OFFSET UNITYSDK_OFFSET(0xBC2D590)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_SET_OPTIONIDS_OFFSET UNITYSDK_OFFSET(0xBC2D660)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_SYNC_OFFSET UNITYSDK_OFFSET(0xBC2D440)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xBC2D3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEnhanceChooseAction_TypeDefinitionIndex = 61112;

	class GridFightTraitEnhanceChooseAction : public ::RPG::Client::GridFightTraitChooseBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _OptionIDs_k__BackingField; // 0x20
		::System::Boolean IsGetAll; // 0x28

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::Class_1_F0A446EC7AE7E87D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEACTION_SYNC_OFFSET))(this, a1);
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
