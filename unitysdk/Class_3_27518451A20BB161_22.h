#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_22_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96CBF00)
#define CLASS_3_27518451A20BB161_22__CTOR_OFFSET UNITYSDK_OFFSET(0x96CBED0)

inline static constexpr unsigned int Class_3_27518451A20BB161_22_TypeDefinitionIndex = 48741;

class Class_3_27518451A20BB161_22 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_22_ONTASKBEGIN_OFFSET))(this);
	}
};
