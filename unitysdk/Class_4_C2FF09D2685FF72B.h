#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_4_C2FF09D2685FF72B_METHOD_4_9FB7184D9548FFA8_OFFSET UNITYSDK_OFFSET(0x170C6810)
#define CLASS_4_C2FF09D2685FF72B_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x170C6930)
#define CLASS_4_C2FF09D2685FF72B__CTOR_OFFSET UNITYSDK_OFFSET(0x170C68B0)

inline static constexpr unsigned int Class_4_C2FF09D2685FF72B_TypeDefinitionIndex = 21225;

class Class_4_C2FF09D2685FF72B : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2FF09D2685FF72B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9FB7184D9548FFA8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C2FF09D2685FF72B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C2FF09D2685FF72B*&))((::PBYTE)hIl2Cpp + CLASS_4_C2FF09D2685FF72B_METHOD_4_9FB7184D9548FFA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C2FF09D2685FF72B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C2FF09D2685FF72B*))((::PBYTE)hIl2Cpp + CLASS_4_C2FF09D2685FF72B_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}
};
