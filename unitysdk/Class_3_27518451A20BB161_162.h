#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BE5AFEF4939F3D38;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_162_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16CE7730)
#define CLASS_3_27518451A20BB161_162__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE7700)

inline static constexpr unsigned int Class_3_27518451A20BB161_162_TypeDefinitionIndex = 52466;

class Class_3_27518451A20BB161_162 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BE5AFEF4939F3D38*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BE5AFEF4939F3D38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BE5AFEF4939F3D38*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_162__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_162_ONTASKBEGIN_OFFSET))(this);
	}
};
