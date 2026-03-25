#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTargetDamageTextVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_855BDA9737490C09_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8789720)
#define CLASS_3_855BDA9737490C09__CTOR_OFFSET UNITYSDK_OFFSET(0x87896F0)

inline static constexpr unsigned int Class_3_855BDA9737490C09_TypeDefinitionIndex = 44510;

class Class_3_855BDA9737490C09 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTargetDamageTextVisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetDamageTextVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetDamageTextVisible*))((::PBYTE)hIl2Cpp + CLASS_3_855BDA9737490C09__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_855BDA9737490C09_ONTASKBEGIN_OFFSET))(this);
	}
};
