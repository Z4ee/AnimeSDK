#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_6A3F10CE86B200DD;
class Class_2_C14C025AFA60DCA2;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Side_SteerToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F7298C1AF72A3CD9_METHOD_3_66810AC65E2A6AED_OFFSET UNITYSDK_OFFSET(0x12AE0BE0)
#define CLASS_3_F7298C1AF72A3CD9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12AE0B20)
#define CLASS_3_F7298C1AF72A3CD9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12AE0D50)
#define CLASS_3_F7298C1AF72A3CD9_TICK_OFFSET UNITYSDK_OFFSET(0x12AE0C80)
#define CLASS_3_F7298C1AF72A3CD9__CTOR_OFFSET UNITYSDK_OFFSET(0x12AE0A90)
#define CLASS_3_F7298C1AF72A3CD9___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x12AE0DE0)

inline static constexpr unsigned int Class_3_F7298C1AF72A3CD9_TypeDefinitionIndex = 48238;

class Class_3_F7298C1AF72A3CD9 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_SteerToTarget*>
{
public:
	::Class_2_6A3F10CE86B200DD* Field_3_1; // 0x28
	::Class_2_C14C025AFA60DCA2* Field_3_0; // 0x30
	::RPG::GameCore::GameEntity* Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_SteerToTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_SteerToTarget*))((::PBYTE)hIl2Cpp + CLASS_3_F7298C1AF72A3CD9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7298C1AF72A3CD9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F7298C1AF72A3CD9_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7298C1AF72A3CD9_ONTASKRESET_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_66810AC65E2A6AED()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7298C1AF72A3CD9_METHOD_3_66810AC65E2A6AED_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F7298C1AF72A3CD9___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
