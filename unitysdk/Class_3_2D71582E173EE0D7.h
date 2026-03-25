#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_68C34B5C1C40C2FF;
class Class_3_23C95272060E6D2B;
class Class_3_3EBC4A503C83DC15;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnInsertAction; }

#define CLASS_3_2D71582E173EE0D7_METHOD_3_0BE9568651AD6046_OFFSET UNITYSDK_OFFSET(0x11871C90)
#define CLASS_3_2D71582E173EE0D7_METHOD_3_261438C7AB1384AE_OFFSET UNITYSDK_OFFSET(0x118720D0)
#define CLASS_3_2D71582E173EE0D7_METHOD_3_4E6BAED397052EE1_OFFSET UNITYSDK_OFFSET(0x11871060)
#define CLASS_3_2D71582E173EE0D7_METHOD_3_56F93621BC731B71_OFFSET UNITYSDK_OFFSET(0x118711A0)
#define CLASS_3_2D71582E173EE0D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11870D00)
#define CLASS_3_2D71582E173EE0D7__CTOR_OFFSET UNITYSDK_OFFSET(0x11870CD0)

inline static constexpr unsigned int Class_3_2D71582E173EE0D7_TypeDefinitionIndex = 44685;

class Class_3_2D71582E173EE0D7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TurnInsertAction*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TurnInsertAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TurnInsertAction*))((::PBYTE)hIl2Cpp + CLASS_3_2D71582E173EE0D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D71582E173EE0D7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_56F93621BC731B71(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2D71582E173EE0D7_METHOD_3_56F93621BC731B71_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4E6BAED397052EE1(::Class_2_68C34B5C1C40C2FF* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_68C34B5C1C40C2FF*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_2D71582E173EE0D7_METHOD_3_4E6BAED397052EE1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_0BE9568651AD6046(::Class_3_23C95272060E6D2B* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_23C95272060E6D2B*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_2D71582E173EE0D7_METHOD_3_0BE9568651AD6046_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_261438C7AB1384AE(::Class_3_3EBC4A503C83DC15* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_3EBC4A503C83DC15*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_2D71582E173EE0D7_METHOD_3_261438C7AB1384AE_OFFSET))(this, a1, a2);
	}
};
