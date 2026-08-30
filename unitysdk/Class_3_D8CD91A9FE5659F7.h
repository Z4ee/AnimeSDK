#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TargetRatioType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_D8CD91A9FE5659F7_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1D6C82D0)
#define CLASS_3_D8CD91A9FE5659F7_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1D6C81C0)
#define CLASS_3_D8CD91A9FE5659F7__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C8260)

inline static constexpr unsigned int Class_3_D8CD91A9FE5659F7_TypeDefinitionIndex = 23889;

class Class_3_D8CD91A9FE5659F7 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* PIBDDOGGDKL; // 0x18
	::System::String* FDFONLOKOHJ; // 0x20
	::RPG::GameCore::DynamicFloat* MIAFMBHCMOG; // 0x28
	::RPG::GameCore::TargetEvaluator* NFMKOFNEKLA; // 0x30
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x38
	::RPG::GameCore::DamageDisplayData* AIMHHKODFJN; // 0x40
	::RPG::GameCore::DynamicFloat* ABINBKACLJK; // 0x48
	::System::Boolean AELFMDGFAIK; // 0x50
	::System::Boolean AGFGDBPMPPB; // 0x51
	::RPG::GameCore::TargetRatioType LMCJKOCHIAI; // 0x54
	::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x58
	::RPG::GameCore::AttackType HIFKEKCELFB; // 0x5C
	::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8CD91A9FE5659F7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D8CD91A9FE5659F7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D8CD91A9FE5659F7*&))((::PBYTE)hIl2Cpp + CLASS_3_D8CD91A9FE5659F7_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D8CD91A9FE5659F7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D8CD91A9FE5659F7*))((::PBYTE)hIl2Cpp + CLASS_3_D8CD91A9FE5659F7_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
