#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraNoiseCloseForBattleDataView; }

#define CLASS_3_A5BB71C1B9CF016D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8890FE0)
#define CLASS_3_A5BB71C1B9CF016D__CTOR_OFFSET UNITYSDK_OFFSET(0x8890FB0)

inline static constexpr unsigned int Class_3_A5BB71C1B9CF016D_TypeDefinitionIndex = 44705;

class Class_3_A5BB71C1B9CF016D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::VCameraNoiseCloseForBattleDataView*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraNoiseCloseForBattleDataView* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraNoiseCloseForBattleDataView*))((::PBYTE)hIl2Cpp + CLASS_3_A5BB71C1B9CF016D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5BB71C1B9CF016D_ONTASKBEGIN_OFFSET))(this);
	}
};
