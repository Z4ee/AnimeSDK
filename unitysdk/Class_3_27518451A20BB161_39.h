#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B0AB8E43852CF781;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_39_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13B4B260)
#define CLASS_3_27518451A20BB161_39__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4B230)

inline static constexpr unsigned int Class_3_27518451A20BB161_39_TypeDefinitionIndex = 49427;

class Class_3_27518451A20BB161_39 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B0AB8E43852CF781*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B0AB8E43852CF781* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B0AB8E43852CF781*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_39__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_39_ONTASKBEGIN_OFFSET))(this);
	}
};
