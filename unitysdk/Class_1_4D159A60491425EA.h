#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4D159A60491425EA_GET_BYHAVEENEMYALIVEINCLUDECUSTOMUNSELECTABLETARGET_OFFSET UNITYSDK_OFFSET(0xDA471F0)
#define CLASS_1_4D159A60491425EA_GET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET UNITYSDK_OFFSET(0xDA47130)
#define CLASS_1_4D159A60491425EA_GET_GLOBALCLEARATTACKCACHE_OFFSET UNITYSDK_OFFSET(0xDA47150)
#define CLASS_1_4D159A60491425EA_GET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET UNITYSDK_OFFSET(0xDA470F0)
#define CLASS_1_4D159A60491425EA_GET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET UNITYSDK_OFFSET(0xDA47090)
#define CLASS_1_4D159A60491425EA_GET_MODIFIERRESTACKPROPERTYREPORT_OFFSET UNITYSDK_OFFSET(0xDA471D0)
#define CLASS_1_4D159A60491425EA_GET_MODIFIERSAFESTACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xDA471B0)
#define CLASS_1_4D159A60491425EA_GET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET UNITYSDK_OFFSET(0xDA470B0)
#define CLASS_1_4D159A60491425EA_GET_PREVENTALIVESTATERESETWHENCURRENTHPZEROINLIMBO_OFFSET UNITYSDK_OFFSET(0xDA47190)
#define CLASS_1_4D159A60491425EA_GET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET UNITYSDK_OFFSET(0xDA47170)
#define CLASS_1_4D159A60491425EA_GET_SKIPADDMODIFIERWHENCASTERDEAD_OFFSET UNITYSDK_OFFSET(0xDA47210)
#define CLASS_1_4D159A60491425EA_GET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET UNITYSDK_OFFSET(0xDA47110)
#define CLASS_1_4D159A60491425EA_GET_STRICTLIMBOENTITYDIECHECK_OFFSET UNITYSDK_OFFSET(0xDA470D0)
#define CLASS_1_4D159A60491425EA_METHOD_1_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0xDA473B0)
#define CLASS_1_4D159A60491425EA_METHOD_1_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0xDA47230)
#define CLASS_1_4D159A60491425EA_METHOD_1_D42D3EA9D1FC6F96_OFFSET UNITYSDK_OFFSET(0xDA474B0)
#define CLASS_1_4D159A60491425EA_SET_BYHAVEENEMYALIVEINCLUDECUSTOMUNSELECTABLETARGET_OFFSET UNITYSDK_OFFSET(0xDA47200)
#define CLASS_1_4D159A60491425EA_SET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET UNITYSDK_OFFSET(0xDA47140)
#define CLASS_1_4D159A60491425EA_SET_GLOBALCLEARATTACKCACHE_OFFSET UNITYSDK_OFFSET(0xDA47160)
#define CLASS_1_4D159A60491425EA_SET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET UNITYSDK_OFFSET(0xDA47100)
#define CLASS_1_4D159A60491425EA_SET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET UNITYSDK_OFFSET(0xDA470A0)
#define CLASS_1_4D159A60491425EA_SET_MODIFIERRESTACKPROPERTYREPORT_OFFSET UNITYSDK_OFFSET(0xDA471E0)
#define CLASS_1_4D159A60491425EA_SET_MODIFIERSAFESTACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xDA471C0)
#define CLASS_1_4D159A60491425EA_SET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET UNITYSDK_OFFSET(0xDA470C0)
#define CLASS_1_4D159A60491425EA_SET_PREVENTALIVESTATERESETWHENCURRENTHPZEROINLIMBO_OFFSET UNITYSDK_OFFSET(0xDA471A0)
#define CLASS_1_4D159A60491425EA_SET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET UNITYSDK_OFFSET(0xDA47180)
#define CLASS_1_4D159A60491425EA_SET_SKIPADDMODIFIERWHENCASTERDEAD_OFFSET UNITYSDK_OFFSET(0xDA47220)
#define CLASS_1_4D159A60491425EA_SET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET UNITYSDK_OFFSET(0xDA47120)
#define CLASS_1_4D159A60491425EA_SET_STRICTLIMBOENTITYDIECHECK_OFFSET UNITYSDK_OFFSET(0xDA470E0)

inline static constexpr unsigned int Class_1_4D159A60491425EA_TypeDefinitionIndex = 56502;

