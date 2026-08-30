#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetFloorCustomBoolV2; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_03B8E9BBA8CE6BAE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x114D7FB0)
#define CLASS_3_03B8E9BBA8CE6BAE__CTOR_OFFSET UNITYSDK_OFFSET(0x114D7F80)

inline static constexpr unsigned int Class_3_03B8E9BBA8CE6BAE_TypeDefinitionIndex = 53488;

class Class_3_03B8E9BBA8CE6BAE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetFloorCustomBoolV2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFloorCustomBoolV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + CLASS_3_03B8E9BBA8CE6BAE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03B8E9BBA8CE6BAE_ONTASKBEGIN_OFFSET))(this);
	}
};
