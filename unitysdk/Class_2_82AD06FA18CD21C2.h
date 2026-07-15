#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MoveOffsetCoordType.h"
#include "unitysdk/RPG/GameCore/RtBattleAnimMoveOption.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_2_82AD06FA18CD21C2_METHOD_2_D2ABE97028F8BA80_OFFSET UNITYSDK_OFFSET(0x1B3E81F0)
#define CLASS_2_82AD06FA18CD21C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E8850)

inline static constexpr unsigned int Class_2_82AD06FA18CD21C2_TypeDefinitionIndex = 23230;

class Class_2_82AD06FA18CD21C2 : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::RPG::GameCore::DynamicFloat* Field_2_2; // 0x20
	::RPG::GameCore::DynamicFloat* Field_2_3; // 0x28
	::RPG::GameCore::DynamicFloat* Field_2_4; // 0x30
	::RPG::GameCore::DynamicFloat* Field_2_5; // 0x38
	::RPG::GameCore::DynamicFloat* Field_2_6; // 0x40
	::RPG::GameCore::DynamicFloat* Field_2_7; // 0x48
	::RPG::GameCore::DynamicFloat* Field_2_8; // 0x50
	::RPG::GameCore::TargetEvaluator* Field_2_9; // 0x58
	::RPG::GameCore::DynamicFloat* Field_2_10; // 0x60
	::RPG::GameCore::RtBattleAnimMoveOption Field_2_11; // 0x68
	::RPG::GameCore::MoveOffsetCoordType Field_2_12; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82AD06FA18CD21C2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_D2ABE97028F8BA80(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_82AD06FA18CD21C2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_82AD06FA18CD21C2*&))((::PBYTE)hIl2Cpp + CLASS_2_82AD06FA18CD21C2_METHOD_2_D2ABE97028F8BA80_OFFSET))(a1, a2);
	}
};
