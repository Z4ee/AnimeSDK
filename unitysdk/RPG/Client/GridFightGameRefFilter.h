#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameRefLevel.h"
#include "unitysdk/RPG/Client/GameRefSortType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"

class Class_1_30700BDD5BCB4E91;
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGameRefFilter_GameRefComparer; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class IAvatarComparer; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace RPG::GameCore { class RogueTournBuildRefSortConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1BA25C50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_APPLY_2_OFFSET UNITYSDK_OFFSET(0x1BA25CB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_APPLY_OFFSET UNITYSDK_OFFSET(0x1BA23EC0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_CREATECOMPARER_OFFSET UNITYSDK_OFFSET(0x1BA245B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_FILTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1BA263C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_FILTERROLE_OFFSET UNITYSDK_OFFSET(0x1BA25E10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_FILTERTRAIT_OFFSET UNITYSDK_OFFSET(0x1BA26290)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GETCURSEASONALLROLES_OFFSET UNITYSDK_OFFSET(0x1BA27150)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GETCURSEASONALLTRAITS_OFFSET UNITYSDK_OFFSET(0x1BA27460)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GETFILTERTRAITCOUNTBYTYPE_OFFSET UNITYSDK_OFFSET(0x1BA264F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_CURFILTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1BA26680)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_FILTEREDCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA266C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_FILTEREDROLES_OFFSET UNITYSDK_OFFSET(0x1BA268A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_FILTEREDTRAITS_OFFSET UNITYSDK_OFFSET(0x1BA26710)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_ISFILTERON_OFFSET UNITYSDK_OFFSET(0x1BA25880)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_ROLEFILTEREDCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA265E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_ROLEFILTERLIMIT_OFFSET UNITYSDK_OFFSET(0x1BA26A30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_TRAITFILTEREDCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA26630)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_TRAITFILTERLIMIT_OFFSET UNITYSDK_OFFSET(0x1BA26B40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x1BA25D00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_ISFILTEREDROLE_OFFSET UNITYSDK_OFFSET(0x1BA261D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_ISFILTEREDTRAIT_OFFSET UNITYSDK_OFFSET(0x1BA26430)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_REMOVEROLE_OFFSET UNITYSDK_OFFSET(0x1BA26020)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_REMOVETRAIT_OFFSET UNITYSDK_OFFSET(0x1BA26340)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_RESET_OFFSET UNITYSDK_OFFSET(0x1BA25D60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_SORT_OFFSET UNITYSDK_OFFSET(0x1BA246E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__CALCBUILDREFSORTRATE_OFFSET UNITYSDK_OFFSET(0x1BA26C50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__CREATEROLE_OFFSET UNITYSDK_OFFSET(0x1BA273F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA23940)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__GETCURSEASONALLROLES_B__55_0_OFFSET UNITYSDK_OFFSET(0x1BA277B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__HOTCOMPARER_OFFSET UNITYSDK_OFFSET(0x1BA25990)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__ISCURVERSIONBUILDREFFORSORT_OFFSET UNITYSDK_OFFSET(0x1BA270B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__RECENTHOTCOMPARER_OFFSET UNITYSDK_OFFSET(0x1BA26E00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__RELEATIVESORT_OFFSET UNITYSDK_OFFSET(0x1BA25040)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefFilter_TypeDefinitionIndex = 64817;

	class GridFightGameRefFilter : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>** StaticGet__CurSeasonRoles()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter_TypeDefinitionIndex)->GetStaticField(0x14D00);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>** StaticGet__CurSeasonTraitConfigs()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter_TypeDefinitionIndex)->GetStaticField(0x14D08);
		}
		// static const ::System::Double _SortToLastOpWeight; // 0x0
		// static const ::System::Double _SortToFirstOpWeight; // 0x0
		// static const ::System::Double _SortOpWeightCheckEpsilon; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* _CachedFilterdGameRefs; // 0x10
		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameRefData*>* _RawDatas; // 0x18
		::RPG::Client::GridFightGameRefFilter_GameRefComparer* _LikeCntComparer; // 0x20
		::RPG::Client::GridFightGameRefFilter_GameRefComparer* _TimeStampComparer; // 0x28
		::RPG::Client::GridFightGameRefFilter_GameRefComparer* _RecentComparer; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _FilteredAvatarIDs; // 0x38
		::RPG::Client::GridFightGameRefFilter_GameRefComparer* _RelativeComparer; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _FilteredRoleIDs; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _FilteredTraitIDs; // 0x50
		::Class_1_30700BDD5BCB4E91* _RecentComparerConfig; // 0x58
		::System::Action* _OnFilterChange; // 0x60
		::RPG::Client::GameRefLevel _FilterLevel; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameRefData*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameRefData*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_APPLY_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::IAvatarComparer* CreateComparer()
		{
			return ((::RPG::Client::IAvatarComparer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_CREATECOMPARER_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* Sort(::RPG::Client::GameRefSortType a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*(*)(::PVOID, ::RPG::Client::GameRefSortType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_SORT_OFFSET))(this, a1, a2);
		}

		::System::Int32 _ReleativeSort(::RPG::Client::GridFightGameRefData* a1, ::RPG::Client::GridFightGameRefData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__RELEATIVESORT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* Apply_1(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameRefData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameRefData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_APPLY_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* Apply_2()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_APPLY_2_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameRefData*>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGameRefData*>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_RESET_OFFSET))(this);
		}

		::System::Void FilterRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_FILTERROLE_OFFSET))(this, a1);
		}

		::System::Void RemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_REMOVEROLE_OFFSET))(this, a1);
		}

		::System::Boolean IsFilteredRole(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_ISFILTEREDROLE_OFFSET))(this, a1);
		}

		::System::Void FilterTrait(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_FILTERTRAIT_OFFSET))(this, a1);
		}

		::System::Void RemoveTrait(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_REMOVETRAIT_OFFSET))(this, a1);
		}

		::System::Void FilterLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_FILTERLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean IsFilteredTrait(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_ISFILTEREDTRAIT_OFFSET))(this, a1);
		}

		::System::Int32 GetFilterTraitCountByType(::RPG::GameCore::GridFightTraitType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GETFILTERTRAITCOUNTBYTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_ISFILTERON_OFFSET))(this);
		}

		::System::Int32 get_CurFilterLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_CURFILTERLEVEL_OFFSET))(this);
		}

		::System::Int32 get_RoleFilteredCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_ROLEFILTEREDCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TraitFilteredCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_TRAITFILTEREDCOUNT_OFFSET))(this);
		}

		::System::Int32 get_FilteredCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_FILTEREDCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* get_FilteredTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_FILTEREDTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleConfig*>* get_FilteredRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_FILTEREDROLES_OFFSET))(this);
		}

		::System::UInt32 get_RoleFilterLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_ROLEFILTERLIMIT_OFFSET))(this);
		}

		::System::UInt32 get_TraitFilterLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GET_TRAITFILTERLIMIT_OFFSET))(this);
		}

		::System::Int32 _HotComparer(::RPG::Client::GridFightGameRefData* a1, ::RPG::Client::GridFightGameRefData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__HOTCOMPARER_OFFSET))(this, a1, a2);
		}

		::System::Int32 _RecentHotComparer(::RPG::Client::GridFightGameRefData* a1, ::RPG::Client::GridFightGameRefData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__RECENTHOTCOMPARER_OFFSET))(this, a1, a2);
		}

		static ::System::Double _CalcBuildRefSortRate(::RPG::Client::GridFightGameRefData* a1, ::RPG::GameCore::RogueTournBuildRefSortConfig* a2)
		{
			return ((::System::Double(*)(::RPG::Client::GridFightGameRefData*, ::RPG::GameCore::RogueTournBuildRefSortConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__CALCBUILDREFSORTRATE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsCurVersionBuildRefForSort(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__ISCURVERSIONBUILDREFFORSORT_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetCurSeasonAllRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GETCURSEASONALLROLES_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* _CreateRole(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__CREATEROLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* GetCurSeasonAllTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GETCURSEASONALLTRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* _GetCurSeasonAllRoles_b__55_0(::RPG::GameCore::GridFightRoleConfigRow* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER__GETCURSEASONALLROLES_B__55_0_OFFSET))(this, a1);
		}
	};
}
