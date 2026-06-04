#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_071A4770D673A34D_METHOD_3_10AA927B78C26F29_OFFSET UNITYSDK_OFFSET(0x19268170)
#define CLASS_3_071A4770D673A34D_METHOD_3_68563EFA15298996_OFFSET UNITYSDK_OFFSET(0x192681F0)
#define CLASS_3_071A4770D673A34D__CTOR_OFFSET UNITYSDK_OFFSET(0x192681C0)

inline static constexpr unsigned int Class_3_071A4770D673A34D_TypeDefinitionIndex = 9885;

class Class_3_071A4770D673A34D : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_071A4770D673A34D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_10AA927B78C26F29(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_071A4770D673A34D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_071A4770D673A34D*&))((::PBYTE)hIl2Cpp + CLASS_3_071A4770D673A34D_METHOD_3_10AA927B78C26F29_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_68563EFA15298996(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_071A4770D673A34D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_071A4770D673A34D*))((::PBYTE)hIl2Cpp + CLASS_3_071A4770D673A34D_METHOD_3_68563EFA15298996_OFFSET))(a1, a2);
	}
};
