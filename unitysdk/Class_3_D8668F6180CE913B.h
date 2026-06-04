#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterWeaknessSpecialType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_D8668F6180CE913B_METHOD_3_953B57F1CC8DAE52_OFFSET UNITYSDK_OFFSET(0x195C7D60)
#define CLASS_3_D8668F6180CE913B_METHOD_3_AC95490D1B53DE21_OFFSET UNITYSDK_OFFSET(0x195C7DE0)
#define CLASS_3_D8668F6180CE913B__CTOR_OFFSET UNITYSDK_OFFSET(0x195C7DB0)

inline static constexpr unsigned int Class_3_D8668F6180CE913B_TypeDefinitionIndex = 22394;

class Class_3_D8668F6180CE913B : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::MonsterWeaknessSpecialType Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8668F6180CE913B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_953B57F1CC8DAE52(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D8668F6180CE913B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D8668F6180CE913B*&))((::PBYTE)hIl2Cpp + CLASS_3_D8668F6180CE913B_METHOD_3_953B57F1CC8DAE52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AC95490D1B53DE21(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D8668F6180CE913B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D8668F6180CE913B*))((::PBYTE)hIl2Cpp + CLASS_3_D8668F6180CE913B_METHOD_3_AC95490D1B53DE21_OFFSET))(a1, a2);
	}
};
