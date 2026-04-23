#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F1507657401FC6F9_6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_134_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x930D9A0)
#define CLASS_3_27518451A20BB161_134__CTOR_OFFSET UNITYSDK_OFFSET(0x930D970)

inline static constexpr unsigned int Class_3_27518451A20BB161_134_TypeDefinitionIndex = 51012;

class Class_3_27518451A20BB161_134 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F1507657401FC6F9_6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F1507657401FC6F9_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F1507657401FC6F9_6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_134__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_134_ONTASKBEGIN_OFFSET))(this);
	}
};
