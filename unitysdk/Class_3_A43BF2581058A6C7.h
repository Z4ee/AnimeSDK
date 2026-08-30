#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAvatarDetachableEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A43BF2581058A6C7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155ED460)
#define CLASS_3_A43BF2581058A6C7__CTOR_OFFSET UNITYSDK_OFFSET(0x155ED430)

inline static constexpr unsigned int Class_3_A43BF2581058A6C7_TypeDefinitionIndex = 58661;

class Class_3_A43BF2581058A6C7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAvatarDetachableEnable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAvatarDetachableEnable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAvatarDetachableEnable*))((::PBYTE)hIl2Cpp + CLASS_3_A43BF2581058A6C7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A43BF2581058A6C7_ONTASKBEGIN_OFFSET))(this);
	}
};
