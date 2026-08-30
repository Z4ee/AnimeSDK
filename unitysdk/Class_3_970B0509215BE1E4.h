#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BaseAdventureCameraLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_970B0509215BE1E4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18CE1860)
#define CLASS_3_970B0509215BE1E4__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE1830)

inline static constexpr unsigned int Class_3_970B0509215BE1E4_TypeDefinitionIndex = 55082;

class Class_3_970B0509215BE1E4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BaseAdventureCameraLookAt*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BaseAdventureCameraLookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BaseAdventureCameraLookAt*))((::PBYTE)hIl2Cpp + CLASS_3_970B0509215BE1E4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_970B0509215BE1E4_ONTASKBEGIN_OFFSET))(this);
	}
};
