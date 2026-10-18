#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_3D58785602145ACE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C1CD2073D868C376_METHOD_3_82E26C3EE9BBA647_OFFSET UNITYSDK_OFFSET(0xB24FC70)
#define CLASS_3_C1CD2073D868C376_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB24FB70)
#define CLASS_3_C1CD2073D868C376__CTOR_OFFSET UNITYSDK_OFFSET(0xB24FB10)

inline static constexpr unsigned int Class_3_C1CD2073D868C376_TypeDefinitionIndex = 53454;

class Class_3_C1CD2073D868C376 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_3D58785602145ACE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_3D58785602145ACE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_3D58785602145ACE*))((::PBYTE)hIl2Cpp + CLASS_3_C1CD2073D868C376__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C1CD2073D868C376_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_3_82E26C3EE9BBA647(::RPG::GameCore::TaskContext* a1, ::Class_4_3D58785602145ACE* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::Class_4_3D58785602145ACE*))((::PBYTE)hIl2Cpp + CLASS_3_C1CD2073D868C376_METHOD_3_82E26C3EE9BBA647_OFFSET))(a1, a2);
	}
};
