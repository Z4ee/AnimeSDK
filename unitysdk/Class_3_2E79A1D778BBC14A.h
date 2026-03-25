#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetFloorDefaultEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2E79A1D778BBC14A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11186B00)
#define CLASS_3_2E79A1D778BBC14A__CTOR_OFFSET UNITYSDK_OFFSET(0x11186AD0)

inline static constexpr unsigned int Class_3_2E79A1D778BBC14A_TypeDefinitionIndex = 47131;

class Class_3_2E79A1D778BBC14A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetFloorDefaultEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetFloorDefaultEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetFloorDefaultEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_2E79A1D778BBC14A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E79A1D778BBC14A_ONTASKBEGIN_OFFSET))(this);
	}
};
