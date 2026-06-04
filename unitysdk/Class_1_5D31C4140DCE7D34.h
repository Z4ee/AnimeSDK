#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillDamageRange.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_5D31C4140DCE7D34_METHOD_1_13A4856CD0BBDB3F_OFFSET UNITYSDK_OFFSET(0x193A1890)
#define CLASS_1_5D31C4140DCE7D34__CTOR_OFFSET UNITYSDK_OFFSET(0x193A1AD0)

inline static constexpr unsigned int Class_1_5D31C4140DCE7D34_TypeDefinitionIndex = 12432;

class Class_1_5D31C4140DCE7D34 : public ::System::Object
{
public:
	::RPG::GameCore::SkillDamageRange Field_1_0; // 0x10
	::RPG::GameCore::AttackDamageType Field_1_1; // 0x14
	::RPG::GameCore::FixPoint Field_1_2; // 0x18
	::RPG::GameCore::FixPoint Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D31C4140DCE7D34__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_13A4856CD0BBDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5D31C4140DCE7D34*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5D31C4140DCE7D34*&))((::PBYTE)hIl2Cpp + CLASS_1_5D31C4140DCE7D34_METHOD_1_13A4856CD0BBDB3F_OFFSET))(a1, a2);
	}
};
