#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByInfiniteWaveData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_ADD57F66AB5810C3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCCDC3F0)
#define CLASS_3_ADD57F66AB5810C3__CTOR_OFFSET UNITYSDK_OFFSET(0xCCDC310)

inline static constexpr unsigned int Class_3_ADD57F66AB5810C3_TypeDefinitionIndex = 55642;

class Class_3_ADD57F66AB5810C3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByInfiniteWaveData*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByInfiniteWaveData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByInfiniteWaveData*))((::PBYTE)hIl2Cpp + CLASS_3_ADD57F66AB5810C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ADD57F66AB5810C3_ONTASKBEGIN_OFFSET))(this);
	}
};
