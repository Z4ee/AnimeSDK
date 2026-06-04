#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridMember.h"
#include "unitysdk/RPG/Client/GridFightGridMemberType.h"

class Class_0_16E4307DCC419505_773;
class Class_1_4BC858D7C27E10ED_31;
class Class_1_AE4553DBAC72BB2D;
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightNPCConfig; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTNPC_ADD_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0xBBB8400)
#define RPG_CLIENT_GRIDFIGHTNPC_CONTAINSTRAIT_OFFSET UNITYSDK_OFFSET(0xBBB84C0)
#define RPG_CLIENT_GRIDFIGHTNPC_CREATEBATTLE_OFFSET UNITYSDK_OFFSET(0xBBB7EE0)
#define RPG_CLIENT_GRIDFIGHTNPC_CREATE_OFFSET UNITYSDK_OFFSET(0xBBB7BE0)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_CANACTIVETRAIT_OFFSET UNITYSDK_OFFSET(0xBBB83F0)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBBB83D0)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBBB83B0)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0xBBB8380)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBBB8390)
#define RPG_CLIENT_GRIDFIGHTNPC_REMOVE_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0xBBB8460)
#define RPG_CLIENT_GRIDFIGHTNPC_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBBB83E0)
#define RPG_CLIENT_GRIDFIGHTNPC_SET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBBB83C0)
#define RPG_CLIENT_GRIDFIGHTNPC_SET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBBB83A0)
#define RPG_CLIENT_GRIDFIGHTNPC_UPDATE_OFFSET UNITYSDK_OFFSET(0xBBB8290)
#define RPG_CLIENT_GRIDFIGHTNPC__CONTAINSTRAIT_B__23_0_OFFSET UNITYSDK_OFFSET(0xBBB8870)
#define RPG_CLIENT_GRIDFIGHTNPC__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB7AE0)
#define RPG_CLIENT_GRIDFIGHTNPC__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xBBB86E0)
#define RPG_CLIENT_GRIDFIGHTNPC__ONEQUIPCOMPONENTPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xBBB85E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightNPC_TypeDefinitionIndex = 60838;

	class GridFightNPC : public ::RPG::Client::GridFightGridMember
	{
	public:
		::RPG::Client::GridFightEquipComponent* _EquipComponent_k__BackingField; // 0x20
		::RPG::Client::GridFightTraitComponent* _TraitComponent_k__BackingField; // 0x28
		::System::Action* OnActiveChanged; // 0x30
		::RPG::Client::GridFightNPCConfig* _Config_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::GridFightNPC* Create(::Class_1_4BC858D7C27E10ED_31* a1, ::Class_0_16E4307DCC419505_773* a2)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::Class_1_4BC858D7C27E10ED_31*, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightNPC* CreateBattle(::Class_1_AE4553DBAC72BB2D* a1, ::Class_0_16E4307DCC419505_773* a2)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::Class_1_AE4553DBAC72BB2D*, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_CREATEBATTLE_OFFSET))(a1, a2);
		}

		::System::Void Update(::Class_1_4BC858D7C27E10ED_31* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_UPDATE_OFFSET))(this, a1);
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

		::System::Boolean _ContainsTrait_b__23_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC__CONTAINSTRAIT_B__23_0_OFFSET))(this, a1);
		}
	};
}
