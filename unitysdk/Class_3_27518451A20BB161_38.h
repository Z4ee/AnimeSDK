#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_10;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_38_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13D12B20)
#define CLASS_3_27518451A20BB161_38__CTOR_OFFSET UNITYSDK_OFFSET(0x13D12AF0)

inline static constexpr unsigned int Class_3_27518451A20BB161_38_TypeDefinitionIndex = 49426;

class Class_3_27518451A20BB161_38 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_10*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_10* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_10*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_38__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_38_ONTASKBEGIN_OFFSET))(this);
	}
};
