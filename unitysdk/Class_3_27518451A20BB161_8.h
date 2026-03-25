#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_C8B9FE2189B6BD01;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11877620)
#define CLASS_3_27518451A20BB161_8__CTOR_OFFSET UNITYSDK_OFFSET(0x118775F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_8_TypeDefinitionIndex = 42746;

class Class_3_27518451A20BB161_8 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C8B9FE2189B6BD01*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C8B9FE2189B6BD01* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C8B9FE2189B6BD01*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_8_ONTASKBEGIN_OFFSET))(this);
	}
};
