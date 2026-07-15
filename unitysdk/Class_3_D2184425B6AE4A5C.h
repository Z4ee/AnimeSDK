#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_086C851F36CA131F.h"

namespace RPG::GameCore { class RtBattleVCameraConfigChange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D2184425B6AE4A5C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F92000)
#define CLASS_3_D2184425B6AE4A5C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F91FE0)

inline static constexpr unsigned int Class_3_D2184425B6AE4A5C_TypeDefinitionIndex = 51689;

class Class_3_D2184425B6AE4A5C : public ::Class_2_086C851F36CA131F
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleVCameraConfigChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleVCameraConfigChange*))((::PBYTE)hIl2Cpp + CLASS_3_D2184425B6AE4A5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2184425B6AE4A5C_ONTASKBEGIN_OFFSET))(this);
	}
};
