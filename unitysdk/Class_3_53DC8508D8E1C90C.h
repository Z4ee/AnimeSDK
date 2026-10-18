#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_96AB00172E651941;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_53DC8508D8E1C90C_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1D019B50)
#define CLASS_3_53DC8508D8E1C90C_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1D019B90)
#define CLASS_3_53DC8508D8E1C90C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D019B80)

inline static constexpr unsigned int Class_3_53DC8508D8E1C90C_TypeDefinitionIndex = 22781;

class Class_3_53DC8508D8E1C90C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* NFMKOFNEKLA; // 0x18
	::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x20
	::Class_2_96AB00172E651941* OLOKHEMMGOH; // 0x28
	::Enum_3_DB663931210BBC27 FKCKKFALPBK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53DC8508D8E1C90C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_53DC8508D8E1C90C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_53DC8508D8E1C90C*&))((::PBYTE)hIl2Cpp + CLASS_3_53DC8508D8E1C90C_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_53DC8508D8E1C90C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_53DC8508D8E1C90C*))((::PBYTE)hIl2Cpp + CLASS_3_53DC8508D8E1C90C_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
