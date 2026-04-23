#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_12;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_24_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x937E940)
#define CLASS_3_27518451A20BB161_24__CTOR_OFFSET UNITYSDK_OFFSET(0x937E910)

inline static constexpr unsigned int Class_3_27518451A20BB161_24_TypeDefinitionIndex = 48745;

class Class_3_27518451A20BB161_24 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_12*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_12* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_12*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_24__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_24_ONTASKBEGIN_OFFSET))(this);
	}
};
