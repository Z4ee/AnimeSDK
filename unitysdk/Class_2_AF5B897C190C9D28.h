#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AetherDivideTriggerAttackSimplified; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AF5B897C190C9D28_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FC41F0)
#define CLASS_2_AF5B897C190C9D28_METHOD_2_3B911B6C3D1240C7_OFFSET UNITYSDK_OFFSET(0x18FC4230)
#define CLASS_2_AF5B897C190C9D28_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18FC3A70)
#define CLASS_2_AF5B897C190C9D28_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18FC3A20)
#define CLASS_2_AF5B897C190C9D28_TICK_OFFSET UNITYSDK_OFFSET(0x18FC4190)
#define CLASS_2_AF5B897C190C9D28__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC3A10)

inline static constexpr unsigned int Class_2_AF5B897C190C9D28_TypeDefinitionIndex = 58084;

class Class_2_AF5B897C190C9D28 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::AetherDivideTriggerAttackSimplified* EJJEEJENLDA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AetherDivideTriggerAttackSimplified* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AetherDivideTriggerAttackSimplified*))((::PBYTE)hIl2Cpp + CLASS_2_AF5B897C190C9D28__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF5B897C190C9D28_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF5B897C190C9D28_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF5B897C190C9D28_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF5B897C190C9D28_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3B911B6C3D1240C7(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_AF5B897C190C9D28_METHOD_2_3B911B6C3D1240C7_OFFSET))(this, a1, a2);
	}
};
