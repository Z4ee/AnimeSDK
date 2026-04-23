#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_4AC309666BC73BC1_1;
class Class_1_8271AFF79E02658D;
class Class_1_D6F5DD2AE63C8990;
namespace RPG::Client { class GridFightElationTraitEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitEffectElationProperty; }
namespace RPG::Client { class GridFightTraitEffectElationSkill; }
namespace RPG::GameCore { class GridFightTraitEffectLayerParamConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETITEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xA5B94E0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETORBCALLBACK_OFFSET UNITYSDK_OFFSET(0xA5B9490)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_CLEARCALLBACK_OFFSET UNITYSDK_OFFSET(0xA5B9530)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_COMPOSITEEQUIP_OFFSET UNITYSDK_OFFSET(0xA5BA140)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0xA5BA870)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA5BA740)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA5BA8D0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0xA5BA760)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_ROUNDHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA5BA910)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA5BA780)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xA5BA7B0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_STAR_OFFSET UNITYSDK_OFFSET(0xA5BA7A0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0xA5BA2B0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_1_OFFSET UNITYSDK_OFFSET(0xA5B9BF0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA5B9A00)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA5BA750)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0xA5BA770)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_SKILLCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA5BA790)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_STAR_OFFSET UNITYSDK_OFFSET(0xA5BA690)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_TRACKEQUIPUPDATE_OFFSET UNITYSDK_OFFSET(0xA5BA260)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B9580)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__REGISTERSUMMARIZER_OFFSET UNITYSDK_OFFSET(0xA5B9930)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__UPDATEINTERNEL_OFFSET UNITYSDK_OFFSET(0xA5B9AC0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT___IFIXBASEPROXY_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0xA5BAA10)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT___IFIXBASEPROXY_ONUPDATE_1_OFFSET UNITYSDK_OFFSET(0xA5BA9C0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA5BA950)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitElationEffect_TypeDefinitionIndex = 60204;

	class GridFightTraitElationEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::Client::GridFightElationTraitEquipComponent* _EquipComponent_k__BackingField; // 0x30
		::RPG::Client::GridFightTraitEffectElationSkill* _SkillComponent_k__BackingField; // 0x38
		::System::Action_1<::RPG::Client::GridFightOrbEntityData*>* _OnGetOrb; // 0x40
		::System::Action_1<::RPG::Client::GridFightEquipItemData*>* _OnGetItem; // 0x48
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* AdditionalProperties; // 0x50
		::RPG::Client::GridFightTraitEffectElationProperty* _PropertyProvider_k__BackingField; // 0x58
		::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow* _ParamConfigRow; // 0x60
		::System::UInt32 _Star; // 0x68
		::System::UInt32 _TrackEquipUpdate; // 0x6C

		::System::Void _ctor(::System::UInt32 id, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__CTOR_OFFSET))(this, id, trait);
		}

		::System::Void AddGetOrbCallback(::System::Action_1<::RPG::Client::GridFightOrbEntityData*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightOrbEntityData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETORBCALLBACK_OFFSET))(this, callback);
		}

		::System::Void AddGetItemCallback(::System::Action_1<::RPG::Client::GridFightEquipItemData*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETITEMCALLBACK_OFFSET))(this, callback);
		}

		::System::Void ClearCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_CLEARCALLBACK_OFFSET))(this);
		}

		::System::Void OnUpdate(::Class_1_4AC309666BC73BC1_1* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4AC309666BC73BC1_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_OFFSET))(this, update);
		}

		::System::Void OnUpdate_1(::Class_1_8271AFF79E02658D* effect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_1_OFFSET))(this, effect);
		}

		::System::Void _UpdateInternel(::Class_1_D6F5DD2AE63C8990* elationEffect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D6F5DD2AE63C8990*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__UPDATEINTERNEL_OFFSET))(this, elationEffect);
		}

		::System::Void CompositeEquip(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_COMPOSITEEQUIP_OFFSET))(this, uid);
		}

		::System::Void TrackEquipUpdate(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_TRACKEQUIPUPDATE_OFFSET))(this, uid);
		}

		::System::Void OnTraitChange(::System::UInt32 layer, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONTRAITCHANGE_OFFSET))(this, layer, isActive);
		}

		::System::Void _RegisterSummarizer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__REGISTERSUMMARIZER_OFFSET))(this);
		}

		::RPG::Client::GridFightElationTraitEquipComponent* get_EquipComponent()
		{
			return ((::RPG::Client::GridFightElationTraitEquipComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EQUIPCOMPONENT_OFFSET))(this);
		}

		::System::Void set_EquipComponent(::RPG::Client::GridFightElationTraitEquipComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightElationTraitEquipComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_EQUIPCOMPONENT_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTraitEffectElationProperty* get_PropertyProvider()
		{
			return ((::RPG::Client::GridFightTraitEffectElationProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_PROPERTYPROVIDER_OFFSET))(this);
		}

		::System::Void set_PropertyProvider(::RPG::Client::GridFightTraitEffectElationProperty* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectElationProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_PROPERTYPROVIDER_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTraitEffectElationSkill* get_SkillComponent()
		{
			return ((::RPG::Client::GridFightTraitEffectElationSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLCOMPONENT_OFFSET))(this);
		}

		::System::Void set_SkillComponent(::RPG::Client::GridFightTraitEffectElationSkill* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectElationSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_SKILLCOMPONENT_OFFSET))(this, value);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_STAR_OFFSET))(this, value);
		}

		::System::String* get_SkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_EffectParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EFFECTPARAMS_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_ROUNDHEADICONPATH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnUpdate(::Class_1_4AC309666BC73BC1_1* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4AC309666BC73BC1_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnUpdate_1(::Class_1_8271AFF79E02658D* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT___IFIXBASEPROXY_ONUPDATE_1_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnTraitChange(::System::UInt32 P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT___IFIXBASEPROXY_ONTRAITCHANGE_OFFSET))(this, P0, P1);
		}
	};
}
