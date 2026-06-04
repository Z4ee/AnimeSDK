#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D8668F6180CE913B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_152_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13693A80)
#define CLASS_3_27518451A20BB161_152__CTOR_OFFSET UNITYSDK_OFFSET(0x13693A50)

inline static constexpr unsigned int Class_3_27518451A20BB161_152_TypeDefinitionIndex = 51886;

class Class_3_27518451A20BB161_152 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D8668F6180CE913B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D8668F6180CE913B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D8668F6180CE913B*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_152__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_152_ONTASKBEGIN_OFFSET))(this);
	}
};
