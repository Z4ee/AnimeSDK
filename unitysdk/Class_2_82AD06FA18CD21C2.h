#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MoveOffsetCoordType.h"
#include "unitysdk/RPG/GameCore/RtBattleAnimMoveOption.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_2_82AD06FA18CD21C2_METHOD_2_D2ABE97028F8BA80_OFFSET UNITYSDK_OFFSET(0x1C881830)
#define CLASS_2_82AD06FA18CD21C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C881E90)

inline static constexpr unsigned int Class_2_82AD06FA18CD21C2_TypeDefinitionIndex = 23810;

class Class_2_82AD06FA18CD21C2 : public ::RPG::GameCore::JsonConfig
{
public:
	::System::String* GBIOGILHAHO; // 0x10
	::RPG::GameCore::DynamicFloat* DLOECBHBAGB; // 0x18
	::RPG::GameCore::DynamicFloat* KJIOHLANNHA; // 0x20
	::RPG::GameCore::DynamicFloat* HODCCEFFCEJ; // 0x28
	::RPG::GameCore::DynamicFloat* EKOHAKKJLFL; // 0x30
	::RPG::GameCore::DynamicFloat* NALEDFKPFLD; // 0x38
	::RPG::GameCore::DynamicFloat* FMHMAHCNDGB; // 0x40
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x48
	::RPG::GameCore::DynamicFloat* GJOLEJOOEIG; // 0x50
	::RPG::GameCore::DynamicFloat* NNNAGHMNFKB; // 0x58
	::RPG::GameCore::DynamicFloat* GHFFPEIHHKG; // 0x60
	::RPG::GameCore::MoveOffsetCoordType OLFKAMLFJLH; // 0x68
	::RPG::GameCore::RtBattleAnimMoveOption ALEGIFEHGLH; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82AD06FA18CD21C2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_D2ABE97028F8BA80(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_82AD06FA18CD21C2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_82AD06FA18CD21C2*&))((::PBYTE)hIl2Cpp + CLASS_2_82AD06FA18CD21C2_METHOD_2_D2ABE97028F8BA80_OFFSET))(a1, a2);
	}
};
