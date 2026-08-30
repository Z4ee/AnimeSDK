#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetAlias; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffect; }

#define CLASS_2_07CB640A20D6F01A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCB7940)
#define CLASS_2_07CB640A20D6F01A_METHOD_2_36F46336ADA62D13_OFFSET UNITYSDK_OFFSET(0xBCBA330)
#define CLASS_2_07CB640A20D6F01A_METHOD_2_CD94359AF963D70E_OFFSET UNITYSDK_OFFSET(0xBCBA8B0)
#define CLASS_2_07CB640A20D6F01A_METHOD_2_D36CEB2267208282_OFFSET UNITYSDK_OFFSET(0xBCBA510)
#define CLASS_2_07CB640A20D6F01A_METHOD_2_E86821A8043C8EA6_OFFSET UNITYSDK_OFFSET(0xBCB9D80)
#define CLASS_2_07CB640A20D6F01A_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBCBA900)
#define CLASS_2_07CB640A20D6F01A_METHOD_2_F0890974630C05AD_OFFSET UNITYSDK_OFFSET(0xBCBA3A0)
#define CLASS_2_07CB640A20D6F01A_METHOD_2_F73E10B4DB3FFC8E_OFFSET UNITYSDK_OFFSET(0xBCBA1F0)
#define CLASS_2_07CB640A20D6F01A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCB7980)
#define CLASS_2_07CB640A20D6F01A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCBA280)
#define CLASS_2_07CB640A20D6F01A_TICK_OFFSET UNITYSDK_OFFSET(0xBCBA2D0)
#define CLASS_2_07CB640A20D6F01A__CTOR_OFFSET UNITYSDK_OFFSET(0xBCB7890)

inline static constexpr unsigned int Class_2_07CB640A20D6F01A_TypeDefinitionIndex = 55922;

class Class_2_07CB640A20D6F01A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::TriggerEffect* OFKGLJOAMLD; // 0x20
	::RPG::Client::MonoEffectManager* KMLMEHCDDMA; // 0x28
	::System::Boolean LEIGKHEMCGE; // 0x30
	::System::Boolean MAJKBGHNOBL; // 0x31
	::RPG::GameCore::StringHash PPKJNOJIJMH; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + CLASS_2_07CB640A20D6F01A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07CB640A20D6F01A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07CB640A20D6F01A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_2_E86821A8043C8EA6(::RPG::GameCore::TargetAlias* a1, ::RPG::GameCore::GameEntity*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TargetAlias*, ::RPG::GameCore::GameEntity*&))((::PBYTE)hIl2Cpp + CLASS_2_07CB640A20D6F01A_METHOD_2_E86821A8043C8EA6_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07CB640A20D6F01A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_07CB640A20D6F01A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_36F46336ADA62D13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07CB640A20D6F01A_METHOD_2_36F46336ADA62D13_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_F73E10B4DB3FFC8E()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07CB640A20D6F01A_METHOD_2_F73E10B4DB3FFC8E_OFFSET))(this);
	}

	::System::Void Method_2_F0890974630C05AD(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_07CB640A20D6F01A_METHOD_2_F0890974630C05AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_D36CEB2267208282(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_07CB640A20D6F01A_METHOD_2_D36CEB2267208282_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CD94359AF963D70E(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_07CB640A20D6F01A_METHOD_2_CD94359AF963D70E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07CB640A20D6F01A_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
