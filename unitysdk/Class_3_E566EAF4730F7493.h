#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_E566EAF4730F7493_METHOD_3_2D640F07944A24EB_OFFSET UNITYSDK_OFFSET(0x19250640)
#define CLASS_3_E566EAF4730F7493_METHOD_3_5CD8C9940BD71092_OFFSET UNITYSDK_OFFSET(0x19250770)
#define CLASS_3_E566EAF4730F7493__CTOR_OFFSET UNITYSDK_OFFSET(0x192506F0)

inline static constexpr unsigned int Class_3_E566EAF4730F7493_TypeDefinitionIndex = 22841;

class Class_3_E566EAF4730F7493 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::RtAttackData* Field_3_1; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_4; // 0x38
	::RPG::GameCore::TargetEvaluator* Field_3_5; // 0x40
	::RPG::GameCore::TargetEvaluator* Field_3_6; // 0x48
	::RPG::GameCore::DamageDisplayData* Field_3_7; // 0x50
	::System::String* Field_3_8; // 0x58
	::System::Boolean Field_3_9; // 0x60
	::System::Boolean Field_3_10; // 0x61
	::System::Boolean Field_3_11; // 0x62
	::System::Boolean Field_3_12; // 0x63
	::System::Boolean Field_3_13; // 0x64
	::System::Boolean Field_3_14; // 0x65
	::RPG::GameCore::AttackType Field_3_15; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E566EAF4730F7493__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D640F07944A24EB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E566EAF4730F7493*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E566EAF4730F7493*&))((::PBYTE)hIl2Cpp + CLASS_3_E566EAF4730F7493_METHOD_3_2D640F07944A24EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5CD8C9940BD71092(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E566EAF4730F7493* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E566EAF4730F7493*))((::PBYTE)hIl2Cpp + CLASS_3_E566EAF4730F7493_METHOD_3_5CD8C9940BD71092_OFFSET))(a1, a2);
	}
};
