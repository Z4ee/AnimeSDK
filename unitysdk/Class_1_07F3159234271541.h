#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleActionType.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_1;
class Class_1_7370FAEB2C64106B;
class Class_2_7AF1D57CA4301272;
namespace RPG::GameCore { class ChimeraAbility; }
namespace RPG::GameCore { class ChimeraAbilityModifier; }
namespace RPG::GameCore { class ChimeraBattleExtraConditionEvaluator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_07F3159234271541_METHOD_1_2AAEDB40A8EB07AB_OFFSET UNITYSDK_OFFSET(0x104B8680)
#define CLASS_1_07F3159234271541_METHOD_1_63350BD540BA59C3_OFFSET UNITYSDK_OFFSET(0x104B8DA0)
#define CLASS_1_07F3159234271541_METHOD_1_7F7C7ACAFD70D2CB_OFFSET UNITYSDK_OFFSET(0x104B8300)
#define CLASS_1_07F3159234271541_METHOD_1_B452D9EF147A389B_OFFSET UNITYSDK_OFFSET(0x104B8BA0)
#define CLASS_1_07F3159234271541_METHOD_1_B47CA45178F1E077_OFFSET UNITYSDK_OFFSET(0x104B8760)
#define CLASS_1_07F3159234271541_METHOD_1_BB697BCE8627B14D_OFFSET UNITYSDK_OFFSET(0x104B86F0)
#define CLASS_1_07F3159234271541_METHOD_1_EDB3D17E6E7B93A4_OFFSET UNITYSDK_OFFSET(0x104B7B70)
#define CLASS_1_07F3159234271541__CTOR_OFFSET UNITYSDK_OFFSET(0x104B7B60)

inline static constexpr unsigned int Class_1_07F3159234271541_TypeDefinitionIndex = 62380;

class Class_1_07F3159234271541 : public ::System::Object
{
public:
	::Class_1_3B1EA953A4067E26_1* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_1*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDB3D17E6E7B93A4(::RPG::GameCore::ChimeraBattleActionType a1, ::Class_2_7AF1D57CA4301272* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleActionType, ::Class_2_7AF1D57CA4301272*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541_METHOD_1_EDB3D17E6E7B93A4_OFFSET))(this, a1, a2);
	}

	::Class_1_7370FAEB2C64106B* Method_1_BB697BCE8627B14D(::Class_2_7AF1D57CA4301272* a1, ::RPG::GameCore::ChimeraAbility* a2, ::Class_1_7370FAEB2C64106B* a3)
	{
		return ((::Class_1_7370FAEB2C64106B*(*)(::PVOID, ::Class_2_7AF1D57CA4301272*, ::RPG::GameCore::ChimeraAbility*, ::Class_1_7370FAEB2C64106B*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541_METHOD_1_BB697BCE8627B14D_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_7370FAEB2C64106B* Method_1_2AAEDB40A8EB07AB(::Class_2_7AF1D57CA4301272* a1, ::RPG::GameCore::ChimeraAbility* a2, ::Class_2_7AF1D57CA4301272* a3)
	{
		return ((::Class_1_7370FAEB2C64106B*(*)(::PVOID, ::Class_2_7AF1D57CA4301272*, ::RPG::GameCore::ChimeraAbility*, ::Class_2_7AF1D57CA4301272*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541_METHOD_1_2AAEDB40A8EB07AB_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_7F7C7ACAFD70D2CB(::Class_2_7AF1D57CA4301272* a1, ::RPG::GameCore::ChimeraAbility* a2, ::Class_2_7AF1D57CA4301272* a3, ::RPG::GameCore::ChimeraBattleActionType a4, ::Il2CppArray<::System::Object*>* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_7AF1D57CA4301272*, ::RPG::GameCore::ChimeraAbility*, ::Class_2_7AF1D57CA4301272*, ::RPG::GameCore::ChimeraBattleActionType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541_METHOD_1_7F7C7ACAFD70D2CB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_B47CA45178F1E077(::RPG::GameCore::ChimeraBattleExtraConditionEvaluator* a1, ::Class_2_7AF1D57CA4301272* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraBattleExtraConditionEvaluator*, ::Class_2_7AF1D57CA4301272*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541_METHOD_1_B47CA45178F1E077_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_B452D9EF147A389B(::Class_1_7370FAEB2C64106B* a1, ::RPG::GameCore::ChimeraAbilityModifier* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_1_7370FAEB2C64106B*, ::RPG::GameCore::ChimeraAbilityModifier*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541_METHOD_1_B452D9EF147A389B_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_7AF1D57CA4301272*>* Method_1_63350BD540BA59C3(::Class_1_7370FAEB2C64106B* a1, ::RPG::GameCore::ChimeraAbilityModifier* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_7AF1D57CA4301272*>*(*)(::PVOID, ::Class_1_7370FAEB2C64106B*, ::RPG::GameCore::ChimeraAbilityModifier*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541_METHOD_1_63350BD540BA59C3_OFFSET))(this, a1, a2);
	}
};
