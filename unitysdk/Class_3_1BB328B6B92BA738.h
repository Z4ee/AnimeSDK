#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_1B29DD4FD6D3A6AB;
class Class_2_C14C025AFA60DCA2;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Side_LookAtTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1BB328B6B92BA738_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8FCC300)
#define CLASS_3_1BB328B6B92BA738_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8FCC440)
#define CLASS_3_1BB328B6B92BA738_TICK_OFFSET UNITYSDK_OFFSET(0x8FCC350)
#define CLASS_3_1BB328B6B92BA738__CTOR_OFFSET UNITYSDK_OFFSET(0x8FCC270)
#define CLASS_3_1BB328B6B92BA738___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8FCC4B0)

inline static constexpr unsigned int Class_3_1BB328B6B92BA738_TypeDefinitionIndex = 48223;

class Class_3_1BB328B6B92BA738 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_LookAtTarget*>
{
public:
	::Class_2_C14C025AFA60DCA2* Field_3_1; // 0x28
	::RPG::GameCore::GameEntity* Field_3_2; // 0x30
	::Class_2_1B29DD4FD6D3A6AB* Field_3_0; // 0x38

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
