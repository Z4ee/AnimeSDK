#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropSetupHitBox; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_521E85611E182D5E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C88700)
#define CLASS_3_521E85611E182D5E__CTOR_OFFSET UNITYSDK_OFFSET(0x17C886D0)

inline static constexpr unsigned int Class_3_521E85611E182D5E_TypeDefinitionIndex = 55770;

class Class_3_521E85611E182D5E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetupHitBox*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupHitBox* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupHitBox*))((::PBYTE)hIl2Cpp + CLASS_3_521E85611E182D5E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_521E85611E182D5E_ONTASKBEGIN_OFFSET))(this);
	}
};
