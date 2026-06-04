#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_811308AE46A1298A_METHOD_3_481800E2ED22AD35_OFFSET UNITYSDK_OFFSET(0x19D70910)
#define CLASS_3_811308AE46A1298A_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x19D709B0)
#define CLASS_3_811308AE46A1298A__CTOR_OFFSET UNITYSDK_OFFSET(0x19D70980)

inline static constexpr unsigned int Class_3_811308AE46A1298A_TypeDefinitionIndex = 20077;

class Class_3_811308AE46A1298A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_811308AE46A1298A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_481800E2ED22AD35(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_811308AE46A1298A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_811308AE46A1298A*&))((::PBYTE)hIl2Cpp + CLASS_3_811308AE46A1298A_METHOD_3_481800E2ED22AD35_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_811308AE46A1298A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_811308AE46A1298A*))((::PBYTE)hIl2Cpp + CLASS_3_811308AE46A1298A_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
