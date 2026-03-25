#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridMember.h"
#include "unitysdk/RPG/Client/GridFightGridMemberType.h"

class Class_0_16E4307DCC419505_631;
class Class_1_6EA152E8ED858D74;
class Class_1_99BD961747420BEB_29;
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightNPCConfig; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTNPC_ADD_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x98450D0)
#define RPG_CLIENT_GRIDFIGHTNPC_CONTAINSTRAIT_OFFSET UNITYSDK_OFFSET(0x986E030)
#define RPG_CLIENT_GRIDFIGHTNPC_CREATEBATTLE_OFFSET UNITYSDK_OFFSET(0x986DB00)
#define RPG_CLIENT_GRIDFIGHTNPC_CREATE_OFFSET UNITYSDK_OFFSET(0x986D850)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_CANACTIVETRAIT_OFFSET UNITYSDK_OFFSET(0x986DFC0)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x986DFA0)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x986DF80)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x986DF50)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x986DF60)
#define RPG_CLIENT_GRIDFIGHTNPC_REMOVE_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x986DFD0)
#define RPG_CLIENT_GRIDFIGHTNPC_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x986DFB0)
#define RPG_CLIENT_GRIDFIGHTNPC_SET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x986DF90)
#define RPG_CLIENT_GRIDFIGHTNPC_SET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x986DF70)
#define RPG_CLIENT_GRIDFIGHTNPC_UPDATE_OFFSET UNITYSDK_OFFSET(0x986DE60)
#define RPG_CLIENT_GRIDFIGHTNPC__CONTAINSTRAIT_B__23_0_OFFSET UNITYSDK_OFFSET(0x986E380)
#define RPG_CLIENT_GRIDFIGHTNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x986D760)
#define RPG_CLIENT_GRIDFIGHTNPC__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x986E210)
#define RPG_CLIENT_GRIDFIGHTNPC__ONEQUIPCOMPONENTPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x986E110)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightNPC_TypeDefinitionIndex = 52828;

	class GridFightNPC : public ::RPG::Client::GridFightGridMember
	{
	public:
		::System::Action* OnActiveChanged; // 0x20
		::RPG::Client::GridFightTraitComponent* _TraitComponent_k__BackingField; // 0x28
		::RPG::Client::GridFightNPCConfig* _Config_k__BackingField; // 0x30
		::RPG::Client::GridFightEquipComponent* _EquipComponent_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC__CTOR_OFFSET))(this, id, uid);
		}

		static ::RPG::Client::GridFightNPC* Create(::Class_1_99BD961747420BEB_29* protoNPC, ::Class_0_16E4307DCC419505_631* dataContext)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::Class_1_99BD961747420BEB_29*, ::Class_0_16E4307DCC419505_631*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_CREATE_OFFSET))(protoNPC, dataContext);
		}

		static ::RPG::Client::GridFightNPC* CreateBattle(::Class_1_6EA152E8ED858D74* battleData, ::Class_0_16E4307DCC419505_631* dataContext)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::Class_1_6EA152E8ED858D74*, ::Class_0_16E4307DCC419505_631*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_CREATEBATTLE_OFFSET))(battleData, dataContext);
		}

		::System::Void Update(::Class_1_99BD961747420BEB_29* protoNPC)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_UPDATE_OFFSET))(this, protoNPC);
		}

		::RPG::Client::GridFightGridMemberType get_MemberType()
		{
			return ((::RPG::Client::GridFightGridMemberType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_MEMBERTYPE_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitComponent* get_TraitComponent()
		{
			return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_TRAITCOMPONENT_OFFSET))(this);
		}

		::System::Void set_TraitComponent(::RPG::Client::GridFightTraitComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_SET_TRAITCOMPONENT_OFFSET))(this, value);
		}

		::RPG::Client::GridFightEquipComponent* get_EquipComponent()
		{
			return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_EQUIPCOMPONENT_OFFSET))(this);
		}

		::System::Void set_EquipComponent(::RPG::Client::GridFightEquipComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_SET_EQUIPCOMPONENT_OFFSET))(this, value);
		}

		::RPG::Client::GridFightNPCConfig* get_Config()
		{
			return ((::RPG::Client::GridFightNPCConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::GridFightNPCConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightNPCConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Boolean get_CanActiveTrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_CANACTIVETRAIT_OFFSET))(this);
		}

		::System::Void add_OnActiveChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_ADD_ONACTIVECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnActiveChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_REMOVE_ONACTIVECHANGED_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* ContainsTrait(::System::Collections::Generic::List_1<::System::UInt32>* traits)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_CONTAINSTRAIT_OFFSET))(this, traits);
		}

		::System::Void _OnEquipComponentPropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC__ONEQUIPCOMPONENTPROPERTYCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void _OnEquipComponentCollectionChanged(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET))(this, sender, e);
		}

		::System::Boolean _ContainsTrait_b__23_0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC__CONTAINSTRAIT_B__23_0_OFFSET))(this, id);
		}
	};
}
