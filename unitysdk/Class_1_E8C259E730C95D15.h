#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/SkillDamageRange.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_E8C259E730C95D15_METHOD_1_13A4856CD0BBDB3F_OFFSET UNITYSDK_OFFSET(0x18D88C90)
#define CLASS_1_E8C259E730C95D15__CTOR_OFFSET UNITYSDK_OFFSET(0x18D88ED0)

inline static constexpr unsigned int Class_1_E8C259E730C95D15_TypeDefinitionIndex = 12345;

class Class_1_E8C259E730C95D15 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_2; // 0x10
	::RPG::GameCore::FixPoint Field_1_3; // 0x18
	::RPG::GameCore::SkillDamageRange Field_1_1; // 0x20
	::RPG::GameCore::HealFormulaType Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8C259E730C95D15__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_13A4856CD0BBDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_E8C259E730C95D15*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_E8C259E730C95D15*&))((::PBYTE)hIl2Cpp + CLASS_1_E8C259E730C95D15_METHOD_1_13A4856CD0BBDB3F_OFFSET))(a1, a2);
	}
};
