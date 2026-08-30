#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RotateRubikCube; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_09B3262AE638AB76_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18835C80)
#define CLASS_3_09B3262AE638AB76__CTOR_OFFSET UNITYSDK_OFFSET(0x18835C50)

inline static constexpr unsigned int Class_3_09B3262AE638AB76_TypeDefinitionIndex = 58649;

class Class_3_09B3262AE638AB76 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RotateRubikCube*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RotateRubikCube* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RotateRubikCube*))((::PBYTE)hIl2Cpp + CLASS_3_09B3262AE638AB76__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09B3262AE638AB76_ONTASKBEGIN_OFFSET))(this);
	}
};
