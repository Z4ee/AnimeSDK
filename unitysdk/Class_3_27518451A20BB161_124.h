#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_8C889C1E1136F5EA;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_124_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC60F90)
#define CLASS_3_27518451A20BB161_124__CTOR_OFFSET UNITYSDK_OFFSET(0xAC60F60)

inline static constexpr unsigned int Class_3_27518451A20BB161_124_TypeDefinitionIndex = 51458;

class Class_3_27518451A20BB161_124 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8C889C1E1136F5EA*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8C889C1E1136F5EA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8C889C1E1136F5EA*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_124__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_124_ONTASKBEGIN_OFFSET))(this);
	}
};
