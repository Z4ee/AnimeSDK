#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatSkillPreviewInvokeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_2_3616FDE8A71D0590;
class Class_4_79E380B8FEE3115F;
namespace RPG::GameCore { class ActivityDiceCombatSpecialRuleRow; }
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }

#define CLASS_1_3D76ECEBA566AACC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17B33810)
#define CLASS_1_3D76ECEBA566AACC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17B337D0)
#define CLASS_1_3D76ECEBA566AACC_METHOD_1_09550681A8C506F9_OFFSET UNITYSDK_OFFSET(0x17B33CA0)
#define CLASS_1_3D76ECEBA566AACC_METHOD_1_811C1452F20C2DAF_OFFSET UNITYSDK_OFFSET(0x17B33850)
#define CLASS_1_3D76ECEBA566AACC_METHOD_1_AF38C6931F69A897_OFFSET UNITYSDK_OFFSET(0x17B33A10)
#define CLASS_1_3D76ECEBA566AACC__CTOR_OFFSET UNITYSDK_OFFSET(0x17B337C0)

inline static constexpr unsigned int Class_1_3D76ECEBA566AACC_TypeDefinitionIndex = 34984;

class Class_1_3D76ECEBA566AACC : public ::System::Object
{
public:
	::Class_2_3616FDE8A71D0590* Field_1_0; // 0x10
	::Class_4_79E380B8FEE3115F* Field_1_1; // 0x18

	::System::Void _ctor(::Class_4_79E380B8FEE3115F* a1, ::Class_2_3616FDE8A71D0590* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_79E380B8FEE3115F*, ::Class_2_3616FDE8A71D0590*))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_EXECUTE_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatNotAvatarPreviewConfig* Method_1_811C1452F20C2DAF(::RPG::GameCore::DiceCombatSkillPreviewInvokeType a1)
	{
		return ((::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*(*)(::PVOID, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_METHOD_1_811C1452F20C2DAF_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_09550681A8C506F9()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_METHOD_1_09550681A8C506F9_OFFSET))(this);
	}

	::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* Method_1_AF38C6931F69A897()
	{
		return ((::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_METHOD_1_AF38C6931F69A897_OFFSET))(this);
	}
};
