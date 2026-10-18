#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_43B0AF86156D9901;
class Class_1_70CCABA9DB985F52;
class Class_1_8A072C6DB11EDA5C;
class Class_1_C4B000B71ED01017;
class Class_3_05677D33458EB438;
class Class_3_07C3C4D2990C49EE;
class Class_3_BB8B7764D3497776;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }

#define CLASS_3_5EECFDEA7A89A768_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB97C5D0)
#define CLASS_3_5EECFDEA7A89A768_METHOD_3_0A282DBD30957E74_OFFSET UNITYSDK_OFFSET(0xB97FD30)
#define CLASS_3_5EECFDEA7A89A768_METHOD_3_558DA0AB65AB3715_OFFSET UNITYSDK_OFFSET(0xB97C930)
#define CLASS_3_5EECFDEA7A89A768_METHOD_3_64E550819F7C27F7_OFFSET UNITYSDK_OFFSET(0xB97D670)
#define CLASS_3_5EECFDEA7A89A768_METHOD_3_65324A1A6069CDD4_1_OFFSET UNITYSDK_OFFSET(0xB97D3E0)
#define CLASS_3_5EECFDEA7A89A768_METHOD_3_65324A1A6069CDD4_OFFSET UNITYSDK_OFFSET(0xB97D150)
#define CLASS_3_5EECFDEA7A89A768_METHOD_3_6ACBAD28F12B55B4_OFFSET UNITYSDK_OFFSET(0xB97F2E0)
#define CLASS_3_5EECFDEA7A89A768_METHOD_3_6F3780EE6FFB66C8_OFFSET UNITYSDK_OFFSET(0xB97ED20)
#define CLASS_3_5EECFDEA7A89A768_METHOD_3_91FB15FE1890326E_OFFSET UNITYSDK_OFFSET(0xB980650)
#define CLASS_3_5EECFDEA7A89A768_METHOD_3_B2ED2F232F5144AC_OFFSET UNITYSDK_OFFSET(0xB97E260)
#define CLASS_3_5EECFDEA7A89A768_METHOD_3_B975341E888FDB33_OFFSET UNITYSDK_OFFSET(0xB97E610)
#define CLASS_3_5EECFDEA7A89A768_METHOD_3_C71393FF78A4A37B_OFFSET UNITYSDK_OFFSET(0xB97F810)
#define CLASS_3_5EECFDEA7A89A768_METHOD_3_F8A58E7F938B3F85_OFFSET UNITYSDK_OFFSET(0xB97FC10)
#define CLASS_3_5EECFDEA7A89A768_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB97C610)
#define CLASS_3_5EECFDEA7A89A768__CTOR_OFFSET UNITYSDK_OFFSET(0xB97C4A0)

inline static constexpr unsigned int Class_3_5EECFDEA7A89A768_TypeDefinitionIndex = 53853;

class Class_3_5EECFDEA7A89A768 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_05677D33458EB438*>
{
public:
	::Class_3_07C3C4D2990C49EE* DOBPMCAIEEI; // 0x28
	::Class_1_43B0AF86156D9901* AIJGGLCAEON; // 0x30
	::Class_1_8A072C6DB11EDA5C* PMEOEIDANPD; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_05677D33458EB438* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_05677D33458EB438*))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_558DA0AB65AB3715(::Class_1_C4B000B71ED01017* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4B000B71ED01017*))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768_METHOD_3_558DA0AB65AB3715_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_64E550819F7C27F7(::RPG::GameCore::TaskContext* a1, ::Class_3_05677D33458EB438* a2, ::Class_1_70CCABA9DB985F52* a3, ::Class_3_BB8B7764D3497776* a4, ::Class_3_BB8B7764D3497776* a5, ::RPG::GameCore::GameEntity* a6, ::RPG::GameCore::GameEntity* a7, ::RPG::GameCore::GameEntity* a8, ::System::Boolean a9, ::Class_3_07C3C4D2990C49EE* a10)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_05677D33458EB438*, ::Class_1_70CCABA9DB985F52*, ::Class_3_BB8B7764D3497776*, ::Class_3_BB8B7764D3497776*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768_METHOD_3_64E550819F7C27F7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_3_6F3780EE6FFB66C8(::Class_1_70CCABA9DB985F52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70CCABA9DB985F52*))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768_METHOD_3_6F3780EE6FFB66C8_OFFSET))(this, a1);
	}

	::System::Void Method_3_B975341E888FDB33(::Class_1_70CCABA9DB985F52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70CCABA9DB985F52*))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768_METHOD_3_B975341E888FDB33_OFFSET))(this, a1);
	}

	::System::Void Method_3_65324A1A6069CDD4(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_70CCABA9DB985F52* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_1_70CCABA9DB985F52*))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768_METHOD_3_65324A1A6069CDD4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_65324A1A6069CDD4_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_70CCABA9DB985F52* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_1_70CCABA9DB985F52*))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768_METHOD_3_65324A1A6069CDD4_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_6ACBAD28F12B55B4(::Class_3_BB8B7764D3497776* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_70CCABA9DB985F52* a3, ::Class_3_07C3C4D2990C49EE* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BB8B7764D3497776*, ::RPG::GameCore::GameEntity*, ::Class_1_70CCABA9DB985F52*, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768_METHOD_3_6ACBAD28F12B55B4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_C71393FF78A4A37B(::Class_3_BB8B7764D3497776* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_70CCABA9DB985F52* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BB8B7764D3497776*, ::RPG::GameCore::GameEntity*, ::Class_1_70CCABA9DB985F52*))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768_METHOD_3_C71393FF78A4A37B_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_3_B2ED2F232F5144AC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_05677D33458EB438* a4, ::Class_1_70CCABA9DB985F52* a5, ::RPG::GameCore::TaskContext* a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_05677D33458EB438*, ::Class_1_70CCABA9DB985F52*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768_METHOD_3_B2ED2F232F5144AC_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_0A282DBD30957E74(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::RtAttackData* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtAttackData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768_METHOD_3_0A282DBD30957E74_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_F8A58E7F938B3F85(::Class_3_05677D33458EB438* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Boolean a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Class_3_05677D33458EB438*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768_METHOD_3_F8A58E7F938B3F85_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_91FB15FE1890326E(::System::Single a1, ::RPG::GameCore::GameEntity* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::System::Single, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768_METHOD_3_91FB15FE1890326E_OFFSET))(a1, a2, a3);
	}
};
