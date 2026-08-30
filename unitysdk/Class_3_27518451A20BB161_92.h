#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FC97B6D504A5D3AF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_92_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158246B0)
#define CLASS_3_27518451A20BB161_92__CTOR_OFFSET UNITYSDK_OFFSET(0x15824680)

inline static constexpr unsigned int Class_3_27518451A20BB161_92_TypeDefinitionIndex = 53295;

class Class_3_27518451A20BB161_92 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FC97B6D504A5D3AF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FC97B6D504A5D3AF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FC97B6D504A5D3AF*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_92__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_92_ONTASKBEGIN_OFFSET))(this);
	}
};
