#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_4_D1B33D2A4D0C41DF_METHOD_4_C59B8433498732A8_OFFSET UNITYSDK_OFFSET(0x1D0D26E0)
#define CLASS_4_D1B33D2A4D0C41DF_METHOD_4_DD4DD8B0BA0C5E43_OFFSET UNITYSDK_OFFSET(0x1D0D26A0)
#define CLASS_4_D1B33D2A4D0C41DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D26D0)

inline static constexpr unsigned int Class_4_D1B33D2A4D0C41DF_TypeDefinitionIndex = 19896;

class Class_4_D1B33D2A4D0C41DF : public ::RPG::GameCore::STTaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::DynamicString* GFNAPNFFGPJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D1B33D2A4D0C41DF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_DD4DD8B0BA0C5E43(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_D1B33D2A4D0C41DF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_D1B33D2A4D0C41DF*&))((::PBYTE)hIl2Cpp + CLASS_4_D1B33D2A4D0C41DF_METHOD_4_DD4DD8B0BA0C5E43_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C59B8433498732A8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_D1B33D2A4D0C41DF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_D1B33D2A4D0C41DF*))((::PBYTE)hIl2Cpp + CLASS_4_D1B33D2A4D0C41DF_METHOD_4_C59B8433498732A8_OFFSET))(a1, a2);
	}
};
