#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropSetupHitBoxGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3D7F5FB85ABC0598_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18CF16B0)
#define CLASS_3_3D7F5FB85ABC0598__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF1680)

inline static constexpr unsigned int Class_3_3D7F5FB85ABC0598_TypeDefinitionIndex = 58500;

class Class_3_3D7F5FB85ABC0598 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetupHitBoxGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupHitBoxGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupHitBoxGroup*))((::PBYTE)hIl2Cpp + CLASS_3_3D7F5FB85ABC0598__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D7F5FB85ABC0598_ONTASKBEGIN_OFFSET))(this);
	}
};
