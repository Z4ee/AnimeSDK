#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridMember.h"
#include "unitysdk/RPG/Client/GridFightGridMemberType.h"

class Class_0_16E4307DCC419505_804;
class Class_1_10F56A639581CEB1_13;
class Class_1_AE4553DBAC72BB2D;
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightNPCConfig; }
namespace RPG::Client { class GridFightRoleEffect; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTNPC_ADD_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x1AE82F90)
#define RPG_CLIENT_GRIDFIGHTNPC_CONTAINSTRAIT_OFFSET UNITYSDK_OFFSET(0x1AE83050)
#define RPG_CLIENT_GRIDFIGHTNPC_CREATEBATTLE_OFFSET UNITYSDK_OFFSET(0x1AE82950)
#define RPG_CLIENT_GRIDFIGHTNPC_CREATE_OFFSET UNITYSDK_OFFSET(0x1AE825E0)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_CANACTIVETRAIT_OFFSET UNITYSDK_OFFSET(0x1AE82F20)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1AE82EE0)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AE82EC0)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1AE82E50)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_ROLEEFFECT_OFFSET UNITYSDK_OFFSET(0x1AE82F00)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AE82EA0)
#define RPG_CLIENT_GRIDFIGHTNPC_REMOVE_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x1AE82FF0)
#define RPG_CLIENT_GRIDFIGHTNPC_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1AE82EF0)
#define RPG_CLIENT_GRIDFIGHTNPC_SET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AE82ED0)
#define RPG_CLIENT_GRIDFIGHTNPC_SET_ROLEEFFECT_OFFSET UNITYSDK_OFFSET(0x1AE82F10)
#define RPG_CLIENT_GRIDFIGHTNPC_SET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AE82EB0)
#define RPG_CLIENT_GRIDFIGHTNPC_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AE82D60)
#define RPG_CLIENT_GRIDFIGHTNPC__CONTAINSTRAIT_B__27_0_OFFSET UNITYSDK_OFFSET(0x1AE83400)
#define RPG_CLIENT_GRIDFIGHTNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE824E0)
#define RPG_CLIENT_GRIDFIGHTNPC__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1AE83270)
#define RPG_CLIENT_GRIDFIGHTNPC__ONEQUIPCOMPONENTPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1AE83170)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightNPC_TypeDefinitionIndex = 62138;

	class GridFightNPC : public ::RPG::Client::GridFightGridMember
	{
	public:
		::RPG::Client::GridFightNPCConfig* _Config_k__BackingField; // 0x20
		::RPG::Client::GridFightRoleEffect* _RoleEffect_k__BackingField; // 0x28
		::RPG::Client::GridFightEquipComponent* _EquipComponent_k__BackingField; // 0x30
		::System::Action* OnActiveChanged; // 0x38
		::RPG::Client::GridFightTraitComponent* _TraitComponent_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::GridFightNPC* Create(::Class_1_10F56A639581CEB1_13* a1, ::Class_0_16E4307DCC419505_804* a2)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::Class_1_10F56A639581CEB1_13*, ::Class_0_16E4307DCC419505_804*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightNPC* CreateBattle(::Class_1_AE4553DBAC72BB2D* a1, ::Class_0_16E4307DCC419505_804* a2)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::Class_1_AE4553DBAC72BB2D*, ::Class_0_16E4307DCC419505_804*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_CREATEBATTLE_OFFSET))(a1, a2);
		}

		::System::Void Update(::Class_1_10F56A639581CEB1_13* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_10F56A639581CEB1_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_UPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridMemberType get_MemberType()
		{
			return ((::RPG::Client::GridFightGridMemberType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_MEMBERTYPE_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitComponent* get_TraitComponent()
		{
			return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_TRAITCOMPONENT_OFFSET))(this);
		}

		::System::Void set_TraitComponent(::RPG::Client::GridFightTraitComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_SET_TRAITCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipComponent* get_EquipComponent()
		{
			return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_EQUIPCOMPONENT_OFFSET))(this);
		}

		::System::Void set_EquipComponent(::RPG::Client::GridFightEquipComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_SET_EQUIPCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightNPCConfig* get_Config()
		{
			return ((::RPG::Client::GridFightNPCConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::GridFightNPCConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightNPCConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleEffect* get_RoleEffect()
		{
			return ((::RPG::Client::GridFightRoleEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_ROLEEFFECT_OFFSET))(this);
		}

		::System::Void set_RoleEffect(::RPG::Client::GridFightRoleEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_SET_ROLEEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean get_CanActiveTrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_CANACTIVETRAIT_OFFSET))(this);
		}

		::System::Void add_OnActiveChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_ADD_ONACTIVECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnActiveChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_REMOVE_ONACTIVECHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* ContainsTrait(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_CONTAINSTRAIT_OFFSET))(this, a1);
		}

		::System::Void _OnEquipComponentPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC__ONEQUIPCOMPONENTPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEquipComponentCollectionChanged(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ContainsTrait_b__27_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC__CONTAINSTRAIT_B__27_0_OFFSET))(this, a1);
		}
	};
}
