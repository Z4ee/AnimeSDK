#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_727;
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_1_5A7750AB287A53FA_METHOD_1_609898807C8CA619_OFFSET UNITYSDK_OFFSET(0x1710A920)
#define CLASS_1_5A7750AB287A53FA_METHOD_1_FF949382E57B0BFF_OFFSET UNITYSDK_OFFSET(0x1710AB50)

inline static constexpr unsigned int Class_1_5A7750AB287A53FA_TypeDefinitionIndex = 74713;

class Class_1_5A7750AB287A53FA : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_727* Method_1_609898807C8CA619(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::Class_0_16E4307DCC419505_727*(*)(::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_1_5A7750AB287A53FA_METHOD_1_609898807C8CA619_OFFSET))(a1);
	}

	static ::System::Void Method_1_FF949382E57B0BFF(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_1_5A7750AB287A53FA_METHOD_1_FF949382E57B0BFF_OFFSET))(a1);
	}
};
