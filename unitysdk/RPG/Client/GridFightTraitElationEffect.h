#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_1C553A7AF36F9656_1;
class Class_1_8271AFF79E02658D;
class Class_1_EEEF09F79EF958D3_1;
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

#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETITEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xBC2BA70)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETORBCALLBACK_OFFSET UNITYSDK_OFFSET(0xBC2BA20)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_CLEARCALLBACK_OFFSET UNITYSDK_OFFSET(0xBC2BAC0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_COMPOSITEEQUIP_OFFSET UNITYSDK_OFFSET(0xBC2C270)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0xBC2C9A0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBC2C870)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xBC2CA00)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0xBC2C890)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_ROUNDHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xBC2CA40)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBC2C8B0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xBC2C8E0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_STAR_OFFSET UNITYSDK_OFFSET(0xBC2C8D0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0xBC2C3E0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_1_OFFSET UNITYSDK_OFFSET(0xBC2C1C0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBC2BFD0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBC2C880)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0xBC2C8A0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_SKILLCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBC2C8C0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_STAR_OFFSET UNITYSDK_OFFSET(0xBC2C7C0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_TRACKEQUIPUPDATE_OFFSET UNITYSDK_OFFSET(0xBC2C390)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBC2BB10)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__REGISTERSUMMARIZER_OFFSET UNITYSDK_OFFSET(0xBC2BF00)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__UPDATEINTERNEL_OFFSET UNITYSDK_OFFSET(0xBC2C090)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT___IFIXBASEPROXY_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0xBC2CB40)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT___IFIXBASEPROXY_ONUPDATE_1_OFFSET UNITYSDK_OFFSET(0xBC2CAF0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBC2CA80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitElationEffect_TypeDefinitionIndex = 61139;

	class GridFightTraitElationEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::Client::GridFightTraitEffectElationProperty* _PropertyProvider_k__BackingField; // 0x30
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* AdditionalProperties; // 0x38
		::RPG::Client::GridFightElationTraitEquipComponent* _EquipComponent_k__BackingField; // 0x40
		::System::Action_1<::RPG::Client::GridFightEquipItemData*>* _OnGetItem; // 0x48
		::System::Action_1<::RPG::Client::GridFightOrbEntityData*>* _OnGetOrb; // 0x50
		::RPG::Client::GridFightTraitEffectElationSkill* _SkillComponent_k__BackingField; // 0x58
		::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow* _ParamConfigRow; // 0x60
		::System::UInt32 _Star; // 0x68
		::System::UInt32 _TrackEquipUpdate; // 0x6C

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void AddGetOrbCallback(::System::Action_1<::RPG::Client::GridFightOrbEntityData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightOrbEntityData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETORBCALLBACK_OFFSET))(this, a1);
		}

		::System::Void AddGetItemCallback(::System::Action_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETITEMCALLBACK_OFFSET))(this, a1);
		}

		::System::Void ClearCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_CLEARCALLBACK_OFFSET))(this);
		}

		::System::Void OnUpdate(::Class_1_EEEF09F79EF958D3_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EEEF09F79EF958D3_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnUpdate_1(::Class_1_8271AFF79E02658D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_1_OFFSET))(this, a1);
		}

		::System::Void _UpdateInternel(::Class_1_1C553A7AF36F9656_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1C553A7AF36F9656_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__UPDATEINTERNEL_OFFSET))(this, a1);
		}

		::System::Void CompositeEquip(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_COMPOSITEEQUIP_OFFSET))(this, a1);
		}

		::System::Void TrackEquipUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_TRACKEQUIPUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterSummarizer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__REGISTERSUMMARIZER_OFFSET))(this);
		}

		::RPG::Client::GridFightElationTraitEquipComponent* get_EquipComponent()
		{
			return ((::RPG::Client::GridFightElationTraitEquipComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EQUIPCOMPONENT_OFFSET))(this);
		}

		::System::Void set_EquipComponent(::RPG::Client::GridFightElationTraitEquipComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightElationTraitEquipComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_EQUIPCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitEffectElationProperty* get_PropertyProvider()
		{
			return ((::RPG::Client::GridFightTraitEffectElationProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_PROPERTYPROVIDER_OFFSET))(this);
		}

		::System::Void set_PropertyProvider(::RPG::Client::GridFightTraitEffectElationProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectElationProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_PROPERTYPROVIDER_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitEffectElationSkill* get_SkillComponent()
		{
			return ((::RPG::Client::GridFightTraitEffectElationSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLCOMPONENT_OFFSET))(this);
		}

		::System::Void set_SkillComponent(::RPG::Client::GridFightTraitEffectElationSkill* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectElationSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_SKILLCOMPONENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_STAR_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_OnUpdate(::Class_1_EEEF09F79EF958D3_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EEEF09F79EF958D3_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnUpdate_1(::Class_1_8271AFF79E02658D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT___IFIXBASEPROXY_ONUPDATE_1_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT___IFIXBASEPROXY_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}
	};
}
