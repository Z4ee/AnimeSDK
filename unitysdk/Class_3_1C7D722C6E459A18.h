#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_F400FB9D2D9DA921;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Side_SteerToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1C7D722C6E459A18_METHOD_3_D11CF280A4170A15_OFFSET UNITYSDK_OFFSET(0x154026B0)
#define CLASS_3_1C7D722C6E459A18_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154025F0)
#define CLASS_3_1C7D722C6E459A18_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15402820)
#define CLASS_3_1C7D722C6E459A18_TICK_OFFSET UNITYSDK_OFFSET(0x15402750)
#define CLASS_3_1C7D722C6E459A18__CTOR_OFFSET UNITYSDK_OFFSET(0x154024A0)

inline static constexpr unsigned int Class_3_1C7D722C6E459A18_TypeDefinitionIndex = 52536;

class Class_3_1C7D722C6E459A18 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_SteerToTarget*>
{
public:
	::Class_2_F67FF7EB526BF85C* JHCDNHADCLE; // 0x28
	::Class_2_F400FB9D2D9DA921* HNHCPOJKNCC; // 0x30
	::RPG::GameCore::GameEntity* PIJPEKHJHHI; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_SteerToTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_SteerToTarget*))((::PBYTE)hIl2Cpp + CLASS_3_1C7D722C6E459A18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C7D722C6E459A18_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1C7D722C6E459A18_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C7D722C6E459A18_ONTASKRESET_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_D11CF280A4170A15()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C7D722C6E459A18_METHOD_3_D11CF280A4170A15_OFFSET))(this);
	}
};
