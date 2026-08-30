#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class InfiniteWaveAddCurWaveMaxCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2F5E3012875179D2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1686FAE0)
#define CLASS_3_2F5E3012875179D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1686FAB0)

inline static constexpr unsigned int Class_3_2F5E3012875179D2_TypeDefinitionIndex = 55326;

class Class_3_2F5E3012875179D2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InfiniteWaveAddCurWaveMaxCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfiniteWaveAddCurWaveMaxCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfiniteWaveAddCurWaveMaxCount*))((::PBYTE)hIl2Cpp + CLASS_3_2F5E3012875179D2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F5E3012875179D2_ONTASKBEGIN_OFFSET))(this);
	}
};
