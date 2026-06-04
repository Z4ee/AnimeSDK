#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvGameplayTrackNpcReset; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8485B1D985003D43_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCECC770)
#define CLASS_3_8485B1D985003D43__CTOR_OFFSET UNITYSDK_OFFSET(0xCECC740)

inline static constexpr unsigned int Class_3_8485B1D985003D43_TypeDefinitionIndex = 48981;

class Class_3_8485B1D985003D43 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvGameplayTrackNpcReset*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvGameplayTrackNpcReset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvGameplayTrackNpcReset*))((::PBYTE)hIl2Cpp + CLASS_3_8485B1D985003D43__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8485B1D985003D43_ONTASKBEGIN_OFFSET))(this);
	}
};
