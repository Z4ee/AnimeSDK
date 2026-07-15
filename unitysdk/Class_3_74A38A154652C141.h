#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_74A38A154652C141_METHOD_3_59C91D10D1D461D5_OFFSET UNITYSDK_OFFSET(0x1AF29250)
#define CLASS_3_74A38A154652C141_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x1AF292F0)
#define CLASS_3_74A38A154652C141__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF292B0)

inline static constexpr unsigned int Class_3_74A38A154652C141_TypeDefinitionIndex = 22371;

class Class_3_74A38A154652C141 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74A38A154652C141__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_59C91D10D1D461D5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_74A38A154652C141*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_74A38A154652C141*&))((::PBYTE)hIl2Cpp + CLASS_3_74A38A154652C141_METHOD_3_59C91D10D1D461D5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_74A38A154652C141* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_74A38A154652C141*))((::PBYTE)hIl2Cpp + CLASS_3_74A38A154652C141_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
