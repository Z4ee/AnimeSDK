#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChessMoveStopReason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/ST_ChessTask_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Chess_Main_MoveToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AC7FE20C6389B6FD_METHOD_3_124C38D731497707_OFFSET UNITYSDK_OFFSET(0xD7E3A10)
#define CLASS_3_AC7FE20C6389B6FD_METHOD_3_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xD7E3950)
#define CLASS_3_AC7FE20C6389B6FD_METHOD_3_5A5887579232ACFB_OFFSET UNITYSDK_OFFSET(0xD7E3A80)
#define CLASS_3_AC7FE20C6389B6FD_METHOD_3_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0xD7E3B20)
#define CLASS_3_AC7FE20C6389B6FD_METHOD_3_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xD7E3A70)
#define CLASS_3_AC7FE20C6389B6FD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7E36C0)
#define CLASS_3_AC7FE20C6389B6FD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD7E3890)
#define CLASS_3_AC7FE20C6389B6FD_TICK_OFFSET UNITYSDK_OFFSET(0xD7E3830)
#define CLASS_3_AC7FE20C6389B6FD__CTOR_OFFSET UNITYSDK_OFFSET(0xD7E3690)
#define CLASS_3_AC7FE20C6389B6FD___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xD7E3B30)

inline static constexpr unsigned int Class_3_AC7FE20C6389B6FD_TypeDefinitionIndex = 45181;

class Class_3_AC7FE20C6389B6FD : public ::RPG::GameCore::ST_ChessTask_1<::RPG::GameCore::ST_Chess_Main_MoveToTarget*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28
	::RPG::GameCore::FixPoint Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Chess_Main_MoveToTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Chess_Main_MoveToTarget*))((::PBYTE)hIl2Cpp + CLASS_3_AC7FE20C6389B6FD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC7FE20C6389B6FD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC7FE20C6389B6FD_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC7FE20C6389B6FD_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_3_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC7FE20C6389B6FD_METHOD_3_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_3_124C38D731497707(::RPG::GameCore::ChessMoveStopReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessMoveStopReason))((::PBYTE)hIl2Cpp + CLASS_3_AC7FE20C6389B6FD_METHOD_3_124C38D731497707_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_3_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC7FE20C6389B6FD_METHOD_3_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::FixVec2 Method_3_5A5887579232ACFB()
	{
		return ((::RPG::GameCore::FixVec2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC7FE20C6389B6FD_METHOD_3_5A5887579232ACFB_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC7FE20C6389B6FD_METHOD_3_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC7FE20C6389B6FD___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
