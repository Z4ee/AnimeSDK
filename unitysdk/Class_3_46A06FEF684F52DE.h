#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_46A06FEF684F52DE_METHOD_3_505979F89E070861_OFFSET UNITYSDK_OFFSET(0x18371A10)
#define CLASS_3_46A06FEF684F52DE_METHOD_3_68563EFA15298996_OFFSET UNITYSDK_OFFSET(0x18371B60)
#define CLASS_3_46A06FEF684F52DE__CTOR_OFFSET UNITYSDK_OFFSET(0x18371B30)

inline static constexpr unsigned int Class_3_46A06FEF684F52DE_TypeDefinitionIndex = 19250;

class Class_3_46A06FEF684F52DE : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46A06FEF684F52DE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_505979F89E070861(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_46A06FEF684F52DE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_46A06FEF684F52DE*&))((::PBYTE)hIl2Cpp + CLASS_3_46A06FEF684F52DE_METHOD_3_505979F89E070861_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_68563EFA15298996(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_46A06FEF684F52DE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_46A06FEF684F52DE*))((::PBYTE)hIl2Cpp + CLASS_3_46A06FEF684F52DE_METHOD_3_68563EFA15298996_OFFSET))(a1, a2);
	}
};
