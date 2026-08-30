#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4D159A60491425EA_GET_BYHAVEENEMYALIVEINCLUDECUSTOMUNSELECTABLETARGET_OFFSET UNITYSDK_OFFSET(0x19537440)
#define CLASS_1_4D159A60491425EA_GET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET UNITYSDK_OFFSET(0x19537380)
#define CLASS_1_4D159A60491425EA_GET_GLOBALCLEARATTACKCACHE_OFFSET UNITYSDK_OFFSET(0x195373A0)
#define CLASS_1_4D159A60491425EA_GET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET UNITYSDK_OFFSET(0x19537340)
#define CLASS_1_4D159A60491425EA_GET_IGNOREADDMODIFIERERRORCASTERALIVESTATE_OFFSET UNITYSDK_OFFSET(0x19537460)
#define CLASS_1_4D159A60491425EA_GET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET UNITYSDK_OFFSET(0x195372E0)
#define CLASS_1_4D159A60491425EA_GET_MODIFIERRESTACKPROPERTYREPORT_OFFSET UNITYSDK_OFFSET(0x19537420)
#define CLASS_1_4D159A60491425EA_GET_MODIFIERSAFESTACKPROPERTY_OFFSET UNITYSDK_OFFSET(0x19537400)
#define CLASS_1_4D159A60491425EA_GET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET UNITYSDK_OFFSET(0x19537300)
#define CLASS_1_4D159A60491425EA_GET_PREVENTALIVESTATERESETWHENCURRENTHPZEROINLIMBO_OFFSET UNITYSDK_OFFSET(0x195373E0)
#define CLASS_1_4D159A60491425EA_GET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET UNITYSDK_OFFSET(0x195373C0)
#define CLASS_1_4D159A60491425EA_GET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET UNITYSDK_OFFSET(0x19537360)
#define CLASS_1_4D159A60491425EA_GET_STRICTLIMBOENTITYDIECHECK_OFFSET UNITYSDK_OFFSET(0x19537320)
#define CLASS_1_4D159A60491425EA_METHOD_1_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0x19537620)
#define CLASS_1_4D159A60491425EA_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x19537480)
#define CLASS_1_4D159A60491425EA_METHOD_1_D42D3EA9D1FC6F96_OFFSET UNITYSDK_OFFSET(0x19537720)
#define CLASS_1_4D159A60491425EA_SET_BYHAVEENEMYALIVEINCLUDECUSTOMUNSELECTABLETARGET_OFFSET UNITYSDK_OFFSET(0x19537450)
#define CLASS_1_4D159A60491425EA_SET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET UNITYSDK_OFFSET(0x19537390)
#define CLASS_1_4D159A60491425EA_SET_GLOBALCLEARATTACKCACHE_OFFSET UNITYSDK_OFFSET(0x195373B0)
#define CLASS_1_4D159A60491425EA_SET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET UNITYSDK_OFFSET(0x19537350)
#define CLASS_1_4D159A60491425EA_SET_IGNOREADDMODIFIERERRORCASTERALIVESTATE_OFFSET UNITYSDK_OFFSET(0x19537470)
#define CLASS_1_4D159A60491425EA_SET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET UNITYSDK_OFFSET(0x195372F0)
#define CLASS_1_4D159A60491425EA_SET_MODIFIERRESTACKPROPERTYREPORT_OFFSET UNITYSDK_OFFSET(0x19537430)
#define CLASS_1_4D159A60491425EA_SET_MODIFIERSAFESTACKPROPERTY_OFFSET UNITYSDK_OFFSET(0x19537410)
#define CLASS_1_4D159A60491425EA_SET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET UNITYSDK_OFFSET(0x19537310)
#define CLASS_1_4D159A60491425EA_SET_PREVENTALIVESTATERESETWHENCURRENTHPZEROINLIMBO_OFFSET UNITYSDK_OFFSET(0x195373F0)
#define CLASS_1_4D159A60491425EA_SET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET UNITYSDK_OFFSET(0x195373D0)
#define CLASS_1_4D159A60491425EA_SET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET UNITYSDK_OFFSET(0x19537370)
#define CLASS_1_4D159A60491425EA_SET_STRICTLIMBOENTITYDIECHECK_OFFSET UNITYSDK_OFFSET(0x19537330)

inline static constexpr unsigned int Class_1_4D159A60491425EA_TypeDefinitionIndex = 56687;

class Class_1_4D159A60491425EA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_OEGAKDACCDM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0xFD10);
	}
	static ::System::Boolean* StaticGet__ByHaveEnemyAliveIncludeCustomUnselectableTarget_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x7340);
	}
	static ::System::Boolean* StaticGet__InsertAbilityAfterUltraSkillEndDontTickAbility_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x7341);
	}
	static ::System::Boolean* StaticGet__SkipDamageStanceEventOnBreak_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x7342);
	}
	static ::System::Boolean* StaticGet__GlobalClearAttackCache_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x7343);
	}
	static ::System::Boolean* StaticGet__NotResetHandlerForEntityInDieState_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x7344);
	}
	static ::System::Boolean* StaticGet__DisableDamageStanceBreakDelayAddMdf_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x7345);
	}
	static ::System::Boolean* StaticGet__SelectFriendSkillWhenNoEnemy_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x7346);
	}
	static ::System::Boolean* StaticGet__IgnoreAddModifierErrorCasterAliveState_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x7347);
	}
	static ::System::Boolean* StaticGet__HandleMaterialEffectRenderMaskConflict_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x7348);
	}
	static ::System::Boolean* StaticGet__ModifierRestackPropertyReport_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x7349);
	}
	static ::System::Boolean* StaticGet__PreventAliveStateResetWhenCurrentHPZeroInLimbo_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x734A);
	}
	static ::System::Boolean* StaticGet__ModifierSafeStackProperty_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x734B);
	}
	static ::System::Boolean* StaticGet__StrictLimboEntityDieCheck_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x734C);
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

	static ::System::Boolean get_IgnoreAddModifierErrorCasterAliveState()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_IGNOREADDMODIFIERERRORCASTERALIVESTATE_OFFSET))();
	}

	static ::System::Void set_IgnoreAddModifierErrorCasterAliveState(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_IGNOREADDMODIFIERERRORCASTERALIVESTATE_OFFSET))(a1);
	}

	static ::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_METHOD_1_C561FF611C07A44C_OFFSET))();
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
