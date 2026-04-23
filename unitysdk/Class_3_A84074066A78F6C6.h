#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PauseMusicVisualEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A84074066A78F6C6_METHOD_3_8CB9BDF340E2FC64_OFFSET UNITYSDK_OFFSET(0x98B5840)
#define CLASS_3_A84074066A78F6C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x98B5700)
#define CLASS_3_A84074066A78F6C6__CTOR_OFFSET UNITYSDK_OFFSET(0x98B56D0)

inline static constexpr unsigned int Class_3_A84074066A78F6C6_TypeDefinitionIndex = 48931;

class Class_3_A84074066A78F6C6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PauseMusicVisualEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseMusicVisualEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseMusicVisualEffect*))((::PBYTE)hIl2Cpp + CLASS_3_A84074066A78F6C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A84074066A78F6C6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8CB9BDF340E2FC64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A84074066A78F6C6_METHOD_3_8CB9BDF340E2FC64_OFFSET))(this);
	}
};
