#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PauseMusicVisualEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A84074066A78F6C6_METHOD_3_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x17024160)
#define CLASS_3_A84074066A78F6C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17024020)
#define CLASS_3_A84074066A78F6C6__CTOR_OFFSET UNITYSDK_OFFSET(0x17023FF0)

inline static constexpr unsigned int Class_3_A84074066A78F6C6_TypeDefinitionIndex = 50651;

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

	::System::Void Method_3_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A84074066A78F6C6_METHOD_3_5F08B426ADF31FF5_OFFSET))(this);
	}
};
