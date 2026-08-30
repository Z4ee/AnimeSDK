#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleActionType.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_1;
class Class_1_683531EF1026FCA6;
class Class_2_C01BA129C3E40259;
namespace RPG::GameCore { class ChimeraAbility; }
namespace RPG::GameCore { class ChimeraAbilityModifier; }
namespace RPG::GameCore { class ChimeraBattleExtraConditionEvaluator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_07F3159234271541_METHOD_1_2AAEDB40A8EB07AB_OFFSET UNITYSDK_OFFSET(0x159391C0)
#define CLASS_1_07F3159234271541_METHOD_1_40581BF2F6AB7F9C_OFFSET UNITYSDK_OFFSET(0x15939230)
#define CLASS_1_07F3159234271541_METHOD_1_7F7C7ACAFD70D2CB_OFFSET UNITYSDK_OFFSET(0x15938E30)
#define CLASS_1_07F3159234271541_METHOD_1_B47CA45178F1E077_OFFSET UNITYSDK_OFFSET(0x159392A0)
#define CLASS_1_07F3159234271541_METHOD_1_CE986F991628D9C2_OFFSET UNITYSDK_OFFSET(0x159396B0)
#define CLASS_1_07F3159234271541_METHOD_1_EDB3D17E6E7B93A4_OFFSET UNITYSDK_OFFSET(0x15938630)
#define CLASS_1_07F3159234271541_METHOD_1_F6F9209066958B8F_OFFSET UNITYSDK_OFFSET(0x159398E0)
#define CLASS_1_07F3159234271541__CTOR_OFFSET UNITYSDK_OFFSET(0x15938620)

inline static constexpr unsigned int Class_1_07F3159234271541_TypeDefinitionIndex = 76145;

class Class_1_07F3159234271541 : public ::System::Object
{
public:
	::Class_1_3B1EA953A4067E26_1* FKINCGODJEP; // 0x10

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_1*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDB3D17E6E7B93A4(::RPG::GameCore::ChimeraBattleActionType a1, ::Class_2_C01BA129C3E40259* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleActionType, ::Class_2_C01BA129C3E40259*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541_METHOD_1_EDB3D17E6E7B93A4_OFFSET))(this, a1, a2);
	}

	::Class_1_683531EF1026FCA6* Method_1_40581BF2F6AB7F9C(::Class_2_C01BA129C3E40259* a1, ::RPG::GameCore::ChimeraAbility* a2, ::Class_1_683531EF1026FCA6* a3)
	{
		return ((::Class_1_683531EF1026FCA6*(*)(::PVOID, ::Class_2_C01BA129C3E40259*, ::RPG::GameCore::ChimeraAbility*, ::Class_1_683531EF1026FCA6*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541_METHOD_1_40581BF2F6AB7F9C_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_683531EF1026FCA6* Method_1_2AAEDB40A8EB07AB(::Class_2_C01BA129C3E40259* a1, ::RPG::GameCore::ChimeraAbility* a2, ::Class_2_C01BA129C3E40259* a3)
	{
		return ((::Class_1_683531EF1026FCA6*(*)(::PVOID, ::Class_2_C01BA129C3E40259*, ::RPG::GameCore::ChimeraAbility*, ::Class_2_C01BA129C3E40259*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541_METHOD_1_2AAEDB40A8EB07AB_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_7F7C7ACAFD70D2CB(::Class_2_C01BA129C3E40259* a1, ::RPG::GameCore::ChimeraAbility* a2, ::Class_2_C01BA129C3E40259* a3, ::RPG::GameCore::ChimeraBattleActionType a4, ::Il2CppArray<::System::Object*>* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_C01BA129C3E40259*, ::RPG::GameCore::ChimeraAbility*, ::Class_2_C01BA129C3E40259*, ::RPG::GameCore::ChimeraBattleActionType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541_METHOD_1_7F7C7ACAFD70D2CB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_B47CA45178F1E077(::RPG::GameCore::ChimeraBattleExtraConditionEvaluator* a1, ::Class_2_C01BA129C3E40259* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraBattleExtraConditionEvaluator*, ::Class_2_C01BA129C3E40259*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541_METHOD_1_B47CA45178F1E077_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_CE986F991628D9C2(::Class_1_683531EF1026FCA6* a1, ::RPG::GameCore::ChimeraAbilityModifier* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_1_683531EF1026FCA6*, ::RPG::GameCore::ChimeraAbilityModifier*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541_METHOD_1_CE986F991628D9C2_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>* Method_1_F6F9209066958B8F(::Class_1_683531EF1026FCA6* a1, ::RPG::GameCore::ChimeraAbilityModifier* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>*(*)(::PVOID, ::Class_1_683531EF1026FCA6*, ::RPG::GameCore::ChimeraAbilityModifier*))((::PBYTE)hIl2Cpp + CLASS_1_07F3159234271541_METHOD_1_F6F9209066958B8F_OFFSET))(this, a1, a2);
	}
};
