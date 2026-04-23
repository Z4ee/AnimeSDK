#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_51193B5F207F2762;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_179_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B006A0)
#define CLASS_3_27518451A20BB161_179__CTOR_OFFSET UNITYSDK_OFFSET(0x11B00670)

inline static constexpr unsigned int Class_3_27518451A20BB161_179_TypeDefinitionIndex = 54020;

class Class_3_27518451A20BB161_179 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_51193B5F207F2762*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_51193B5F207F2762* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_51193B5F207F2762*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_179__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_179_ONTASKBEGIN_OFFSET))(this);
	}
};
