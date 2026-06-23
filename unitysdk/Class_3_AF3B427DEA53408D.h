#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_A56D1E75A2012BD6;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_AF3B427DEA53408D_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16329B30)
#define CLASS_3_AF3B427DEA53408D_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x16329D10)
#define CLASS_3_AF3B427DEA53408D_METHOD_3_BBA5D6ABB56472E0_OFFSET UNITYSDK_OFFSET(0x1632A080)
#define CLASS_3_AF3B427DEA53408D_METHOD_3_F5B50F2A74C670C4_OFFSET UNITYSDK_OFFSET(0x16329DA0)
#define CLASS_3_AF3B427DEA53408D__CTOR_OFFSET UNITYSDK_OFFSET(0x16329CC0)

inline static constexpr unsigned int Class_3_AF3B427DEA53408D_TypeDefinitionIndex = 71059;

class Class_3_AF3B427DEA53408D : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF3B427DEA53408D__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_AF3B427DEA53408D_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_AF3B427DEA53408D_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_F5B50F2A74C670C4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_AF3B427DEA53408D_METHOD_3_F5B50F2A74C670C4_OFFSET))(this, a1);
	}

	::System::Void Method_3_BBA5D6ABB56472E0(::Class_3_A56D1E75A2012BD6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A56D1E75A2012BD6*))((::PBYTE)hIl2Cpp + CLASS_3_AF3B427DEA53408D_METHOD_3_BBA5D6ABB56472E0_OFFSET))(this, a1);
	}
};
