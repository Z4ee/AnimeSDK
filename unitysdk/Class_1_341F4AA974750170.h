#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_08645361E812A3C8;
class Class_1_55E3A518C75D5EA4;
class Class_1_8B83CE81FFD7409A;
namespace RPG::Client { class BattleAlertParam; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_341F4AA974750170_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BED040)
#define CLASS_1_341F4AA974750170_METHOD_1_4370A3B3E813C5AB_OFFSET UNITYSDK_OFFSET(0x13BED6F0)
#define CLASS_1_341F4AA974750170_METHOD_1_64EB37ED69DA3A5C_OFFSET UNITYSDK_OFFSET(0x13BEDA60)
#define CLASS_1_341F4AA974750170_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x13BED3A0)
#define CLASS_1_341F4AA974750170_METHOD_1_77EC680F959BBC22_OFFSET UNITYSDK_OFFSET(0x13BED750)
#define CLASS_1_341F4AA974750170_METHOD_1_8C3DB70FFBBF01C7_1_OFFSET UNITYSDK_OFFSET(0x13BED9B0)
#define CLASS_1_341F4AA974750170_METHOD_1_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x13BED5F0)
#define CLASS_1_341F4AA974750170_METHOD_1_B036E5806AE655F4_OFFSET UNITYSDK_OFFSET(0x13BED2C0)
#define CLASS_1_341F4AA974750170_METHOD_1_CA061D40F1E2F176_OFFSET UNITYSDK_OFFSET(0x13BED520)
#define CLASS_1_341F4AA974750170_METHOD_1_E3019858078E395C_OFFSET UNITYSDK_OFFSET(0x13BED480)
#define CLASS_1_341F4AA974750170__CTOR_OFFSET UNITYSDK_OFFSET(0x13BEDBA0)

inline static constexpr unsigned int Class_1_341F4AA974750170_TypeDefinitionIndex = 66761;

class Class_1_341F4AA974750170 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_08645361E812A3C8*>* Field_1_0; // 0x10
	::Class_1_55E3A518C75D5EA4* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_55E3A518C75D5EA4*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::Class_1_08645361E812A3C8* Method_1_E3019858078E395C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_08645361E812A3C8*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170_METHOD_1_E3019858078E395C_OFFSET))(this, a1);
	}

	::Class_1_8B83CE81FFD7409A* Method_1_CA061D40F1E2F176(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillType a2)
	{
		return ((::Class_1_8B83CE81FFD7409A*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170_METHOD_1_CA061D40F1E2F176_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B036E5806AE655F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170_METHOD_1_B036E5806AE655F4_OFFSET))(this);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170_METHOD_1_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170_METHOD_1_8C3DB70FFBBF01C7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4370A3B3E813C5AB(::RPG::Client::BattleAlertParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAlertParam*))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170_METHOD_1_4370A3B3E813C5AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_64EB37ED69DA3A5C(::RPG::GameCore::GameEntity* a1, ::Class_1_08645361E812A3C8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_08645361E812A3C8*))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170_METHOD_1_64EB37ED69DA3A5C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_77EC680F959BBC22(::RPG::GameCore::GameEntity* a1, ::RPG::Client::BattleAlertParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::BattleAlertParam*))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170_METHOD_1_77EC680F959BBC22_OFFSET))(this, a1, a2);
	}
};
