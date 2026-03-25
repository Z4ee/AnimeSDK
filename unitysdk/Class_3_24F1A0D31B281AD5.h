#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LittleGameSpeedLineEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_24F1A0D31B281AD5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1061B4B0)
#define CLASS_3_24F1A0D31B281AD5__CTOR_OFFSET UNITYSDK_OFFSET(0x1061B480)

inline static constexpr unsigned int Class_3_24F1A0D31B281AD5_TypeDefinitionIndex = 42868;

class Class_3_24F1A0D31B281AD5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LittleGameSpeedLineEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LittleGameSpeedLineEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LittleGameSpeedLineEffect*))((::PBYTE)hIl2Cpp + CLASS_3_24F1A0D31B281AD5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_24F1A0D31B281AD5_ONTASKBEGIN_OFFSET))(this);
	}
};
