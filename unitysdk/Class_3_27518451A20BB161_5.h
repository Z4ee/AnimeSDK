#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_107D88E49CCA98ED;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16923AE0)
#define CLASS_3_27518451A20BB161_5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169238C0)
#define CLASS_3_27518451A20BB161_5__CTOR_OFFSET UNITYSDK_OFFSET(0x16923890)

inline static constexpr unsigned int Class_3_27518451A20BB161_5_TypeDefinitionIndex = 52892;

class Class_3_27518451A20BB161_5 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_107D88E49CCA98ED*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_107D88E49CCA98ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_107D88E49CCA98ED*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_5_DISPOSE_OFFSET))(this);
	}
};
