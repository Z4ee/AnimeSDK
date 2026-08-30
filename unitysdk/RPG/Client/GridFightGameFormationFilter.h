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

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1BD66800)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_APPLY_2_OFFSET UNITYSDK_OFFSET(0x1BD66860)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_APPLY_OFFSET UNITYSDK_OFFSET(0x1BD65D90)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_CREATECOMPARER_OFFSET UNITYSDK_OFFSET(0x1BD666D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_FILTERROLE_OFFSET UNITYSDK_OFFSET(0x1BD669C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_FILTERTRAIT_OFFSET UNITYSDK_OFFSET(0x1BD66E20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GETCURSEASONALLROLES_OFFSET UNITYSDK_OFFSET(0x1BD677F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GETCURSEASONALLTRAITS_OFFSET UNITYSDK_OFFSET(0x1BD67AF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GETFILTERTRAITCOUNTBYTYPE_OFFSET UNITYSDK_OFFSET(0x1BD67010)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_FILTEREDCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD67260)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_FILTEREDROLES_OFFSET UNITYSDK_OFFSET(0x1BD67440)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_FILTEREDTRAITS_OFFSET UNITYSDK_OFFSET(0x1BD672B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_ISFILTERON_OFFSET UNITYSDK_OFFSET(0x1BD670F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_ROLEFILTEREDCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD671C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_ROLEFILTERLIMIT_OFFSET UNITYSDK_OFFSET(0x1BD675D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_TRAITFILTEREDCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD67210)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GET_TRAITFILTERLIMIT_OFFSET UNITYSDK_OFFSET(0x1BD676E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x1BD668B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_ISFILTEREDROLE_OFFSET UNITYSDK_OFFSET(0x1BD66D60)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_ISFILTEREDTRAIT_OFFSET UNITYSDK_OFFSET(0x1BD66F50)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_REMOVEROLE_OFFSET UNITYSDK_OFFSET(0x1BD66BC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_REMOVETRAIT_OFFSET UNITYSDK_OFFSET(0x1BD66ED0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_RESET_OFFSET UNITYSDK_OFFSET(0x1BD66910)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__CREATEROLE_OFFSET UNITYSDK_OFFSET(0x1BD67A80)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD67E40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__FORMATIONHASAVATAR_OFFSET UNITYSDK_OFFSET(0x1BD66400)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__FORMATIONHASTRAIT_OFFSET UNITYSDK_OFFSET(0x1BD66580)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__GETCURSEASONALLROLES_B__38_0_OFFSET UNITYSDK_OFFSET(0x1BD67F60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationFilter_TypeDefinitionIndex = 64748;

	class GridFightGameFormationFilter : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>** StaticGet__CurSeasonRoles()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationFilter_TypeDefinitionIndex)->GetStaticField(0x2A710);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>** StaticGet__CurSeasonTraitConfigs()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationFilter_TypeDefinitionIndex)->GetStaticField(0x2A718);
		}
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>* _CachedFilteredFormations; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _FilteredTraitIDs; // 0x18
		::System::Action* _OnFilterChange; // 0x20
		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameFormation*>* _RawDatas; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _FilteredRoleIDs; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _FilteredAvatarIDs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameFormation*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameFormation*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_APPLY_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean _FormationHasAvatar(::RPG::Client::GridFightGameFormation* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightGameFormation*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__FORMATIONHASAVATAR_OFFSET))(a1, a2);
		}

		static ::System::Boolean _FormationHasTrait(::RPG::Client::GridFightGameFormation* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightGameFormation*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__FORMATIONHASTRAIT_OFFSET))(a1, a2);
		}

		static ::RPG::Client::IAvatarComparer* CreateComparer()
		{
			return ((::RPG::Client::IAvatarComparer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_CREATECOMPARER_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>* Apply_1(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameFormation*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameFormation*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_APPLY_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>* Apply_2()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_APPLY_2_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameFormation*>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameFormation*>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_RESET_OFFSET))(this);
		}

		::System::Void FilterRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_FILTERROLE_OFFSET))(this, a1);
		}

		::System::Void RemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_REMOVEROLE_OFFSET))(this, a1);
		}

		::System::Boolean IsFilteredRole(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_ISFILTEREDROLE_OFFSET))(this, a1);
		}

		::System::Void FilterTrait(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_FILTERTRAIT_OFFSET))(this, a1);
		}

		::System::Void RemoveTrait(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_REMOVETRAIT_OFFSET))(this, a1);
		}

		::System::Boolean IsFilteredTrait(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_ISFILTEREDTRAIT_OFFSET))(this, a1);
		}

		::System::Int32 GetFilterTraitCountByType(::RPG::GameCore::GridFightTraitType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GETFILTERTRAITCOUNTBYTYPE_OFFSET))(this, a1);
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

		::RPG::Client::GridFightRole* _CreateRole(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__CREATEROLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* GetCurSeasonAllTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GETCURSEASONALLTRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* _GetCurSeasonAllRoles_b__38_0(::RPG::GameCore::GridFightRoleConfigRow* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER__GETCURSEASONALLROLES_B__38_0_OFFSET))(this, a1);
		}
	};
}
