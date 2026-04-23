#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_46A06FEF684F52DE_1_METHOD_3_505979F89E070861_OFFSET UNITYSDK_OFFSET(0x18BBC2E0)
#define CLASS_3_46A06FEF684F52DE_1_METHOD_3_68563EFA15298996_OFFSET UNITYSDK_OFFSET(0x18BBC430)
#define CLASS_3_46A06FEF684F52DE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18BBC400)

inline static constexpr unsigned int Class_3_46A06FEF684F52DE_1_TypeDefinitionIndex = 23323;

class Class_3_46A06FEF684F52DE_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46A06FEF684F52DE_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_505979F89E070861(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_46A06FEF684F52DE_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_46A06FEF684F52DE_1*&))((::PBYTE)hIl2Cpp + CLASS_3_46A06FEF684F52DE_1_METHOD_3_505979F89E070861_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_68563EFA15298996(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_46A06FEF684F52DE_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_46A06FEF684F52DE_1*))((::PBYTE)hIl2Cpp + CLASS_3_46A06FEF684F52DE_1_METHOD_3_68563EFA15298996_OFFSET))(a1, a2);
	}
};
