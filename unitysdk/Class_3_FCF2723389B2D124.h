#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvNpcRide; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FCF2723389B2D124_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x138FB720)
#define CLASS_3_FCF2723389B2D124__CTOR_OFFSET UNITYSDK_OFFSET(0x138FB6F0)

inline static constexpr unsigned int Class_3_FCF2723389B2D124_TypeDefinitionIndex = 49058;

class Class_3_FCF2723389B2D124 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvNpcRide*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcRide* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcRide*))((::PBYTE)hIl2Cpp + CLASS_3_FCF2723389B2D124__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FCF2723389B2D124_ONTASKBEGIN_OFFSET))(this);
	}
};
