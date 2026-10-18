#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_3D58785602145ACE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2962CFA8E4F1BE29_METHOD_3_747D03DEE1304664_OFFSET UNITYSDK_OFFSET(0xB2497C0)
#define CLASS_3_2962CFA8E4F1BE29_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2496C0)
#define CLASS_3_2962CFA8E4F1BE29__CTOR_OFFSET UNITYSDK_OFFSET(0xB249660)

inline static constexpr unsigned int Class_3_2962CFA8E4F1BE29_TypeDefinitionIndex = 53454;

class Class_3_2962CFA8E4F1BE29 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_3D58785602145ACE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_3D58785602145ACE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_3D58785602145ACE*))((::PBYTE)hIl2Cpp + CLASS_3_2962CFA8E4F1BE29__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2962CFA8E4F1BE29_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_3_747D03DEE1304664(::RPG::GameCore::TaskContext* a1, ::Class_4_3D58785602145ACE* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::Class_4_3D58785602145ACE*))((::PBYTE)hIl2Cpp + CLASS_3_2962CFA8E4F1BE29_METHOD_3_747D03DEE1304664_OFFSET))(a1, a2);
	}
};
