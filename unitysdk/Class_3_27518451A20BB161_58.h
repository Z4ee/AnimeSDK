#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D36839C61E9EA81F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_58_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x170C2F00)
#define CLASS_3_27518451A20BB161_58__CTOR_OFFSET UNITYSDK_OFFSET(0x170C2ED0)

inline static constexpr unsigned int Class_3_27518451A20BB161_58_TypeDefinitionIndex = 50473;

class Class_3_27518451A20BB161_58 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D36839C61E9EA81F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D36839C61E9EA81F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D36839C61E9EA81F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_58__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_58_ONTASKBEGIN_OFFSET))(this);
	}
};
