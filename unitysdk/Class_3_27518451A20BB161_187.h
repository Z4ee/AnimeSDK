#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_22;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_187_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC21480)
#define CLASS_3_27518451A20BB161_187__CTOR_OFFSET UNITYSDK_OFFSET(0xAC21450)

inline static constexpr unsigned int Class_3_27518451A20BB161_187_TypeDefinitionIndex = 54363;

class Class_3_27518451A20BB161_187 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_22*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_22* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_22*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_187__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_187_ONTASKBEGIN_OFFSET))(this);
	}
};
