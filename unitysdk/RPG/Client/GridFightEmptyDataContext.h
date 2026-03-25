#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_627;
class Class_0_16E4307DCC419505_628;
class Class_0_16E4307DCC419505_629;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0x97F9330)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0x97F9250)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0x97F92A0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0x97F8E20)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0x97F91D0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0x97F9140)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0x97F8E70)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0x97F8F10)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0x97F8EC0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0x97F8D40)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0x97F8D90)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0x97F94F0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0x97F9440)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0x97F93E0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0x97F9380)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0x97F8FC0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x97F90E0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0x97F9020)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0x97F9080)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0x97F8F60)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0x97F9490)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x97F8CB0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x97F8D20)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x97F8D10)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0x97F8D30)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0x97F9220)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x97F95F0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x97F95E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEmptyDataContext_TypeDefinitionIndex = 52424;

	class GridFightEmptyDataContext : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightEmptyDataContext** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::GridFightEmptyDataContext**)Il2CppClass::FromTypeDefinitionIndex(GridFightEmptyDataContext_TypeDefinitionIndex)->GetStaticField(0x13B40);
		}
		static ::RPG::Client::GridFightEmptyDataContext** StaticGet__Instance()
		{
			return (::RPG::Client::GridFightEmptyDataContext**)Il2CppClass::FromTypeDefinitionIndex(GridFightEmptyDataContext_TypeDefinitionIndex)->GetStaticField(0x13B48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT__CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightEmptyDataContext* get_Instance()
		{
			return ((::RPG::Client::GridFightEmptyDataContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_INSTANCE_OFFSET))();
		}

		::Class_0_16E4307DCC419505_627* get_TeamRepository()
		{
			return ((::Class_0_16E4307DCC419505_627*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_628* get_ItemRepository()
		{
			return ((::Class_0_16E4307DCC419505_628*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_629* get_TraitRepository()
		{
			return ((::Class_0_16E4307DCC419505_629*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRoleByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLEBYUID_OFFSET))(this, uid);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByID(::System::UInt32 id)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLESBYID_OFFSET))(this, id);
		}

		::RPG::Client::GridFightForgeItemData* GetForgeByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETFORGEBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightNPC* GetNPCByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETNPCBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightProjection* GetProjByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETPROJBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightProjection* GetProjByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETPROJBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* get_AllRoles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLROLES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>* get_AllForges()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLFORGES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>* get_AllNPCs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLNPCS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>* get_AllProjections()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLPROJECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* get_AllMembers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLMEMBERS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* GetMembersByTraitID(::System::UInt32 traitID)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETMEMBERSBYTRAITID_OFFSET))(this, traitID);
		}

		::RPG::Client::GridFightGridMember* GetMemberByPos(::System::UInt32 pos)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETMEMBERBYPOS_OFFSET))(this, pos);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_UnlockedExpertIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_UNLOCKEDEXPERTIDS_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETEQUIPBYUID_OFFSET))(this, uid);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByID(::System::UInt32 id)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETEQUIPSBYID_OFFSET))(this, id);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETCONSUMABLEBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* get_AllEquips()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>* get_AllConsumables()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLCONSUMABLES_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETTRAITBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* get_AllTraits()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 traitID)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLESBYTRAIT_OFFSET))(this, traitID);
		}
	};
}
