#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1E5FD6A2431A0278;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_133_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17028600)
#define CLASS_3_27518451A20BB161_133__CTOR_OFFSET UNITYSDK_OFFSET(0x170285D0)

inline static constexpr unsigned int Class_3_27518451A20BB161_133_TypeDefinitionIndex = 51442;

class Class_3_27518451A20BB161_133 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1E5FD6A2431A0278*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1E5FD6A2431A0278* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1E5FD6A2431A0278*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_133__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_133_ONTASKBEGIN_OFFSET))(this);
	}
};
