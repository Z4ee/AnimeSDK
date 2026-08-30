#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetPhainonChargePoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F0C64A2D832FDD35_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15672D30)
#define CLASS_3_F0C64A2D832FDD35__CTOR_OFFSET UNITYSDK_OFFSET(0x15672D00)

inline static constexpr unsigned int Class_3_F0C64A2D832FDD35_TypeDefinitionIndex = 55750;

class Class_3_F0C64A2D832FDD35 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetPhainonChargePoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPhainonChargePoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPhainonChargePoint*))((::PBYTE)hIl2Cpp + CLASS_3_F0C64A2D832FDD35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C64A2D832FDD35_ONTASKBEGIN_OFFSET))(this);
	}
};
