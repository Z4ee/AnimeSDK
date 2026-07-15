#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_552EC1E7B14B2FEA;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_94_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16858FF0)
#define CLASS_3_27518451A20BB161_94__CTOR_OFFSET UNITYSDK_OFFSET(0x16858FC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_94_TypeDefinitionIndex = 50874;

class Class_3_27518451A20BB161_94 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_552EC1E7B14B2FEA*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_552EC1E7B14B2FEA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_552EC1E7B14B2FEA*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_94__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_94_ONTASKBEGIN_OFFSET))(this);
	}
};
