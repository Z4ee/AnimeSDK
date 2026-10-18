#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_53DC8508D8E1C90C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_205_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC333940)
#define CLASS_3_27518451A20BB161_205_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC333980)
#define CLASS_3_27518451A20BB161_205__CTOR_OFFSET UNITYSDK_OFFSET(0xC333910)

inline static constexpr unsigned int Class_3_27518451A20BB161_205_TypeDefinitionIndex = 55196;

class Class_3_27518451A20BB161_205 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_53DC8508D8E1C90C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_53DC8508D8E1C90C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_53DC8508D8E1C90C*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_205__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_205_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_205_ONTASKBEGIN_OFFSET))(this);
	}
};
