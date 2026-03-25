#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_18FCCBA13445A673;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_12_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE467B10)
#define CLASS_3_27518451A20BB161_12__CTOR_OFFSET UNITYSDK_OFFSET(0xE467AE0)

inline static constexpr unsigned int Class_3_27518451A20BB161_12_TypeDefinitionIndex = 42753;

class Class_3_27518451A20BB161_12 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_18FCCBA13445A673*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_18FCCBA13445A673* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_18FCCBA13445A673*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_12_ONTASKBEGIN_OFFSET))(this);
	}
};
