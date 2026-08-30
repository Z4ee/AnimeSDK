#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindLoopControlStateChangeListener; }
namespace System { class Object; }

#define CLASS_2_EB9E2D068985DF19_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CC4740)
#define CLASS_2_EB9E2D068985DF19_METHOD_2_57D21531A2DC98EE_OFFSET UNITYSDK_OFFSET(0x15CC4910)
#define CLASS_2_EB9E2D068985DF19_METHOD_2_77E4508564C6D7D6_OFFSET UNITYSDK_OFFSET(0x15CC4AE0)
#define CLASS_2_EB9E2D068985DF19_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CC4390)
#define CLASS_2_EB9E2D068985DF19_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CC4590)
#define CLASS_2_EB9E2D068985DF19_TICK_OFFSET UNITYSDK_OFFSET(0x15CC46E0)
#define CLASS_2_EB9E2D068985DF19__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC4300)

inline static constexpr unsigned int Class_2_EB9E2D068985DF19_TypeDefinitionIndex = 53658;

class Class_2_EB9E2D068985DF19 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* PKIGFJMEKNJ; // 0x18
	::RPG::GameCore::EntityTimeRewindComponent* GLBECKBELNK; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::RPG::GameCore::GameEntity* LOBKOPJPFIB; // 0x30
	::RPG::GameCore::TimeRewindLoopControlStateChangeListener* OFKGLJOAMLD; // 0x38
	::System::Int32 CFMADNLMFGL; // 0x40
	::System::UInt32 PIBNIOEBKJI; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindLoopControlStateChangeListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindLoopControlStateChangeListener*))((::PBYTE)hIl2Cpp + CLASS_2_EB9E2D068985DF19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB9E2D068985DF19_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB9E2D068985DF19_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EB9E2D068985DF19_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB9E2D068985DF19_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_57D21531A2DC98EE(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_EB9E2D068985DF19_METHOD_2_57D21531A2DC98EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_77E4508564C6D7D6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EB9E2D068985DF19_METHOD_2_77E4508564C6D7D6_OFFSET))(this, a1);
	}
};
