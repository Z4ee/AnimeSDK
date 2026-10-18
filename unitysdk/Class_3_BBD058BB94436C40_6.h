#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_BBD058BB94436C40_6_METHOD_3_4A15B026C50970A5_OFFSET UNITYSDK_OFFSET(0x1D1D7370)
#define CLASS_3_BBD058BB94436C40_6_METHOD_3_68563EFA15298996_OFFSET UNITYSDK_OFFSET(0x1D1D73B0)
#define CLASS_3_BBD058BB94436C40_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D73A0)

inline static constexpr unsigned int Class_3_BBD058BB94436C40_6_TypeDefinitionIndex = 23373;

class Class_3_BBD058BB94436C40_6 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBD058BB94436C40_6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_4A15B026C50970A5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BBD058BB94436C40_6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BBD058BB94436C40_6*&))((::PBYTE)hIl2Cpp + CLASS_3_BBD058BB94436C40_6_METHOD_3_4A15B026C50970A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_68563EFA15298996(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BBD058BB94436C40_6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BBD058BB94436C40_6*))((::PBYTE)hIl2Cpp + CLASS_3_BBD058BB94436C40_6_METHOD_3_68563EFA15298996_OFFSET))(a1, a2);
	}
};
