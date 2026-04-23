#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PerformanceDynamicLoadCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E43D0D0AF939B1D8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A68AB0)
#define CLASS_3_E43D0D0AF939B1D8__CTOR_OFFSET UNITYSDK_OFFSET(0x12A68A80)

inline static constexpr unsigned int Class_3_E43D0D0AF939B1D8_TypeDefinitionIndex = 48943;

class Class_3_E43D0D0AF939B1D8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PerformanceDynamicLoadCharacter*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformanceDynamicLoadCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformanceDynamicLoadCharacter*))((::PBYTE)hIl2Cpp + CLASS_3_E43D0D0AF939B1D8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E43D0D0AF939B1D8_ONTASKBEGIN_OFFSET))(this);
	}
};
