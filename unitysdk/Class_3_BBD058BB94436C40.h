#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_BBD058BB94436C40_METHOD_3_4A15B026C50970A5_OFFSET UNITYSDK_OFFSET(0x1AF1B6F0)
#define CLASS_3_BBD058BB94436C40_METHOD_3_68563EFA15298996_OFFSET UNITYSDK_OFFSET(0x1AF1B730)
#define CLASS_3_BBD058BB94436C40__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF1B720)

inline static constexpr unsigned int Class_3_BBD058BB94436C40_TypeDefinitionIndex = 9900;

class Class_3_BBD058BB94436C40 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBD058BB94436C40__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_4A15B026C50970A5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BBD058BB94436C40*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BBD058BB94436C40*&))((::PBYTE)hIl2Cpp + CLASS_3_BBD058BB94436C40_METHOD_3_4A15B026C50970A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_68563EFA15298996(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BBD058BB94436C40* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BBD058BB94436C40*))((::PBYTE)hIl2Cpp + CLASS_3_BBD058BB94436C40_METHOD_3_68563EFA15298996_OFFSET))(a1, a2);
	}
};
