#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_667;
class Class_1_95A6407BC1B256C4;
class Class_1_A5344434C2683AB3;
class Class_2_9D2DEA765AF5C2B0_3;
namespace RPG::Client { class GridFightElationTraitEffectPropertyDetail; }
namespace RPG::Client { class GridFightElationTraitEffectPropertyOverview; }
namespace RPG::Client { class GridFightRoleProperty; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitElationEffect; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_ADDMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0xA5B87B0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GETBASEVALUE_OFFSET UNITYSDK_OFFSET(0xA5B8B90)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xA5B8890)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0xA5B86F0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GET_OVERVIEW_OFFSET UNITYSDK_OFFSET(0xA5B8680)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GET__TRAIT_OFFSET UNITYSDK_OFFSET(0xA5B8660)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_SETUPTRAIT_OFFSET UNITYSDK_OFFSET(0xA5B8760)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5B8D30)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B8CE0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__GETFINALVALUE_OFFSET UNITYSDK_OFFSET(0xA5B8930)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectElationProperty_TypeDefinitionIndex = 60193;

	class GridFightTraitEffectElationProperty : public ::System::Object
	{
	public:
		static ::Class_2_9D2DEA765AF5C2B0_3** StaticGet__Calculator()
		{
			return (::Class_2_9D2DEA765AF5C2B0_3**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitEffectElationProperty_TypeDefinitionIndex)->GetStaticField(0x1B010);
		}
		::Class_1_95A6407BC1B256C4* _StarModifierSource; // 0x10
		::Class_1_A5344434C2683AB3* _FormulaContext; // 0x18
		::RPG::Client::GridFightTraitElationEffect* _TraitEffect; // 0x20

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

		::System::Void SetupTrait(::RPG::Client::GridFightTraitElationEffect* traitEffect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_SETUPTRAIT_OFFSET))(this, traitEffect);
		}

		::System::Void AddModifierSource(::Class_0_16E4307DCC419505_667* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_667*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_ADDMODIFIERSOURCE_OFFSET))(this, source);
		}

		::RPG::Client::GridFightRoleProperty* GetProperty(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GETPROPERTY_OFFSET))(this, type);
		}

		::RPG::GameCore::FixPoint GetBaseValue(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY_GETBASEVALUE_OFFSET))(this, type);
		}

		::RPG::GameCore::FixPoint _GetFinalValue(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONPROPERTY__GETFINALVALUE_OFFSET))(this, type);
		}
	};
}
