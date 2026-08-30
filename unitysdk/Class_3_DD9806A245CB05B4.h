#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterWeaknessSpecialType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_DD9806A245CB05B4_METHOD_3_910CE6381099E090_OFFSET UNITYSDK_OFFSET(0x1D6875F0)
#define CLASS_3_DD9806A245CB05B4_METHOD_3_AC95490D1B53DE21_OFFSET UNITYSDK_OFFSET(0x1D687630)
#define CLASS_3_DD9806A245CB05B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D687620)

inline static constexpr unsigned int Class_3_DD9806A245CB05B4_TypeDefinitionIndex = 23414;

class Class_3_DD9806A245CB05B4 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::Boolean GNDCCBNILML; // 0x20
	::RPG::GameCore::MonsterWeaknessSpecialType KFEMJMKMGIJ; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD9806A245CB05B4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_910CE6381099E090(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DD9806A245CB05B4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DD9806A245CB05B4*&))((::PBYTE)hIl2Cpp + CLASS_3_DD9806A245CB05B4_METHOD_3_910CE6381099E090_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AC95490D1B53DE21(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DD9806A245CB05B4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DD9806A245CB05B4*))((::PBYTE)hIl2Cpp + CLASS_3_DD9806A245CB05B4_METHOD_3_AC95490D1B53DE21_OFFSET))(a1, a2);
	}
};
