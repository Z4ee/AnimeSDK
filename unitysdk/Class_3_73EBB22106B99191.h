#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_ChessTask_1.h"

namespace RPG::GameCore { class ST_Chess_Main_DoSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_73EBB22106B99191_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105F5BC0)
#define CLASS_3_73EBB22106B99191_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x105F5DC0)
#define CLASS_3_73EBB22106B99191_TICK_OFFSET UNITYSDK_OFFSET(0x105F5D00)
#define CLASS_3_73EBB22106B99191__CTOR_OFFSET UNITYSDK_OFFSET(0x105F5B90)
#define CLASS_3_73EBB22106B99191___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x105F5E10)

inline static constexpr unsigned int Class_3_73EBB22106B99191_TypeDefinitionIndex = 45180;

class Class_3_73EBB22106B99191 : public ::RPG::GameCore::ST_ChessTask_1<::RPG::GameCore::ST_Chess_Main_DoSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Chess_Main_DoSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Chess_Main_DoSkill*))((::PBYTE)hIl2Cpp + CLASS_3_73EBB22106B99191__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_73EBB22106B99191_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_73EBB22106B99191_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_73EBB22106B99191_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_73EBB22106B99191___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
