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

#define CLASS_2_07CB640A20D6F01A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A35160)
#define CLASS_2_07CB640A20D6F01A_METHOD_2_36F46336ADA62D13_OFFSET UNITYSDK_OFFSET(0x13A37B60)
#define CLASS_2_07CB640A20D6F01A_METHOD_2_CD94359AF963D70E_OFFSET UNITYSDK_OFFSET(0x13A380F0)
#define CLASS_2_07CB640A20D6F01A_METHOD_2_D36CEB2267208282_OFFSET UNITYSDK_OFFSET(0x13A37D40)
#define CLASS_2_07CB640A20D6F01A_METHOD_2_E86821A8043C8EA6_OFFSET UNITYSDK_OFFSET(0x13A375A0)
#define CLASS_2_07CB640A20D6F01A_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13A38140)
#define CLASS_2_07CB640A20D6F01A_METHOD_2_F0890974630C05AD_OFFSET UNITYSDK_OFFSET(0x13A37BD0)
#define CLASS_2_07CB640A20D6F01A_METHOD_2_F73E10B4DB3FFC8E_OFFSET UNITYSDK_OFFSET(0x13A37A20)
#define CLASS_2_07CB640A20D6F01A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A351A0)
#define CLASS_2_07CB640A20D6F01A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A37AB0)
#define CLASS_2_07CB640A20D6F01A_TICK_OFFSET UNITYSDK_OFFSET(0x13A37B00)
#define CLASS_2_07CB640A20D6F01A__CTOR_OFFSET UNITYSDK_OFFSET(0x13A350B0)

inline static constexpr unsigned int Class_2_07CB640A20D6F01A_TypeDefinitionIndex = 53208;

class Class_2_07CB640A20D6F01A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::Client::MonoEffectManager* Field_2_1; // 0x20
	::RPG::GameCore::TriggerEffect* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x31
	::RPG::GameCore::StringHash Field_2_5; // 0x34

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
