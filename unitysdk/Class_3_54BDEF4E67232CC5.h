#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_54BDEF4E67232CC5_METHOD_3_14756EFE7C5E4FA5_OFFSET UNITYSDK_OFFSET(0x1C8310C0)
#define CLASS_3_54BDEF4E67232CC5_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x1C831060)
#define CLASS_3_54BDEF4E67232CC5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8310B0)

inline static constexpr unsigned int Class_3_54BDEF4E67232CC5_TypeDefinitionIndex = 23415;

class Class_3_54BDEF4E67232CC5 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::StageInvasionMonsterState MEPFOEEGBEA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54BDEF4E67232CC5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_54BDEF4E67232CC5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_54BDEF4E67232CC5*&))((::PBYTE)hIl2Cpp + CLASS_3_54BDEF4E67232CC5_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14756EFE7C5E4FA5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_54BDEF4E67232CC5* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_54BDEF4E67232CC5*))((::PBYTE)hIl2Cpp + CLASS_3_54BDEF4E67232CC5_METHOD_3_14756EFE7C5E4FA5_OFFSET))(a1, a2);
	}
};
