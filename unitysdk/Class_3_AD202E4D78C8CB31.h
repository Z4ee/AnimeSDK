#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_AD202E4D78C8CB31_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1CE5FDE0)
#define CLASS_3_AD202E4D78C8CB31_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1CE5FC60)
#define CLASS_3_AD202E4D78C8CB31__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5FD30)

inline static constexpr unsigned int Class_3_AD202E4D78C8CB31_TypeDefinitionIndex = 24171;

class Class_3_AD202E4D78C8CB31 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x18
	::RPG::GameCore::TargetEvaluator* EJFFMIDKADF; // 0x20
	::RPG::GameCore::DynamicFloat* MDFKCMGPPDM; // 0x28
	::RPG::GameCore::DamageDisplayData* AIMHHKODFJN; // 0x30
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x38
	::RPG::GameCore::HealFormulaType LGLBKAAMKDI; // 0x40
	::System::Boolean IOJIDFGLBFD; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD202E4D78C8CB31__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AD202E4D78C8CB31*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AD202E4D78C8CB31*&))((::PBYTE)hIl2Cpp + CLASS_3_AD202E4D78C8CB31_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AD202E4D78C8CB31* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AD202E4D78C8CB31*))((::PBYTE)hIl2Cpp + CLASS_3_AD202E4D78C8CB31_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
