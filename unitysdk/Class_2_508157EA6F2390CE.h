#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_0066AF6A31824F6F_Class_1_E8200A7BE3BDDA63;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameLevelObjectRefConfig; }
namespace RPG::GameCore { class LevelCurveInstance; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipArriveTo; }
namespace System { class String; }

#define CLASS_2_508157EA6F2390CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1679D7B0)
#define CLASS_2_508157EA6F2390CE_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1679DFB0)
#define CLASS_2_508157EA6F2390CE_METHOD_2_68AD24EC2AE865B7_OFFSET UNITYSDK_OFFSET(0x1679DCE0)
#define CLASS_2_508157EA6F2390CE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1679D850)
#define CLASS_2_508157EA6F2390CE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1679DF60)
#define CLASS_2_508157EA6F2390CE_TICK_OFFSET UNITYSDK_OFFSET(0x1679D7F0)
#define CLASS_2_508157EA6F2390CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1679D7A0)

inline static constexpr unsigned int Class_2_508157EA6F2390CE_TypeDefinitionIndex = 53690;

class Class_2_508157EA6F2390CE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_0066AF6A31824F6F_Class_1_E8200A7BE3BDDA63* MBOEDFCNCJF; // 0x18
	::RPG::GameCore::TravelShipArriveTo* OFKGLJOAMLD; // 0x20
	::System::String* IJMGEMMNNPI; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipArriveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipArriveTo*))((::PBYTE)hIl2Cpp + CLASS_2_508157EA6F2390CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508157EA6F2390CE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_508157EA6F2390CE_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508157EA6F2390CE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508157EA6F2390CE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_508157EA6F2390CE_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelCurveInstance* Method_2_68AD24EC2AE865B7(::RPG::GameCore::GameLevelObjectRefConfig* a1)
	{
		return ((::RPG::GameCore::LevelCurveInstance*(*)(::PVOID, ::RPG::GameCore::GameLevelObjectRefConfig*))((::PBYTE)hIl2Cpp + CLASS_2_508157EA6F2390CE_METHOD_2_68AD24EC2AE865B7_OFFSET))(this, a1);
	}
};
