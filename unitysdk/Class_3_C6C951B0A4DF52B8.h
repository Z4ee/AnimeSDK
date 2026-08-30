#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetMinimapAlertVisionState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C6C951B0A4DF52B8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152E04B0)
#define CLASS_3_C6C951B0A4DF52B8__CTOR_OFFSET UNITYSDK_OFFSET(0x152E0480)

inline static constexpr unsigned int Class_3_C6C951B0A4DF52B8_TypeDefinitionIndex = 52773;

class Class_3_C6C951B0A4DF52B8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetMinimapAlertVisionState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetMinimapAlertVisionState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetMinimapAlertVisionState*))((::PBYTE)hIl2Cpp + CLASS_3_C6C951B0A4DF52B8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6C951B0A4DF52B8_ONTASKBEGIN_OFFSET))(this);
	}
};
