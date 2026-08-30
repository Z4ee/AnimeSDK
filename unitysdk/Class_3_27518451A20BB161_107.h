#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1A9AFEBAAD4E8475;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_107_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB682720)
#define CLASS_3_27518451A20BB161_107__CTOR_OFFSET UNITYSDK_OFFSET(0xB6826F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_107_TypeDefinitionIndex = 53596;

class Class_3_27518451A20BB161_107 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1A9AFEBAAD4E8475*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1A9AFEBAAD4E8475* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1A9AFEBAAD4E8475*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_107__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_107_ONTASKBEGIN_OFFSET))(this);
	}
};
