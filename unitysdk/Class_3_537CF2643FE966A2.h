#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvEnterBattleSelectTargetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureDyingParam; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_537CF2643FE966A2_METHOD_3_2D640F07944A24EB_OFFSET UNITYSDK_OFFSET(0x1CD1AC90)
#define CLASS_3_537CF2643FE966A2_METHOD_3_57A1D28F65E6799B_OFFSET UNITYSDK_OFFSET(0x1CD1AD30)
#define CLASS_3_537CF2643FE966A2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD1ACF0)

inline static constexpr unsigned int Class_3_537CF2643FE966A2_TypeDefinitionIndex = 20167;

class Class_3_537CF2643FE966A2 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* GKOIKCBJICD; // 0x18
	::System::String* GMOLMMHPPDC; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* KAJEPIBEDOG; // 0x28
	::RPG::GameCore::TargetEvaluator* EDOLEIBGOGD; // 0x30
	::RPG::GameCore::AdventureHitConfig* MBOFOKEJDDE; // 0x38
	::RPG::GameCore::AdventureDyingParam* GHNAMCDMMMO; // 0x40
	::System::Boolean ICCGDNPNIFO; // 0x48
	::RPG::GameCore::AdvEnterBattleSelectTargetType KFPJKJIDCGD; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_537CF2643FE966A2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D640F07944A24EB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_537CF2643FE966A2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_537CF2643FE966A2*&))((::PBYTE)hIl2Cpp + CLASS_3_537CF2643FE966A2_METHOD_3_2D640F07944A24EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_57A1D28F65E6799B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_537CF2643FE966A2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_537CF2643FE966A2*))((::PBYTE)hIl2Cpp + CLASS_3_537CF2643FE966A2_METHOD_3_57A1D28F65E6799B_OFFSET))(a1, a2);
	}
};
