#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridMember.h"
#include "unitysdk/RPG/Client/GridFightGridMemberType.h"

class Class_0_16E4307DCC419505_722;
class Class_1_D1E0AD3915BCCF29_37;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightProjectionConfig; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class GridFightModuleBanRoleConfigRow; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPROJECTION_ADD_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0xA562F80)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_CONTAINSTRAIT_OFFSET UNITYSDK_OFFSET(0xA5631E0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_CREATEDUMMY_OFFSET UNITYSDK_OFFSET(0xA563D40)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA563B70)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_CREATE_OFFSET UNITYSDK_OFFSET(0xA5638E0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GETALLDUMMYTRAIT_OFFSET UNITYSDK_OFFSET(0xA563FC0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GETALLTRAITS_OFFSET UNITYSDK_OFFSET(0xA563AE0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_CANACTIVETRAIT_OFFSET UNITYSDK_OFFSET(0xA562F70)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA5635A0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xA5634C0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_ID_OFFSET UNITYSDK_OFFSET(0xA563530)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0xA562F60)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xA563600)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_PROJECTIONROLE_OFFSET UNITYSDK_OFFSET(0xA563060)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_RELEASETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA563430)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xA563040)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xA5632C0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_STAR_OFFSET UNITYSDK_OFFSET(0xA563520)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA563580)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET__DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xA5635C0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET__MODULEROW_OFFSET UNITYSDK_OFFSET(0xA5633A0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_REMOVE_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0xA562FE0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA5635B0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xA563610)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_SET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA563590)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_SET__DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xA5635D0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xA564050)
#define RPG_CLIENT_GRIDFIGHTPROJECTION__CONTAINSTRAIT_B__11_0_OFFSET UNITYSDK_OFFSET(0xA5640F0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA5638C0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA563710)
#define RPG_CLIENT_GRIDFIGHTPROJECTION___IFIXBASEPROXY_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xA564110)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightProjection_TypeDefinitionIndex = 59917;

	class GridFightProjection : public ::RPG::Client::GridFightGridMember
	{
	public:
		::System::Action* OnActiveChanged; // 0x20
		::Class_0_16E4307DCC419505_722* __DataContext_k__BackingField; // 0x28
		::RPG::Client::GridFightTraitComponent* _TraitComponent_k__BackingField; // 0x30
		::RPG::Client::GridFightProjectionConfig* _Config_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 projectionID, ::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION__CTOR_OFFSET))(this, projectionID, uniqueID);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION__CTOR_1_OFFSET))(this);
		}

		::RPG::Client::GridFightGridMemberType get_MemberType()
		{
			return ((::RPG::Client::GridFightGridMemberType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Boolean get_CanActiveTrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_CANACTIVETRAIT_OFFSET))(this);
		}

		::System::Void add_OnActiveChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_ADD_ONACTIVECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnActiveChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_REMOVE_ONACTIVECHANGED_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_ROLECONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_ProjectionRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_PROJECTIONROLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* ContainsTrait(::System::Collections::Generic::List_1<::System::UInt32>* traits)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_CONTAINSTRAIT_OFFSET))(this, traits);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Int64 get_ReleaseTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_RELEASETIMESTAMP_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_EQUIPS_OFFSET))(this);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_STAR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_ID_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitComponent* get_TraitComponent()
		{
			return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_TRAITCOMPONENT_OFFSET))(this);
		}

		::System::Void set_TraitComponent(::RPG::Client::GridFightTraitComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_SET_TRAITCOMPONENT_OFFSET))(this, value);
		}

		::RPG::Client::GridFightProjectionConfig* get_Config()
		{
			return ((::RPG::Client::GridFightProjectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::GridFightProjectionConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightProjectionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_SET_CONFIG_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_722* get__DataContext()
		{
			return ((::Class_0_16E4307DCC419505_722*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET__DATACONTEXT_OFFSET))(this);
		}

		::System::Void set__DataContext(::Class_0_16E4307DCC419505_722* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_SET__DATACONTEXT_OFFSET))(this, value);
		}

		::RPG::GameCore::GridFightModuleBanRoleConfigRow* get__ModuleRow()
		{
			return ((::RPG::GameCore::GridFightModuleBanRoleConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET__MODULEROW_OFFSET))(this);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_SET_POSINDEX_OFFSET))(this, value);
		}

		static ::RPG::Client::GridFightProjection* Create(::Class_1_D1E0AD3915BCCF29_37* protoProjection, ::Class_0_16E4307DCC419505_722* dataContext)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::Class_1_D1E0AD3915BCCF29_37*, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_CREATE_OFFSET))(protoProjection, dataContext);
		}

		static ::RPG::Client::GridFightProjection* Create_1(::System::UInt32 id, ::System::UInt32 uid, ::Class_0_16E4307DCC419505_722* dataContext)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_CREATE_1_OFFSET))(id, uid, dataContext);
		}

		static ::RPG::Client::GridFightProjection* CreateDummy(::System::UInt32 projectionID)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_CREATEDUMMY_OFFSET))(projectionID);
		}

		::System::Void Update(::Class_1_D1E0AD3915BCCF29_37* protoProjection)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_UPDATE_OFFSET))(this, protoProjection);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* GetAllTraits()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GETALLTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* GetAllDummyTrait()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GETALLDUMMYTRAIT_OFFSET))(this);
		}

		::System::Boolean _ContainsTrait_b__11_0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION__CONTAINSTRAIT_B__11_0_OFFSET))(this, id);
		}

		::System::Void __iFixBaseProxy_set_PosIndex(::System::UInt32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION___IFIXBASEPROXY_SET_POSINDEX_OFFSET))(this, P0);
		}
	};
}
