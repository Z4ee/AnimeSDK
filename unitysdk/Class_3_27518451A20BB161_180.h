#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_17;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_180_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3FE6F0)
#define CLASS_3_27518451A20BB161_180__CTOR_OFFSET UNITYSDK_OFFSET(0xA3FE6C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_180_TypeDefinitionIndex = 52675;

class Class_3_27518451A20BB161_180 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_17*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_17* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_17*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_180__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_180_ONTASKBEGIN_OFFSET))(this);
	}
};
