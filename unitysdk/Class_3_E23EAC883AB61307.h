#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToggleUITop; }

#define CLASS_3_E23EAC883AB61307_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9302330)
#define CLASS_3_E23EAC883AB61307__CTOR_OFFSET UNITYSDK_OFFSET(0x9302300)

inline static constexpr unsigned int Class_3_E23EAC883AB61307_TypeDefinitionIndex = 44366;

class Class_3_E23EAC883AB61307 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ToggleUITop*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToggleUITop* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToggleUITop*))((::PBYTE)hIl2Cpp + CLASS_3_E23EAC883AB61307__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E23EAC883AB61307_ONTASKBEGIN_OFFSET))(this);
	}
};
