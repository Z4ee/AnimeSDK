#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameFormation; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class IAvatarComparer; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_APPLY_1_OFFSET UNITYSDK_OFFSET(0xA4B8840)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_APPLY_2_OFFSET UNITYSDK_OFFSET(0xA4B88A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_APPLY_OFFSET UNITYSDK_OFFSET(0xA4B80A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_CREATECOMPARER_OFFSET UNITYSDK_OFFSET(0xA4B8740)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_FILTERROLE_OFFSET UNITYSDK_OFFSET(0xA4B8A40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_FILTERTRAIT_OFFSET UNITYSDK_OFFSET(0xA4B8DC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GETCURSEASONALLROLES_OFFSET UNITYSDK_OFFSET(0xA4B9650)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GETCURSEASONALLTRAITS_OFFSET UNITYSDK_OFFSET(0xA4B9910)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GETFILTERTRAITCOUNTBYTYPE_OFFSET UNITYSDK_OFFSET(0xA4B8F20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_FILTEREDCOUNT_OFFSET UNITYSDK_OFFSET(0xA4B9160)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_FILTEREDROLES_OFFSET UNITYSDK_OFFSET(0xA4B92F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_FILTEREDTRAITS_OFFSET UNITYSDK_OFFSET(0xA4B91B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_ISFILTERON_OFFSET UNITYSDK_OFFSET(0xA4B8FF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_ROLEFILTEREDCOUNT_OFFSET UNITYSDK_OFFSET(0xA4B90C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_ROLEFILTERLIMIT_OFFSET UNITYSDK_OFFSET(0xA4B9430)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_TRAITFILTEREDCOUNT_OFFSET UNITYSDK_OFFSET(0xA4B9110)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_TRAITFILTERLIMIT_OFFSET UNITYSDK_OFFSET(0xA4B9540)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xA4B88F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_ISFILTEREDROLE_OFFSET UNITYSDK_OFFSET(0xA4B8D60)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_ISFILTEREDTRAIT_OFFSET UNITYSDK_OFFSET(0xA4B8EC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_REMOVEROLE_OFFSET UNITYSDK_OFFSET(0xA4B8BD0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_REMOVETRAIT_OFFSET UNITYSDK_OFFSET(0xA4B8E40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_RESET_OFFSET UNITYSDK_OFFSET(0xA4B8950)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__CREATEROLE_OFFSET UNITYSDK_OFFSET(0xA4B98A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B9BF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__FORMATIONHASAVATAR_OFFSET UNITYSDK_OFFSET(0xA4B8520)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__FORMATIONHASTRAIT_OFFSET UNITYSDK_OFFSET(0xA4B8630)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__GETCURSEASONALLROLES_B__38_0_OFFSET UNITYSDK_OFFSET(0xA4B9D00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationFilter_TypeDefinitionIndex = 59538;

	class GridFightGameFormationFilter : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>** StaticGet__CurSeasonTraitConfigs()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationFilter_TypeDefinitionIndex)->GetStaticField(0x11900);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>** StaticGet__CurSeasonRoles()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationFilter_TypeDefinitionIndex)->GetStaticField(0x11908);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _FilteredAvatarIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _FilteredTraitIDs; // 0x18
		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameFormation*>* _RawDatas; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _FilteredRoleIDs; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>* _CachedFilteredFormations; // 0x30
		::System::Action* _OnFilterChange; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameFormation*>* formations, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>* filteredFormations)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameFormation*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_APPLY_OFFSET))(this, formations, filteredFormations);
		}

		static ::System::Boolean _FormationHasAvatar(::RPG::Client::GridFightGameFormation* formation, ::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightGameFormation*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__FORMATIONHASAVATAR_OFFSET))(formation, avatarID);
		}

		static ::System::Boolean _FormationHasTrait(::RPG::Client::GridFightGameFormation* formation, ::System::UInt32 traitID)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightGameFormation*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__FORMATIONHASTRAIT_OFFSET))(formation, traitID);
		}

		static ::RPG::Client::IAvatarComparer* CreateComparer()
		{
			return ((::RPG::Client::IAvatarComparer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_CREATECOMPARER_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>* Apply_1(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameFormation*>* formations)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameFormation*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_APPLY_1_OFFSET))(this, formations);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>* Apply_2()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_APPLY_2_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameFormation*>* formations, ::System::Action* onFilterChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameFormation*>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_INIT_OFFSET))(this, formations, onFilterChange);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_RESET_OFFSET))(this);
		}

		::System::Void FilterRole(::System::UInt32 roleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_FILTERROLE_OFFSET))(this, roleID);
		}

		::System::Void RemoveRole(::System::UInt32 roleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_REMOVEROLE_OFFSET))(this, roleID);
		}

		::System::Boolean IsFilteredRole(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_ISFILTEREDROLE_OFFSET))(this, roleID);
		}

		::System::Void FilterTrait(::System::UInt32 traitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_FILTERTRAIT_OFFSET))(this, traitID);
		}

		::System::Void RemoveTrait(::System::UInt32 traitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_REMOVETRAIT_OFFSET))(this, traitID);
		}

		::System::Boolean IsFilteredTrait(::System::UInt32 traitID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_ISFILTEREDTRAIT_OFFSET))(this, traitID);
		}

		::System::Int32 GetFilterTraitCountByType(::RPG::GameCore::GridFightTraitType type)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GETFILTERTRAITCOUNTBYTYPE_OFFSET))(this, type);
		}

		::System::Boolean get_IsFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_ISFILTERON_OFFSET))(this);
		}

		::System::Int32 get_RoleFilteredCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_ROLEFILTEREDCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TraitFilteredCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_TRAITFILTEREDCOUNT_OFFSET))(this);
		}

		::System::Int32 get_FilteredCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_FILTEREDCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* get_FilteredTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_FILTEREDTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleConfig*>* get_FilteredRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_FILTEREDROLES_OFFSET))(this);
		}

		::System::UInt32 get_RoleFilterLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_ROLEFILTERLIMIT_OFFSET))(this);
		}

		::System::UInt32 get_TraitFilterLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_TRAITFILTERLIMIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetCurSeasonAllRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GETCURSEASONALLROLES_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* _CreateRole(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__CREATEROLE_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* GetCurSeasonAllTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GETCURSEASONALLTRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* _GetCurSeasonAllRoles_b__38_0(::RPG::GameCore::GridFightRoleConfigRow* row)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__GETCURSEASONALLROLES_B__38_0_OFFSET))(this, row);
		}
	};
}
