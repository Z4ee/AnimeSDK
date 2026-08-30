#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6C0B0662F844F32F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_291_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4B4BD0)
#define CLASS_3_27518451A20BB161_291__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B4BA0)

inline static constexpr unsigned int Class_3_27518451A20BB161_291_TypeDefinitionIndex = 58744;

class Class_3_27518451A20BB161_291 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6C0B0662F844F32F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6C0B0662F844F32F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6C0B0662F844F32F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_291__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_291_ONTASKBEGIN_OFFSET))(this);
	}
};
