#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/System/Object.h"

class Class_1_D1403D5EBDB678B3_1;
class Class_1_D8203AFB32E9259C;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A9162384BBCFB02D_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x166F1730)
#define CLASS_1_A9162384BBCFB02D_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x166F1B70)
#define CLASS_1_A9162384BBCFB02D_METHOD_1_24EBDF7AAE4534FE_OFFSET UNITYSDK_OFFSET(0x166F0DF0)
#define CLASS_1_A9162384BBCFB02D_METHOD_1_39D15CE61EDA5424_OFFSET UNITYSDK_OFFSET(0x166F1040)
#define CLASS_1_A9162384BBCFB02D_METHOD_1_3A3E81F1DA4017EE_OFFSET UNITYSDK_OFFSET(0x166F1800)
#define CLASS_1_A9162384BBCFB02D_METHOD_1_536C2E82540C2DBA_OFFSET UNITYSDK_OFFSET(0x166F1580)
#define CLASS_1_A9162384BBCFB02D_METHOD_1_84621A7BCF938CF5_OFFSET UNITYSDK_OFFSET(0x166F1B80)
#define CLASS_1_A9162384BBCFB02D_METHOD_1_8A20798E544D051E_OFFSET UNITYSDK_OFFSET(0x166F1A30)
#define CLASS_1_A9162384BBCFB02D_METHOD_1_D0C84D9E160E4346_OFFSET UNITYSDK_OFFSET(0x166F12F0)
#define CLASS_1_A9162384BBCFB02D_METHOD_1_EA9B142E5A847C05_OFFSET UNITYSDK_OFFSET(0x166F1190)
#define CLASS_1_A9162384BBCFB02D__CTOR_OFFSET UNITYSDK_OFFSET(0x166F1B90)

inline static constexpr unsigned int Class_1_A9162384BBCFB02D_TypeDefinitionIndex = 51789;

class Class_1_A9162384BBCFB02D : public ::System::Object
{
public:
	::Class_1_D8203AFB32E9259C* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_D1403D5EBDB678B3_1*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9162384BBCFB02D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_24EBDF7AAE4534FE(::Class_1_D8203AFB32E9259C* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8203AFB32E9259C*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_A9162384BBCFB02D_METHOD_1_24EBDF7AAE4534FE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D0C84D9E160E4346(::Class_1_D8203AFB32E9259C* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8203AFB32E9259C*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_A9162384BBCFB02D_METHOD_1_D0C84D9E160E4346_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3A3E81F1DA4017EE(::Class_1_D8203AFB32E9259C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8203AFB32E9259C*))((::PBYTE)hIl2Cpp + CLASS_1_A9162384BBCFB02D_METHOD_1_3A3E81F1DA4017EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_8A20798E544D051E(::Class_1_D8203AFB32E9259C* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8203AFB32E9259C*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + CLASS_1_A9162384BBCFB02D_METHOD_1_8A20798E544D051E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EA9B142E5A847C05(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A9162384BBCFB02D_METHOD_1_EA9B142E5A847C05_OFFSET))(this, a1);
	}

	::System::Void Method_1_536C2E82540C2DBA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A9162384BBCFB02D_METHOD_1_536C2E82540C2DBA_OFFSET))(this, a1);
	}

	::System::Void Method_1_39D15CE61EDA5424(::Class_1_D8203AFB32E9259C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8203AFB32E9259C*))((::PBYTE)hIl2Cpp + CLASS_1_A9162384BBCFB02D_METHOD_1_39D15CE61EDA5424_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9162384BBCFB02D_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::Class_1_D8203AFB32E9259C* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D8203AFB32E9259C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9162384BBCFB02D_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_D1403D5EBDB678B3_1*>* Method_1_84621A7BCF938CF5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_D1403D5EBDB678B3_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9162384BBCFB02D_METHOD_1_84621A7BCF938CF5_OFFSET))(this);
	}
};
