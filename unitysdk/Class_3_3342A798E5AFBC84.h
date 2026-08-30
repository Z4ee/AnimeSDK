#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvHideMazeBtn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3342A798E5AFBC84_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18FB1C70)
#define CLASS_3_3342A798E5AFBC84__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB1C40)

inline static constexpr unsigned int Class_3_3342A798E5AFBC84_TypeDefinitionIndex = 58028;

class Class_3_3342A798E5AFBC84 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvHideMazeBtn*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvHideMazeBtn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvHideMazeBtn*))((::PBYTE)hIl2Cpp + CLASS_3_3342A798E5AFBC84__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3342A798E5AFBC84_ONTASKBEGIN_OFFSET))(this);
	}
};
