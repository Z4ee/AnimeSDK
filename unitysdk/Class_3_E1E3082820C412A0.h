#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RotateLaserPuzzleRing; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E1E3082820C412A0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17CA6610)
#define CLASS_3_E1E3082820C412A0__CTOR_OFFSET UNITYSDK_OFFSET(0x17CA65E0)

inline static constexpr unsigned int Class_3_E1E3082820C412A0_TypeDefinitionIndex = 55876;

class Class_3_E1E3082820C412A0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RotateLaserPuzzleRing*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RotateLaserPuzzleRing* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RotateLaserPuzzleRing*))((::PBYTE)hIl2Cpp + CLASS_3_E1E3082820C412A0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1E3082820C412A0_ONTASKBEGIN_OFFSET))(this);
	}
};
