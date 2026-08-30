#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvIsometricSetSwipeCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_55E8687F7A825B41_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163CEB80)
#define CLASS_3_55E8687F7A825B41__CTOR_OFFSET UNITYSDK_OFFSET(0x163CEB50)

inline static constexpr unsigned int Class_3_55E8687F7A825B41_TypeDefinitionIndex = 52663;

class Class_3_55E8687F7A825B41 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvIsometricSetSwipeCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvIsometricSetSwipeCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvIsometricSetSwipeCamera*))((::PBYTE)hIl2Cpp + CLASS_3_55E8687F7A825B41__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55E8687F7A825B41_ONTASKBEGIN_OFFSET))(this);
	}
};
