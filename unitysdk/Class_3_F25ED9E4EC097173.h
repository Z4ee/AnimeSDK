#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_F25ED9E4EC097173_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x1CE71360)
#define CLASS_3_F25ED9E4EC097173_METHOD_3_BFB6BF984819FF8F_OFFSET UNITYSDK_OFFSET(0x1CE71270)
#define CLASS_3_F25ED9E4EC097173__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE71300)

inline static constexpr unsigned int Class_3_F25ED9E4EC097173_TypeDefinitionIndex = 22119;

class Class_3_F25ED9E4EC097173 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::UInt32>* OFOLKIGEAOE; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::Il2CppArray<::RPG::GameCore::AdventureModifierBehaviorFlag>* AAAMAALDKGM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F25ED9E4EC097173__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_BFB6BF984819FF8F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F25ED9E4EC097173*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F25ED9E4EC097173*&))((::PBYTE)hIl2Cpp + CLASS_3_F25ED9E4EC097173_METHOD_3_BFB6BF984819FF8F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F25ED9E4EC097173* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F25ED9E4EC097173*))((::PBYTE)hIl2Cpp + CLASS_3_F25ED9E4EC097173_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
