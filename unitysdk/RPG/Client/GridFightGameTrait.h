#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_717;
class Class_0_16E4307DCC419505_741;
class Class_1_4AC309666BC73BC1_1;
class Class_1_92E9F3B4488308D9;
class Class_1_E577B5580A99D425_4;
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightModifierInfo; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace RPG::GameCore { class GridFightRoleSwitchConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_CHECKHASTRAITBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xA4E4B50)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETALLTRAITCANEFFECTSLOT_OFFSET UNITYSDK_OFFSET(0xA4E4770)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYEFFECTID_OFFSET UNITYSDK_OFFSET(0xA4DF800)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xA4DF790)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYID_OFFSET UNITYSDK_OFFSET(0xA4E49C0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0xA4E5020)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xA4E48C0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xA4E21C0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITS_OFFSET UNITYSDK_OFFSET(0xA4E45F0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0xA4E22F0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_INITIALIZETRAITS_OFFSET UNITYSDK_OFFSET(0xA4DF0E0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_INITMODIFIER_OFFSET UNITYSDK_OFFSET(0xA4DA450)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_INIT_OFFSET UNITYSDK_OFFSET(0xA4DA260)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_ISSHOWSPECIALFRONTBACKTYPETRAIT_OFFSET UNITYSDK_OFFSET(0xA4E4C50)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMEMBERSCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xA4E2A30)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0xA4E2520)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xA4DA2D0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_UPDATELAYER_OFFSET UNITYSDK_OFFSET(0xA4E2370)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_UPDATETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xA4DEF40)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D9BD0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xA4E2210)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__INITTRAITS_OFFSET UNITYSDK_OFFSET(0xA4E1E00)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__ONMEMBERTRAITCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA4E3840)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETCURSWITCHROLE_OFFSET UNITYSDK_OFFSET(0xA4E55F0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETFRONTBACKSWITCHROLE_OFFSET UNITYSDK_OFFSET(0xA4E5A00)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETTRAITSWITCHROLE_OFFSET UNITYSDK_OFFSET(0xA4E5710)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__UPDATETRAITIFMEMBERACTIVE_OFFSET UNITYSDK_OFFSET(0xA4E3710)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__UPDATETRAITS_OFFSET UNITYSDK_OFFSET(0xA4E4250)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait_TypeDefinitionIndex = 60214;

	class GridFightGameTrait : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTrait*>* _TraitByID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_1_92E9F3B4488308D9* traitFactory)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_92E9F3B4488308D9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_INIT_OFFSET))(this, traitFactory);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* get_AllTraits()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GET_ALLTRAITS_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_717* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_717*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void UpdateLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_UPDATELAYER_OFFSET))(this);
		}

		::System::Void InitModifier(::RPG::Client::GridFightModifierInfo* modifierInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_INITMODIFIER_OFFSET))(this, modifierInfo);
		}

		::System::Void OnModifierAdd(::RPG::Client::GridFightGameModifier* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMODIFIERADD_OFFSET))(this, modifier);
		}

		::System::Void OnMembersChangedEventHandler(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMEMBERSCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Void _OnMemberTraitCollectionChanged(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__ONMEMBERTRAITCOLLECTIONCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void _UpdateTraitIfMemberActive(::Class_0_16E4307DCC419505_741* member)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_741*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__UPDATETRAITIFMEMBERACTIVE_OFFSET))(this, member);
		}

		::System::Void _UpdateTraits(::Class_0_16E4307DCC419505_741* member)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_741*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__UPDATETRAITS_OFFSET))(this, member);
		}

		::System::Void InitializeTraits(::System::Collections::Generic::IList_1<::Class_1_E577B5580A99D425_4*>* traits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_E577B5580A99D425_4*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_INITIALIZETRAITS_OFFSET))(this, traits);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* GetTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* GetAllTraitCanEffectSlot()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETALLTRAITCANEFFECTSLOT_OFFSET))(this);
		}

		::RPG::Client::IGridFightTraitEffect* UpdateTraitEffect(::Class_1_4AC309666BC73BC1_1* data)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::Class_1_4AC309666BC73BC1_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_UPDATETRAITEFFECT_OFFSET))(this, data);
		}

		::RPG::Client::GridFightTrait* GetTraitByEffectType(::RPG::GameCore::GridFightTraitEffectType type)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITBYEFFECTTYPE_OFFSET))(this, type);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffectByEffectType(::System::UInt32 traitID, ::RPG::GameCore::GridFightTraitEffectType type)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYEFFECTTYPE_OFFSET))(this, traitID, type);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffectByID(::System::UInt32 effectID)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYID_OFFSET))(this, effectID);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffectByEffectID(::System::UInt32 traitID, ::System::UInt32 effectID)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYEFFECTID_OFFSET))(this, traitID, effectID);
		}

		::System::Boolean CheckHasTraitByEffectType(::RPG::GameCore::GridFightTraitEffectType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_CHECKHASTRAITBYEFFECTTYPE_OFFSET))(this, type);
		}

		::System::Boolean IsShowSpecialFrontBackTypeTrait(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_ISSHOWSPECIALFRONTBACKTYPETRAIT_OFFSET))(this, role);
		}

		::System::Void _InitTraits(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* traits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__INITTRAITS_OFFSET))(this, traits);
		}

		::RPG::Client::GridFightTrait* _GetTraitByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETTRAITBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 traitID)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETROLESBYTRAIT_OFFSET))(this, traitID);
		}

		::System::Boolean _TryGetCurSwitchRole(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETCURSWITCHROLE_OFFSET))(this, role);
		}

		::System::Boolean _TryGetTraitSwitchRole(::RPG::GameCore::GridFightRoleSwitchConfigRow* row, ::RPG::Client::GridFightRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightRoleSwitchConfigRow*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETTRAITSWITCHROLE_OFFSET))(this, row, role);
		}

		::System::Boolean _TryGetFrontBackSwitchRole(::RPG::GameCore::GridFightRoleSwitchConfigRow* row, ::RPG::Client::GridFightRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightRoleSwitchConfigRow*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETFRONTBACKSWITCHROLE_OFFSET))(this, row, role);
		}
	};
}
