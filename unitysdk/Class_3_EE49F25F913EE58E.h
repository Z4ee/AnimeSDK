#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchMascotEnableCameraLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EE49F25F913EE58E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA63F80)
#define CLASS_3_EE49F25F913EE58E__CTOR_OFFSET UNITYSDK_OFFSET(0xAA63F50)

inline static constexpr unsigned int Class_3_EE49F25F913EE58E_TypeDefinitionIndex = 54887;

class Class_3_EE49F25F913EE58E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchMascotEnableCameraLookAt*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotEnableCameraLookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotEnableCameraLookAt*))((::PBYTE)hIl2Cpp + CLASS_3_EE49F25F913EE58E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE49F25F913EE58E_ONTASKBEGIN_OFFSET))(this);
	}
};
