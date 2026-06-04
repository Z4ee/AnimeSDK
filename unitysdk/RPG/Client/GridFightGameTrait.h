#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_768;
class Class_0_16E4307DCC419505_792;
class Class_1_92E9F3B4488308D9;
class Class_1_E577B5580A99D425_7;
class Class_1_EEEF09F79EF958D3_1;
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

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_CHECKHASTRAITBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xBB8B2F0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETALLTRAITCANEFFECTSLOT_OFFSET UNITYSDK_OFFSET(0xBB8AD20)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYEFFECTID_OFFSET UNITYSDK_OFFSET(0xBB854D0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xBB85460)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYID_OFFSET UNITYSDK_OFFSET(0xBB8B0F0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0xBB8B920)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xBB8AF50)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xBB88500)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITS_OFFSET UNITYSDK_OFFSET(0xBB8AAD0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0xBB88600)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_INITIALIZETRAITS_OFFSET UNITYSDK_OFFSET(0xBB84DC0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_INITMODIFIER_OFFSET UNITYSDK_OFFSET(0xBB7F680)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_INIT_OFFSET UNITYSDK_OFFSET(0xBB7F3A0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_ISSHOWSPECIALFRONTBACKTYPETRAIT_OFFSET UNITYSDK_OFFSET(0xBB8B490)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMEMBERSCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xBB88E60)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0xBB889C0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBB7F490)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_UPDATELAYER_OFFSET UNITYSDK_OFFSET(0xBB88720)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_UPDATETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xBB84A00)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7ECF0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xBB88550)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__INITTRAITS_OFFSET UNITYSDK_OFFSET(0xBB88140)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__ONMEMBERTRAITCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xBB89D60)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETCURSWITCHROLE_OFFSET UNITYSDK_OFFSET(0xBB8BF40)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETFRONTBACKSWITCHROLE_OFFSET UNITYSDK_OFFSET(0xBB8C340)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETTRAITSWITCHROLE_OFFSET UNITYSDK_OFFSET(0xBB8C060)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__UPDATETRAITIFMEMBERACTIVE_OFFSET UNITYSDK_OFFSET(0xBB89C20)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__UPDATETRAITS_OFFSET UNITYSDK_OFFSET(0xBB8A720)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait_TypeDefinitionIndex = 61149;

	class GridFightGameTrait : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTrait*>* _TraitByID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_1_92E9F3B4488308D9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_92E9F3B4488308D9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_INIT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* get_AllTraits()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GET_ALLTRAITS_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_768* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_UPDATELAYER_OFFSET))(this);
		}

		::System::Void InitModifier(::RPG::Client::GridFightModifierInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_INITMODIFIER_OFFSET))(this, a1);
		}

		::System::Void OnModifierAdd(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMODIFIERADD_OFFSET))(this, a1);
		}

		::System::Void OnMembersChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMEMBERSCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMemberTraitCollectionChanged(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__ONMEMBERTRAITCOLLECTIONCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateTraitIfMemberActive(::Class_0_16E4307DCC419505_792* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_792*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__UPDATETRAITIFMEMBERACTIVE_OFFSET))(this, a1);
		}

		::System::Void _UpdateTraits(::Class_0_16E4307DCC419505_792* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_792*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__UPDATETRAITS_OFFSET))(this, a1);
		}

		::System::Void InitializeTraits(::System::Collections::Generic::IList_1<::Class_1_E577B5580A99D425_7*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_E577B5580A99D425_7*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_INITIALIZETRAITS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* GetTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* GetAllTraitCanEffectSlot()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETALLTRAITCANEFFECTSLOT_OFFSET))(this);
		}

		::RPG::Client::IGridFightTraitEffect* UpdateTraitEffect(::Class_1_EEEF09F79EF958D3_1* a1)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::Class_1_EEEF09F79EF958D3_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_UPDATETRAITEFFECT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTrait* GetTraitByEffectType(::RPG::GameCore::GridFightTraitEffectType a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITBYEFFECTTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffectByEffectType(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitEffectType a2)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYEFFECTTYPE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffectByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYID_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffectByEffectID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYEFFECTID_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckHasTraitByEffectType(::RPG::GameCore::GridFightTraitEffectType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_CHECKHASTRAITBYEFFECTTYPE_OFFSET))(this, a1);
		}

		::System::Boolean IsShowSpecialFrontBackTypeTrait(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_ISSHOWSPECIALFRONTBACKTYPETRAIT_OFFSET))(this, a1);
		}

		::System::Void _InitTraits(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__INITTRAITS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTrait* _GetTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETTRAITBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETROLESBYTRAIT_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetCurSwitchRole(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETCURSWITCHROLE_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetTraitSwitchRole(::RPG::GameCore::GridFightRoleSwitchConfigRow* a1, ::RPG::Client::GridFightRole* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightRoleSwitchConfigRow*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETTRAITSWITCHROLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _TryGetFrontBackSwitchRole(::RPG::GameCore::GridFightRoleSwitchConfigRow* a1, ::RPG::Client::GridFightRole* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightRoleSwitchConfigRow*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETFRONTBACKSWITCHROLE_OFFSET))(this, a1, a2);
		}
	};
}
