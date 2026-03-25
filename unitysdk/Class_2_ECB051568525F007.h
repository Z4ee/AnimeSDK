#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7E61104234A02BD7.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_2CAAA2FDF9170110;
namespace RPG::GameCore { class BattleVersusClickQTEConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_ECB051568525F007_METHOD_2_55B50F0EBC3528C6_OFFSET UNITYSDK_OFFSET(0x8761A70)
#define CLASS_2_ECB051568525F007__CTOR_OFFSET UNITYSDK_OFFSET(0x8761950)

inline static constexpr unsigned int Class_2_ECB051568525F007_TypeDefinitionIndex = 45035;

class Class_2_ECB051568525F007 : public ::Class_1_7E61104234A02BD7
{
public:
	::RPG::GameCore::FloatCurve* Field_2_4; // 0x48
	::Class_1_2CAAA2FDF9170110* Field_2_8; // 0x50
	::RPG::GameCore::FloatCurve* Field_2_6; // 0x58
	::RPG::GameCore::FloatCurve* Field_2_5; // 0x60
	::System::Single Field_2_1; // 0x68
	::System::Single Field_2_3; // 0x6C
	::RPG::GameCore::StringHash Field_2_7; // 0x70
	::System::Single Field_2_2; // 0x74
	::System::Single Field_2_0; // 0x78

	::System::Void _ctor(::RPG::GameCore::BattleVersusClickQTEConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleVersusClickQTEConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_ECB051568525F007__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_55B50F0EBC3528C6(::RPG::GameCore::BattleVersusClickQTEConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleVersusClickQTEConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_ECB051568525F007_METHOD_2_55B50F0EBC3528C6_OFFSET))(this, a1, a2);
	}
};
