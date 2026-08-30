#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridMember.h"
#include "unitysdk/RPG/Client/GridFightGridMemberType.h"

class Class_0_16E4307DCC419505_855;
class Class_1_D17272E82AE804C2_427;
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

#define RPG_CLIENT_GRIDFIGHTPROJECTION_ADD_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0xD2EDBE0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_CONTAINSTRAIT_OFFSET UNITYSDK_OFFSET(0xD2EDDF0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_CREATEDUMMY_OFFSET UNITYSDK_OFFSET(0xD2EF010)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_CREATE_1_OFFSET UNITYSDK_OFFSET(0xD2EEE40)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_CREATE_OFFSET UNITYSDK_OFFSET(0xD2EEBB0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GETALLDUMMYTRAIT_OFFSET UNITYSDK_OFFSET(0xD2EF290)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GETALLTRAITS_OFFSET UNITYSDK_OFFSET(0xD2EEDB0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_CANACTIVETRAIT_OFFSET UNITYSDK_OFFSET(0xD2EDB70)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD2EE560)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xD2EE190)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_ID_OFFSET UNITYSDK_OFFSET(0xD2EE470)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0xD2EDB20)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xD2EE730)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_PROJECTIONROLE_OFFSET UNITYSDK_OFFSET(0xD2EDCF0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_RELEASETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD2EE100)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xD2EDCA0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xD2EDF10)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0xD2EE220)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_STAR_OFFSET UNITYSDK_OFFSET(0xD2EE430)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xD2EE540)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET__DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD2EE580)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_GET__MODULEROW_OFFSET UNITYSDK_OFFSET(0xD2EDFF0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_REMOVE_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0xD2EDC40)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD2EE570)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xD2EE790)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_SET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xD2EE550)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_SET__DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD2EE590)
#define RPG_CLIENT_GRIDFIGHTPROJECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xD2EF320)
#define RPG_CLIENT_GRIDFIGHTPROJECTION__CONTAINSTRAIT_B__11_0_OFFSET UNITYSDK_OFFSET(0xD2EF3C0)
#define RPG_CLIENT_GRIDFIGHTPROJECTION__CREATEPROJECTIONROLE_OFFSET UNITYSDK_OFFSET(0xD2EDD40)
#define RPG_CLIENT_GRIDFIGHTPROJECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD2EEB90)
#define RPG_CLIENT_GRIDFIGHTPROJECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD2EE930)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightProjection_TypeDefinitionIndex = 65137;

	class GridFightProjection : public ::RPG::Client::GridFightGridMember
	{
	public:
		::System::Action* OnActiveChanged; // 0x20
		::RPG::Client::GridFightProjectionConfig* _Config_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_855* __DataContext_k__BackingField; // 0x30
		::RPG::Client::GridFightTraitComponent* _TraitComponent_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void add_OnActiveChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_ADD_ONACTIVECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnActiveChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_REMOVE_ONACTIVECHANGED_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_ROLECONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_ProjectionRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_PROJECTIONROLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* ContainsTrait(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_CONTAINSTRAIT_OFFSET))(this, a1);
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

		::System::UInt32 get_SellPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_SELLPRICE_OFFSET))(this);
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

		::System::Void set_TraitComponent(::RPG::Client::GridFightTraitComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_SET_TRAITCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjectionConfig* get_Config()
		{
			return ((::RPG::Client::GridFightProjectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::GridFightProjectionConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightProjectionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_SET_CONFIG_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_855* get__DataContext()
		{
			return ((::Class_0_16E4307DCC419505_855*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET__DATACONTEXT_OFFSET))(this);
		}

		::System::Void set__DataContext(::Class_0_16E4307DCC419505_855* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_855*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_SET__DATACONTEXT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightModuleBanRoleConfigRow* get__ModuleRow()
		{
			return ((::RPG::GameCore::GridFightModuleBanRoleConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET__MODULEROW_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* _CreateProjectionRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION__CREATEPROJECTIONROLE_OFFSET))(this);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_SET_POSINDEX_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightProjection* Create(::Class_1_D17272E82AE804C2_427* a1, ::Class_0_16E4307DCC419505_855* a2)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::Class_1_D17272E82AE804C2_427*, ::Class_0_16E4307DCC419505_855*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightProjection* Create_1(::System::UInt32 a1, ::System::UInt32 a2, ::Class_0_16E4307DCC419505_855* a3)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_855*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_CREATE_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::GridFightProjection* CreateDummy(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_CREATEDUMMY_OFFSET))(a1);
		}

		::System::Void Update(::Class_1_D17272E82AE804C2_427* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_427*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* GetAllTraits()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GETALLTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* GetAllDummyTrait()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION_GETALLDUMMYTRAIT_OFFSET))(this);
		}

		::System::Boolean _ContainsTrait_b__11_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION__CONTAINSTRAIT_B__11_0_OFFSET))(this, a1);
		}
	};
}
