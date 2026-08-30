#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7E03B67D940AEC1C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_280_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1613D8F0)
#define CLASS_3_27518451A20BB161_280__CTOR_OFFSET UNITYSDK_OFFSET(0x1613D8C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_280_TypeDefinitionIndex = 58177;

class Class_3_27518451A20BB161_280 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7E03B67D940AEC1C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7E03B67D940AEC1C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7E03B67D940AEC1C*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_280__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_280_ONTASKBEGIN_OFFSET))(this);
	}
};
