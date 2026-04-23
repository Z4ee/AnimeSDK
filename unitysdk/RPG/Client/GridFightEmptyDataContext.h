#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_718;
class Class_0_16E4307DCC419505_719;
class Class_0_16E4307DCC419505_720;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0xA479E90)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0xA479DB0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0xA479E00)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0xA479930)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETHEROSHOWIDBYTRAITID_OFFSET UNITYSDK_OFFSET(0xA47A050)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0xA479D30)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0xA479CA0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0xA479980)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0xA479A20)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0xA4799D0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0xA479850)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0xA4798A0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0xA47A0A0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xA479FA0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0xA479F40)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0xA479EE0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0xA479B20)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0xA479C40)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0xA479B80)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0xA479BE0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0xA479AC0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0xA479FF0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA4797C0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xA479830)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xA479820)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0xA479840)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0xA479D80)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_ISROLEUNLOCK_OFFSET UNITYSDK_OFFSET(0xA479A70)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA47A510)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA47A500)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEmptyDataContext_TypeDefinitionIndex = 59381;

	class GridFightEmptyDataContext : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightEmptyDataContext** StaticGet__Instance()
		{
			return (::RPG::Client::GridFightEmptyDataContext**)Il2CppClass::FromTypeDefinitionIndex(GridFightEmptyDataContext_TypeDefinitionIndex)->GetStaticField(0x18E60);
		}
		static ::RPG::Client::GridFightEmptyDataContext** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::GridFightEmptyDataContext**)Il2CppClass::FromTypeDefinitionIndex(GridFightEmptyDataContext_TypeDefinitionIndex)->GetStaticField(0x18E68);
		}
		// static const ::System::UInt32 _ElationTraitID = 0x7DC; // 0x0
		// static const ::System::UInt32 _ElationHeroID = 0x1F49; // 0x0
		// static const ::System::UInt32 _HeroID = 0x1F47; // 0x0

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

		::Class_0_16E4307DCC419505_718* get_TeamRepository()
		{
			return ((::Class_0_16E4307DCC419505_718*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_719* get_ItemRepository()
		{
			return ((::Class_0_16E4307DCC419505_719*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_720* get_TraitRepository()
		{
			return ((::Class_0_16E4307DCC419505_720*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_TRAITREPOSITORY_OFFSET))(this);
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

		::System::Boolean IsRoleUnlock(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_ISROLEUNLOCK_OFFSET))(this, roleID);
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

		static ::System::UInt32 GetHeroShowIDByTraitID(::System::UInt32 traitID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETHEROSHOWIDBYTRAITID_OFFSET))(traitID);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 traitID)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLESBYTRAIT_OFFSET))(this, traitID);
		}
	};
}
