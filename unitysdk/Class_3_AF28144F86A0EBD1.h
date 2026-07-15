#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvIsometricSetZoomState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AF28144F86A0EBD1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14D078E0)
#define CLASS_3_AF28144F86A0EBD1__CTOR_OFFSET UNITYSDK_OFFSET(0x14D078B0)

inline static constexpr unsigned int Class_3_AF28144F86A0EBD1_TypeDefinitionIndex = 50003;

class Class_3_AF28144F86A0EBD1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvIsometricSetZoomState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvIsometricSetZoomState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvIsometricSetZoomState*))((::PBYTE)hIl2Cpp + CLASS_3_AF28144F86A0EBD1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF28144F86A0EBD1_ONTASKBEGIN_OFFSET))(this);
	}
};
