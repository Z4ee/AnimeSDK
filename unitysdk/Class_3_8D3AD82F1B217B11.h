#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_086C851F36CA131F.h"

namespace RPG::GameCore { class RtBattleVCameraConfigChange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8D3AD82F1B217B11_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12E73E00)
#define CLASS_3_8D3AD82F1B217B11__CTOR_OFFSET UNITYSDK_OFFSET(0x12E73DE0)

inline static constexpr unsigned int Class_3_8D3AD82F1B217B11_TypeDefinitionIndex = 54373;

class Class_3_8D3AD82F1B217B11 : public ::Class_2_086C851F36CA131F
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleVCameraConfigChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleVCameraConfigChange*))((::PBYTE)hIl2Cpp + CLASS_3_8D3AD82F1B217B11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D3AD82F1B217B11_ONTASKBEGIN_OFFSET))(this);
	}
};
