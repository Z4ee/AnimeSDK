#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xD1B4E90)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA_GET_ROLES_OFFSET UNITYSDK_OFFSET(0xD1B4EA0)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA_GET_TRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0xD1B4EB0)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD1AD560)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA__INITROLES_OFFSET UNITYSDK_OFFSET(0xD1B4090)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA__INITTRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0xD1B45F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModuleUnlockData_TypeDefinitionIndex = 65201;

	class GridFightModuleUnlockData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* _TraitConfigs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* _Roles_k__BackingField; // 0x18
		::System::UInt32 _ActivityModuleID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* get_Roles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA_GET_ROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* get_TraitConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA_GET_TRAITCONFIGS_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* _InitRoles(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA__INITROLES_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* _InitTraitConfigs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA__INITTRAITCONFIGS_OFFSET))(a1);
		}
	};
}
