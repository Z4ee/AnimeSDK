#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_762;
class Class_1_4EB7DC90478E822D;
class Class_1_F4B3762E9E6279A5;
class Class_2_BEDE94774D30A3D8;
namespace RPG::Client { class GridFightBattleGameContext; }
namespace RPG::Client { class GridFightElationTraitEffectPropertyDetail; }
namespace RPG::Client { class GridFightElationTraitEffectPropertyOverview; }
namespace RPG::Client { class GridFightRoleProperty; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitElationEffect; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_ADDMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0xD360490)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GETBASEVALUE_OFFSET UNITYSDK_OFFSET(0xD3607F0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xD360540)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0xD3603D0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GET_OVERVIEW_OFFSET UNITYSDK_OFFSET(0xD360360)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GET__TRAIT_OFFSET UNITYSDK_OFFSET(0xD360310)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_SETUPTRAIT_OFFSET UNITYSDK_OFFSET(0xD360440)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0xD360C00)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xD360B80)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__GETABILITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xD360B00)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__GETBATTLEFINALVALUE_OFFSET UNITYSDK_OFFSET(0xD3609D0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__GETFINALVALUE_OFFSET UNITYSDK_OFFSET(0xD3605E0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xD360A30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectElationProperty_TypeDefinitionIndex = 65432;

	class GridFightTraitEffectElationProperty : public ::System::Object
	{
	public:
		static ::Class_2_BEDE94774D30A3D8** StaticGet__Calculator()
		{
			return (::Class_2_BEDE94774D30A3D8**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitEffectElationProperty_TypeDefinitionIndex)->GetStaticField(0x53E40);
		}
		::RPG::Client::GridFightTraitElationEffect* _TraitEffect; // 0x10
		::Class_1_4EB7DC90478E822D* _StarModifierSource; // 0x18
		::Class_1_F4B3762E9E6279A5* _FormulaContext; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__CCTOR_OFFSET))();
		}

		::RPG::Client::GridFightTrait* get__Trait()
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GET__TRAIT_OFFSET))(this);
		}

		::RPG::Client::GridFightElationTraitEffectPropertyOverview* get_Overview()
		{
			return ((::RPG::Client::GridFightElationTraitEffectPropertyOverview*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GET_OVERVIEW_OFFSET))(this);
		}

		::RPG::Client::GridFightElationTraitEffectPropertyDetail* get_Detail()
		{
			return ((::RPG::Client::GridFightElationTraitEffectPropertyDetail*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GET_DETAIL_OFFSET))(this);
		}

		::System::Void SetupTrait(::RPG::Client::GridFightTraitElationEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_SETUPTRAIT_OFFSET))(this, a1);
		}

		::System::Void AddModifierSource(::Class_0_16E4307DCC419505_762* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_762*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_ADDMODIFIERSOURCE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleProperty* GetProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GETPROPERTY_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetBaseValue(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GETBASEVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _GetFinalValue(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__GETFINALVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _GetBattleFinalValue(::RPG::GameCore::AbilityProperty a1, ::RPG::Client::GridFightBattleGameContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::Client::GridFightBattleGameContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__GETBATTLEFINALVALUE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint _GetProperty(::RPG::GameCore::AbilityProperty a1, ::RPG::Client::GridFightBattleGameContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::Client::GridFightBattleGameContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__GETPROPERTY_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TurnBasedAbilityComponent* _GetAbilityComponent(::RPG::Client::GridFightBattleGameContext* a1)
		{
			return ((::RPG::GameCore::TurnBasedAbilityComponent*(*)(::PVOID, ::RPG::Client::GridFightBattleGameContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__GETABILITYCOMPONENT_OFFSET))(this, a1);
		}
	};
}
