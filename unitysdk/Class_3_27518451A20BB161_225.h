#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_36857654F4A216AC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_225_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18701F20)
#define CLASS_3_27518451A20BB161_225_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18701F60)
#define CLASS_3_27518451A20BB161_225__CTOR_OFFSET UNITYSDK_OFFSET(0x18701EF0)

inline static constexpr unsigned int Class_3_27518451A20BB161_225_TypeDefinitionIndex = 55697;

class Class_3_27518451A20BB161_225 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_36857654F4A216AC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_36857654F4A216AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_36857654F4A216AC*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_225__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_225_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_225_ONTASKBEGIN_OFFSET))(this);
	}
};
