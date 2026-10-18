#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CBA1E7FD4C82B228;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_151_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFC6040)
#define CLASS_3_27518451A20BB161_151_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFC6080)
#define CLASS_3_27518451A20BB161_151__CTOR_OFFSET UNITYSDK_OFFSET(0xDFC6010)

inline static constexpr unsigned int Class_3_27518451A20BB161_151_TypeDefinitionIndex = 53930;

class Class_3_27518451A20BB161_151 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CBA1E7FD4C82B228*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CBA1E7FD4C82B228* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CBA1E7FD4C82B228*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_151__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_151_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_151_ONTASKBEGIN_OFFSET))(this);
	}
};
