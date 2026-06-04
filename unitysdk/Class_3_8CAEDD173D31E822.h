#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class CreateBattleEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_8CAEDD173D31E822_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA879E10)
#define CLASS_3_8CAEDD173D31E822_METHOD_3_6C435ADAAFBF6CA9_1_OFFSET UNITYSDK_OFFSET(0xA879C00)
#define CLASS_3_8CAEDD173D31E822_METHOD_3_6C435ADAAFBF6CA9_OFFSET UNITYSDK_OFFSET(0xA879180)
#define CLASS_3_8CAEDD173D31E822_METHOD_3_79FC8DDAE734DDBE_OFFSET UNITYSDK_OFFSET(0xA879390)
#define CLASS_3_8CAEDD173D31E822_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA879070)
#define CLASS_3_8CAEDD173D31E822__CTOR_OFFSET UNITYSDK_OFFSET(0xA878F20)
#define CLASS_3_8CAEDD173D31E822___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA879EB0)

inline static constexpr unsigned int Class_3_8CAEDD173D31E822_TypeDefinitionIndex = 54241;

class Class_3_8CAEDD173D31E822 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateBattleEvent*>
{
public:
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_3_0; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEvent*))((::PBYTE)hIl2Cpp + CLASS_3_8CAEDD173D31E822__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CAEDD173D31E822_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_79FC8DDAE734DDBE(::System::UInt32 a1, ::RPG::GameCore::StageRow* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + CLASS_3_8CAEDD173D31E822_METHOD_3_79FC8DDAE734DDBE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6C435ADAAFBF6CA9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8CAEDD173D31E822_METHOD_3_6C435ADAAFBF6CA9_OFFSET))(this, a1);
	}

	::System::Void Method_3_6C435ADAAFBF6CA9_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8CAEDD173D31E822_METHOD_3_6C435ADAAFBF6CA9_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CAEDD173D31E822_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CAEDD173D31E822___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
