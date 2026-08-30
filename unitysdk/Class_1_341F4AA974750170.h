#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_08645361E812A3C8;
class Class_1_8B83CE81FFD7409A;
class Class_1_D1FF55C91B8FD671;
namespace RPG::Client { class BattleAlertParam; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_341F4AA974750170_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17FEE0C0)
#define CLASS_1_341F4AA974750170_METHOD_1_64EB37ED69DA3A5C_OFFSET UNITYSDK_OFFSET(0x17FEEA80)
#define CLASS_1_341F4AA974750170_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x17FEE420)
#define CLASS_1_341F4AA974750170_METHOD_1_77EC680F959BBC22_OFFSET UNITYSDK_OFFSET(0x17FEE7A0)
#define CLASS_1_341F4AA974750170_METHOD_1_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x17FEE9D0)
#define CLASS_1_341F4AA974750170_METHOD_1_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x17FEE340)
#define CLASS_1_341F4AA974750170_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x17FEE670)
#define CLASS_1_341F4AA974750170_METHOD_1_99C4B03B3E9A6662_OFFSET UNITYSDK_OFFSET(0x17FEE740)
#define CLASS_1_341F4AA974750170_METHOD_1_CA061D40F1E2F176_OFFSET UNITYSDK_OFFSET(0x17FEE5A0)
#define CLASS_1_341F4AA974750170_METHOD_1_E3019858078E395C_OFFSET UNITYSDK_OFFSET(0x17FEE500)
#define CLASS_1_341F4AA974750170__CTOR_OFFSET UNITYSDK_OFFSET(0x17FEEBC0)

inline static constexpr unsigned int Class_1_341F4AA974750170_TypeDefinitionIndex = 71376;

class Class_1_341F4AA974750170 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_08645361E812A3C8*>* KBAMBDNAGHF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D1FF55C91B8FD671*>* CCGOOIMLGGN; // 0x18
	::Class_1_D1FF55C91B8FD671* CPGIIBCLOEA; // 0x20

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

	::System::Void Method_1_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170_METHOD_1_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170_METHOD_1_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_99C4B03B3E9A6662(::RPG::Client::BattleAlertParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAlertParam*))((::PBYTE)hIl2Cpp + CLASS_1_341F4AA974750170_METHOD_1_99C4B03B3E9A6662_OFFSET))(this, a1);
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
