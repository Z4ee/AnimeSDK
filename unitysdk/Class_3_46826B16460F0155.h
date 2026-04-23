#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class IsometricEnableClusterLighting; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_46826B16460F0155_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9228BD0)
#define CLASS_3_46826B16460F0155__CTOR_OFFSET UNITYSDK_OFFSET(0x9228BA0)

inline static constexpr unsigned int Class_3_46826B16460F0155_TypeDefinitionIndex = 48820;

class Class_3_46826B16460F0155 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::IsometricEnableClusterLighting*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::IsometricEnableClusterLighting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::IsometricEnableClusterLighting*))((::PBYTE)hIl2Cpp + CLASS_3_46826B16460F0155__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46826B16460F0155_ONTASKBEGIN_OFFSET))(this);
	}
};