class Class_1_4D159A60491425EA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_OEGAKDACCDM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x53030);
	}
	static ::System::Boolean* StaticGet__SkipDamageStanceEventOnBreak_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x126F0);
	}
	static ::System::Boolean* StaticGet__DisableDamageStanceBreakDelayAddMdf_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x126F1);
	}
	static ::System::Boolean* StaticGet__ByHaveEnemyAliveIncludeCustomUnselectableTarget_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x126F2);
	}
	static ::System::Boolean* StaticGet__SelectFriendSkillWhenNoEnemy_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x126F3);
	}
	static ::System::Boolean* StaticGet__HandleMaterialEffectRenderMaskConflict_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x126F4);
	}
	static ::System::Boolean* StaticGet__ModifierRestackPropertyReport_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x126F5);
	}
	static ::System::Boolean* StaticGet__GlobalClearAttackCache_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x126F6);
	}
	static ::System::Boolean* StaticGet__ModifierSafeStackProperty_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x126F7);
	}
	static ::System::Boolean* StaticGet__InsertAbilityAfterUltraSkillEndDontTickAbility_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x126F8);
	}
	static ::System::Boolean* StaticGet__NotResetHandlerForEntityInDieState_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x126F9);
	}
	static ::System::Boolean* StaticGet__SkipAddModifierWhenCasterDead_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x126FA);
	}
	static ::System::Boolean* StaticGet__PreventAliveStateResetWhenCurrentHPZeroInLimbo_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x126FB);
	}
	static ::System::Boolean* StaticGet__StrictLimboEntityDieCheck_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x126FC);
	}

	static ::System::Boolean get_InsertAbilityAfterUltraSkillEndDontTickAbility()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET))();
	}

	static ::System::Void set_InsertAbilityAfterUltraSkillEndDontTickAbility(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET))(a1);
	}

	static ::System::Boolean get_NotResetHandlerForEntityInDieState()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET))();
	}

	static ::System::Void set_NotResetHandlerForEntityInDieState(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET))(a1);
	}

	static ::System::Boolean get_StrictLimboEntityDieCheck()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_STRICTLIMBOENTITYDIECHECK_OFFSET))();
	}

	static ::System::Void set_StrictLimboEntityDieCheck(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_STRICTLIMBOENTITYDIECHECK_OFFSET))(a1);
	}

	static ::System::Boolean get_HandleMaterialEffectRenderMaskConflict()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET))();
	}

	static ::System::Void set_HandleMaterialEffectRenderMaskConflict(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET))(a1);
	}

	static ::System::Boolean get_SkipDamageStanceEventOnBreak()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET))();
	}

	static ::System::Void set_SkipDamageStanceEventOnBreak(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET))(a1);
	}

	static ::System::Boolean get_DisableDamageStanceBreakDelayAddMdf()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET))();
	}

	static ::System::Void set_DisableDamageStanceBreakDelayAddMdf(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET))(a1);
	}

	static ::System::Boolean get_GlobalClearAttackCache()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_GLOBALCLEARATTACKCACHE_OFFSET))();
	}

	static ::System::Void set_GlobalClearAttackCache(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_GLOBALCLEARATTACKCACHE_OFFSET))(a1);
	}

	static ::System::Boolean get_SelectFriendSkillWhenNoEnemy()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET))();
	}

	static ::System::Void set_SelectFriendSkillWhenNoEnemy(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET))(a1);
	}

	static ::System::Boolean get_PreventAliveStateResetWhenCurrentHPZeroInLimbo()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_PREVENTALIVESTATERESETWHENCURRENTHPZEROINLIMBO_OFFSET))();
	}

	static ::System::Void set_PreventAliveStateResetWhenCurrentHPZeroInLimbo(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_PREVENTALIVESTATERESETWHENCURRENTHPZEROINLIMBO_OFFSET))(a1);
	}

	static ::System::Boolean get_ModifierSafeStackProperty()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_MODIFIERSAFESTACKPROPERTY_OFFSET))();
	}

	static ::System::Void set_ModifierSafeStackProperty(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_MODIFIERSAFESTACKPROPERTY_OFFSET))(a1);
	}

	static ::System::Boolean get_ModifierRestackPropertyReport()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_MODIFIERRESTACKPROPERTYREPORT_OFFSET))();
	}

	static ::System::Void set_ModifierRestackPropertyReport(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_MODIFIERRESTACKPROPERTYREPORT_OFFSET))(a1);
	}

	static ::System::Boolean get_ByHaveEnemyAliveIncludeCustomUnselectableTarget()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_BYHAVEENEMYALIVEINCLUDECUSTOMUNSELECTABLETARGET_OFFSET))();
	}

	static ::System::Void set_ByHaveEnemyAliveIncludeCustomUnselectableTarget(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_BYHAVEENEMYALIVEINCLUDECUSTOMUNSELECTABLETARGET_OFFSET))(a1);
	}

	static ::System::Boolean get_SkipAddModifierWhenCasterDead()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_SKIPADDMODIFIERWHENCASTERDEAD_OFFSET))();
	}

	static ::System::Void set_SkipAddModifierWhenCasterDead(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_SKIPADDMODIFIERWHENCASTERDEAD_OFFSET))(a1);
	}

	static ::System::Void Method_1_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_METHOD_1_D0CD9A971CA3B1CF_OFFSET))();
	}

	static ::System::Boolean Method_1_D42D3EA9D1FC6F96(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_METHOD_1_D42D3EA9D1FC6F96_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_611142A6ECF0D805(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_METHOD_1_611142A6ECF0D805_OFFSET))(a1);
	}
};
