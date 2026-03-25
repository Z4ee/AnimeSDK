#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_1B29DD4FD6D3A6AB;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Side_LookAtTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1BB328B6B92BA738_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11183980)
#define CLASS_3_1BB328B6B92BA738_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11183AC0)
#define CLASS_3_1BB328B6B92BA738_TICK_OFFSET UNITYSDK_OFFSET(0x111839D0)
#define CLASS_3_1BB328B6B92BA738__CTOR_OFFSET UNITYSDK_OFFSET(0x111838F0)
#define CLASS_3_1BB328B6B92BA738___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11183B30)

inline static constexpr unsigned int Class_3_1BB328B6B92BA738_TypeDefinitionIndex = 42260;

class Class_3_1BB328B6B92BA738 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_LookAtTarget*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_2; // 0x28
	::Class_2_1B29DD4FD6D3A6AB* Field_3_0; // 0x30
	::Class_2_F67FF7EB526BF85C* Field_3_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_LookAtTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_LookAtTarget*))((::PBYTE)hIl2Cpp + CLASS_3_1BB328B6B92BA738__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1BB328B6B92BA738_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1BB328B6B92BA738_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1BB328B6B92BA738_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1BB328B6B92BA738___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
