#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8A4209AC4705862A_GET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET UNITYSDK_OFFSET(0x10AE2120)
#define CLASS_1_8A4209AC4705862A_GET_GLOBALCLEARATTACKCACHE_OFFSET UNITYSDK_OFFSET(0x10AE2140)
#define CLASS_1_8A4209AC4705862A_GET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET UNITYSDK_OFFSET(0x10AE20E0)
#define CLASS_1_8A4209AC4705862A_GET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET UNITYSDK_OFFSET(0x10AE2080)
#define CLASS_1_8A4209AC4705862A_GET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET UNITYSDK_OFFSET(0x10AE20A0)
#define CLASS_1_8A4209AC4705862A_GET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET UNITYSDK_OFFSET(0x10AE2160)
#define CLASS_1_8A4209AC4705862A_GET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET UNITYSDK_OFFSET(0x10AE2100)
#define CLASS_1_8A4209AC4705862A_GET_STRICTLIMBOENTITYDIECHECK_OFFSET UNITYSDK_OFFSET(0x10AE20C0)
#define CLASS_1_8A4209AC4705862A_METHOD_1_8F1DEE03EB95CFBC_OFFSET UNITYSDK_OFFSET(0x10AE2270)
#define CLASS_1_8A4209AC4705862A_METHOD_1_EA50D7BCEB18D89B_OFFSET UNITYSDK_OFFSET(0x10AE2180)
#define CLASS_1_8A4209AC4705862A_METHOD_1_F68AA1B6F38F06ED_OFFSET UNITYSDK_OFFSET(0x10AE23B0)
#define CLASS_1_8A4209AC4705862A_SET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET UNITYSDK_OFFSET(0x10AE2130)
#define CLASS_1_8A4209AC4705862A_SET_GLOBALCLEARATTACKCACHE_OFFSET UNITYSDK_OFFSET(0x10AE2150)
#define CLASS_1_8A4209AC4705862A_SET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET UNITYSDK_OFFSET(0x10AE20F0)
#define CLASS_1_8A4209AC4705862A_SET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET UNITYSDK_OFFSET(0x10AE2090)
#define CLASS_1_8A4209AC4705862A_SET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET UNITYSDK_OFFSET(0x10AE20B0)
#define CLASS_1_8A4209AC4705862A_SET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET UNITYSDK_OFFSET(0x10AE2170)
#define CLASS_1_8A4209AC4705862A_SET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET UNITYSDK_OFFSET(0x10AE2110)
#define CLASS_1_8A4209AC4705862A_SET_STRICTLIMBOENTITYDIECHECK_OFFSET UNITYSDK_OFFSET(0x10AE20D0)

inline static constexpr unsigned int Class_1_8A4209AC4705862A_TypeDefinitionIndex = 45437;

class Class_1_8A4209AC4705862A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A4209AC4705862A_TypeDefinitionIndex)->GetStaticField(0x37060);
	}
	static ::System::Boolean* StaticGet__GlobalClearAttackCache_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A4209AC4705862A_TypeDefinitionIndex)->GetStaticField(0x10FB0);
	}
	static ::System::Boolean* StaticGet__StrictLimboEntityDieCheck_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A4209AC4705862A_TypeDefinitionIndex)->GetStaticField(0x10FB1);
	}
	static ::System::Boolean* StaticGet__DisableDamageStanceBreakDelayAddMdf_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A4209AC4705862A_TypeDefinitionIndex)->GetStaticField(0x10FB2);
	}
	static ::System::Boolean* StaticGet__SkipDamageStanceEventOnBreak_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A4209AC4705862A_TypeDefinitionIndex)->GetStaticField(0x10FB3);
	}
	static ::System::Boolean* StaticGet__HandleMaterialEffectRenderMaskConflict_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A4209AC4705862A_TypeDefinitionIndex)->GetStaticField(0x10FB4);
	}
	static ::System::Boolean* StaticGet__NotResetHandlerForEntityInDieState_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A4209AC4705862A_TypeDefinitionIndex)->GetStaticField(0x10FB5);
	}
	static ::System::Boolean* StaticGet__SelectFriendSkillWhenNoEnemy_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A4209AC4705862A_TypeDefinitionIndex)->GetStaticField(0x10FB6);
	}
	static ::System::Boolean* StaticGet__InsertAbilityAfterUltraSkillEndDontTickAbility_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A4209AC4705862A_TypeDefinitionIndex)->GetStaticField(0x10FB7);
	}

	static ::System::Boolean get_InsertAbilityAfterUltraSkillEndDontTickAbility()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_GET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET))();
	}

	static ::System::Void set_InsertAbilityAfterUltraSkillEndDontTickAbility(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_SET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET))(value);
	}

	static ::System::Boolean get_NotResetHandlerForEntityInDieState()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_GET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET))();
	}

	static ::System::Void set_NotResetHandlerForEntityInDieState(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_SET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET))(value);
	}

	static ::System::Boolean get_StrictLimboEntityDieCheck()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_GET_STRICTLIMBOENTITYDIECHECK_OFFSET))();
	}

	static ::System::Void set_StrictLimboEntityDieCheck(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_SET_STRICTLIMBOENTITYDIECHECK_OFFSET))(value);
	}

	static ::System::Boolean get_HandleMaterialEffectRenderMaskConflict()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_GET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET))();
	}

	static ::System::Void set_HandleMaterialEffectRenderMaskConflict(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_SET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET))(value);
	}

	static ::System::Boolean get_SkipDamageStanceEventOnBreak()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_GET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET))();
	}

	static ::System::Void set_SkipDamageStanceEventOnBreak(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_SET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET))(value);
	}

	static ::System::Boolean get_DisableDamageStanceBreakDelayAddMdf()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_GET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET))();
	}

	static ::System::Void set_DisableDamageStanceBreakDelayAddMdf(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_SET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET))(value);
	}

	static ::System::Boolean get_GlobalClearAttackCache()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_GET_GLOBALCLEARATTACKCACHE_OFFSET))();
	}

	static ::System::Void set_GlobalClearAttackCache(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_SET_GLOBALCLEARATTACKCACHE_OFFSET))(value);
	}

	static ::System::Boolean get_SelectFriendSkillWhenNoEnemy()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_GET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET))();
	}

	static ::System::Void set_SelectFriendSkillWhenNoEnemy(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_SET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET))(value);
	}

	static ::System::Void Method_1_EA50D7BCEB18D89B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_METHOD_1_EA50D7BCEB18D89B_OFFSET))();
	}

	static ::System::Boolean Method_1_F68AA1B6F38F06ED(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_METHOD_1_F68AA1B6F38F06ED_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8F1DEE03EB95CFBC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A4209AC4705862A_METHOD_1_8F1DEE03EB95CFBC_OFFSET))(a1);
	}
};
